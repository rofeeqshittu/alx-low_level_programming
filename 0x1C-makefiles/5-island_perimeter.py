#!/usr/bin/python3
"""
This module contains the function island_perimeter
which calculates the perimeter of the island in a grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid.
    
    Args:
        grid (list of list of int): A list of list where
            0 represents water and 1 represents land.
    
    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each land cell starts with 4 sides
                perimeter += 4

                # Check if the cell above is land, if yes, reduce perimeter by 2
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                
                # Check if the cell to the left is land, if yes, reduce perimeter by 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter

