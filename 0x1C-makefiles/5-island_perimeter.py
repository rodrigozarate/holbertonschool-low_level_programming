#!/usr/bin/python3
""" Calculate the perimeter of grid """


def island_perimeter(grid):
    """
    add four for every lone grid value in 1
    if adjacent grid value in y axis is 1
    lower perimeter by 2 (the two sides together)
    if adjacent grid value in x axis is 1
    lower perimeter by 2 (the two sides together)
    return perimeter
    """
    perimeter = 0
    for x in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[x][j] == 1:
                perimeter = perimeter + 4
                if j - 1 >= 0 and grid[x][j - 1] == 1:
                    perimeter -= 2
                if x - 1 >= 0 and grid[x - 1][j] == 1:
                    perimeter -= 2
    return (perimeter)
