#!/usr/bin/python3
"""
A module that contains a function to calculate the perimeter of an island
"""


def island_perimeter(grid):
    """
    A function to compute the perimeter of an island
    in a grid
    """

    perimeter = 0
    isolated = 0

    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 0:
                if not is_on_edge(grid, i, j):
                    if is_isolated(grid, i, j): # using isolated func to check for a lake
                        return
            else:
                if isolated: # Return if we already found a stand alone island
                    return
                if is_on_edge(grid, i, j):
                    return
                if is_isolated(grid, i, j): # Check if this cell is an island
                    isolated = 1
                if is_inland(grid, i, j):
                    continue
                else:
                    perimeter += peri(grid, i, j)
    return perimeter

def is_inland(grid, i, j):
    """
    checks if this zone is totally bunded by land
    so we dont have to calculate its
    perimeter
    """

    if grid[i - 1][j] == 0:
        return 0
    if grid[i + 1][j] == 0:
        return 0
    if grid[i][j - 1] == 0:
        return 0
    if grid[i][j + 1] == 0:
        return 0
    return 1

def is_isolated(grid, i, j):
    """
    check if the zone is isolated
    """
    zone = grid[i][j]
    
    # Todo: Check if the current node is on the edge to avoid an index error

    if grid[i - 1][j] == zone:
        return 0
    if grid[i + 1][j] == zone:
        return 0
    if grid[i][j - 1] == zone:
        return 0
    if grid[i][j + 1] == zone:
        return 0
    return 1

def peri(grid, i, j):
    """
    Function to compute how many points to
    add to the perimeter
    """
    points = 0
    if grid[i - 1][j] == 0:
        points += 1
    if grid[i + 1][j] == 0:
        points += 1
    if grid[i][j - 1] == 0:
        points += 1
    if grid[i][j + 1] == 0:
        points += 1
    return points


def is_on_edge(grid, i, j):
    """
    checks if a cell with value 1 is on
    the edge of the grid
    """

    if i == 0 or i == (len(grid) -1):
        return 1
    if j == 0 or j == (len(grid[0]) - 1):
        return 1
    return 0
