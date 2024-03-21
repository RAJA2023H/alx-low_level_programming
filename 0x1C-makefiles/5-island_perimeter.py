#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    P = 0
    if not grid:
        return P

    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                P += 4
                if (col - 1) >= 0 and grid[row][col - 1] == 1:
                    P -= 1
                if (col + 1) < cols and grid[row][col + 1] == 1:
                    P -= 1
                if (row - 1) >= 0 and grid[row - 1][col] == 1:
                    P -= 1
                if (row + 1) <  rows and grid[row + 1][col] == 1:
                    P -= 1
    return P
