#!/usr/bin/python3
""" 5-island_perimeter.py """


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    perimeter = 0
    for row in range(len(grid)):
        for ext_sq in range(len(grid[row])):
            if grid[row][ext_sq] == 1:
                fixed_square = 4
                if ext_sq - 1 >= 0 and grid[row][ext_sq - 1] == 1:
                    fixed_square -= 1
                if ext_sq + 1 < len(grid[row]) and grid[row][ext_sq + 1] == 1:
                    fixed_square -= 1
                if row - 1 >= 0 and grid[row - 1][ext_sq] == 1:
                    fixed_square -= 1
                if row + 1 < len(grid) and grid[row + 1][ext_sq] == 1:
                    fixed_square -= 1
                perimeter += fixed_square
    return perimeter
