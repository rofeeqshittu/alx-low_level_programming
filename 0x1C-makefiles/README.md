```markdown
# 0x1C. C - Makefiles

## Description
This project is focused on understanding and using **Makefiles** in C programming. A Makefile is a file that tells the `make` utility how to compile and link a program. In this project, we'll explore various concepts such as rules, variables, implicit rules, and commands, along with their significance in automating the build process.

### Learning Objectives
By the end of this project, you should be able to explain the following concepts to anyone:
- What are `make` and Makefiles?
- When, why, and how to use Makefiles?
- What are rules and how to set and use them?
- What are explicit and implicit rules?
- What are the most common/useful rules?
- What are variables and how to set and use them?

## Project Structure

The project includes several tasks that gradually increase in complexity as you work through Makefiles. Here's an overview of each task:

### 0. **make -f 0-Makefile**
**File:** `0-Makefile`  
**Description:**  
This is your first Makefile. It compiles the `school` executable using `main.c` and `school.c`. No variables are used here.
```bash
gcc main.c school.c -o school
```
**Rule(s):**
- `all`: Builds the executable `school`.

### 1. **make -f 1-Makefile**
**File:** `1-Makefile`  
**Description:**  
This Makefile uses variables for the compiler and source files. The `CC` variable specifies the compiler, and `SRC` lists the source files.
```bash
CC = gcc
SRC = main.c school.c
```
**Rule(s):**
- `all`: Builds the executable using the source files listed in `SRC`.

### 2. **make -f 2-Makefile**
**File:** `2-Makefile`  
**Description:**  
This Makefile introduces object files and more variables such as `OBJ` and `NAME`. It compiles object files only for modified source files.
```bash
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school
```
**Rule(s):**
- `all`: Builds the executable using the object files, recompiling only the updated files.

### 3. **make -f 3-Makefile**
**File:** `3-Makefile`  
**Description:**  
This Makefile adds more functionality with clean-up rules: `clean`, `oclean`, `fclean`, and `re`. The `RM` variable specifies the command to delete files.
```bash
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school
RM = rm -f
```
**Rule(s):**
- `all`: Builds the executable.
- `clean`: Removes all Emacs/Vim temporary files and the executable.
- `oclean`: Removes the object files.
- `fclean`: Removes both the object files and the executable.
- `re`: Forces recompilation of all source files.

### 4. **A complete Makefile**
**File:** `4-Makefile`  
**Description:**  
This Makefile includes everything from previous tasks and adds compiler flags (`CFLAGS`) for stricter compilation with `-Wall -Werror -Wextra -pedantic`.
```bash
CC = gcc
SRC = main.c school.c
OBJ = main.o school.o
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic
```
**Rule(s):**
- `all`: Builds the executable with stricter flags.
- `clean`: Removes temporary files and the executable.
- `oclean`: Removes object files.
- `fclean`: Removes both object files and the executable.
- `re`: Forces recompilation of all source files.

### 5. **Island Perimeter**
**File:** `5-island_perimeter.py`  
**Description:**  
This file is a Python script designed to solve the Island Perimeter problem. The goal is to calculate the perimeter of an island represented by a grid where 1 represents land and 0 represents water.
**Example input:**  
```
grid = [
    [0, 1, 0, 0],
    [1, 1, 1, 0],
    [0, 1, 0, 0],
    [1, 1, 0, 0]
]
```
**Example output:**  
```
Perimeter = 16
```
**Function:**  
```python
def island_perimeter(grid):
    # Your code here
```

## Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc` 9.3.0
- Make version: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file at the root of the project folder is mandatory

## Usage
To run the tasks, use the `make` command followed by the respective Makefile:
```bash
make -f 0-Makefile   # Task 0
make -f 1-Makefile   # Task 1
make -f 2-Makefile   # Task 2
make -f 3-Makefile   # Task 3
make -f 4-Makefile   # Task 4
```

For clean-up:
```bash
make clean -f 3-Makefile   # Clean temporary files and the executable
make oclean -f 3-Makefile  # Clean object files
make fclean -f 3-Makefile  # Clean all files
make re -f 3-Makefile      # Recompile everything
```

## Author
[Rofeeq Shittu](https://github.com/rofeeqshittu)
```
