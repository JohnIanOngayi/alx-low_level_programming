#!/usr/bin/python3

"""
Module contains a function that calculates the perimeter of an island
"""


def island_perimeter(grid) -> int:
    """
    Returns the perimeter of an island

    Parameters:
    grid: of 1's and 0's describing the island area
    """

    perimeter = 0
    if len(grid) == 0 or grid is None:
        return 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            inner_result = 0
            if grid[i][j] == 0:
                pass

            else:
                try:
                    if grid[i][j + 1] and grid[i][j + 1] == 1:
                        inner_result += 1
                except IndexError:
                    pass

                try:
                    if grid[i][j - 1] and grid[i][j - 1] == 1:
                        inner_result += 1
                except IndexError:
                    pass

                try:
                    if grid[i + 1][j] and grid[1 + 1][j] == 1:
                        inner_result += 1
                except IndexError:
                    pass

                try:
                    if grid[i - 1][j] and grid[i - 1][j] == 1:
                        inner_result += 1
                except IndexError:
                    pass

                additional_perimeter = 4 - inner_result
                perimeter = perimeter + additional_perimeter

    return perimeter
