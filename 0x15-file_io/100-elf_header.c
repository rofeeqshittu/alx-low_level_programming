#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * display_elf_header_info - Display information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header) {
    int i;  /* Declare 'i' before the loop (C90 style) */
    
    /* Print the ELF magic number */
    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:   %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data:    %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
    printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:  %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

    /* Print the ELF type */
    printf("Type:    ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (Unknown)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
    }

    /* Print the entry point address */
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    int fd; /* Declare 'fd' before any code (C90 style) */
    Elf64_Ehdr header;
    int i; /* Declare 'i' before any code (C90 style) */
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(98);
    }

    /* Read ELF header */
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        perror("Error reading ELF header");
        close(fd);
        exit(98);
    }

    /* Check ELF magic number */
    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    /* Display ELF header information */
    display_elf_header_info(&header);

    close(fd);
    return 0;
}

