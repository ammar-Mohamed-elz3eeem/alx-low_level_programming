#!/usr/bin/python3
""" get the perimeter of the island """


def island_perimeter(grid):
    """
        island_perimeter

        Args:
            grid (list<list<int>>): list of lists that represent island

        Returns:
            int: perimeter of islamd
    """

    perimeter = 0

    for row in range(1, len(grid)):
        for col in range(1, len(grid[row])):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1
    if grid[0][0] == 1:
        perimeter += 2
    if grid[0][len(grid[0]) - 1] == 1:
        perimeter += 2
    return (perimeter)
