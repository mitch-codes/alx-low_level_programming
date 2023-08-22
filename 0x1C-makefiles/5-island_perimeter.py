#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
        grid(matrix): input grid

    Description:
        Traverse the land mass, and
        for the lake's nearest neighbor
        then return the total length

    """
    hsize = len(grid)
    wsize = len(grid[1])
    total = 0

    for i in range(hsize):
        for j in range(wsize):
            if (grid[i][j] == 1):
                if (grid[i][j-1] == 0 or grid[i][j-1] == None):
                    total += 1
                if (grid[i][j+1] == 0 or grid[i][j+1] == None):
                    total += 1
                if (grid[i-1][j] == 0 or grid[i-1][j] == None):
                    total += 1
                if (grid[i+1][j] == 0 or grid[i+1][j] == None):
                    total += 1

    return total
