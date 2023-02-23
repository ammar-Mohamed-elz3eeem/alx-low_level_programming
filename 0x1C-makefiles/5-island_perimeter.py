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
    edges = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                perimeter += 1

                if row > 0 and grid[row - 1][col]:
                    edges += 1
                if col > 0 and grid[row][col - 1]:
                    edges += 1
    return perimeter * 4 - edges * 2
