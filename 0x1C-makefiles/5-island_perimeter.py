#!/usr/bin/python3
def island_perimeter(grid):
    """
    fun to Calculate the perimeter of an island that is surrounded by water
    the Land is 1 and the water is 0.
    Aguments:
        - grid: A matrix filled with 0, 1 representing a map.
    """
    water = 0
    land = 1
    perimeter = 0

    for j, level in enumerate(grid):
        for i, parcel in enumerate(level):
            if parcel == land:  # Checking only when hitting land
                if i == 0 or grid[j][i - 1] == water:  # Looking west
                    perimeter += 1
                if (i + 1) == len(level) or grid[j][i + 1] == water:
                    perimeter += 1
                if j == 0 or grid[j - 1][i] == water:  # Looking north
                    perimeter += 1
                if (j + 1) == len(grid) or grid[j + 1][i] == water:
                    perimeter += 1

    return perimeter
