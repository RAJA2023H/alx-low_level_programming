#!/usr/bin/python3
"""
function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    P = 0
    if len(grid) == 0:
        return P
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                P += 4
                if grid[row][col - 1] == 1:
                    P -= 1
                if grid[row][col + 1] == 1:
                    P -= 1
                if grid[row - 1][col] == 1:
                    P -= 1
                if grid[row + 1][col] == 1:
                    P -= 1
    return P
