#!/usr/bin/python3
"""
    return amount of rainwater retained.
"""


def rain(walls):
    count = 0
    count2 = 0
    count3 = 0
    water = 0
    water2 = 0
    wall = 0
    size = len(walls)
    if not walls:
        return 0
    while walls[0] == 0:
        count3 += 1
        if count3 == size:
            return 0
        walls.pop(0)
    while walls[len(walls) - 1] == 0:
        walls.pop()
    if walls:
        for i in walls:
            count2 = count
            if count != len(walls) - 1:
                if i > 0:
                    wall = i
                else:
                    while walls[count2] == 0:
                        count2 += 1
                    if wall <= walls[count2]:
                        water = wall
                        n = 0
                        while n < water:
                            water2 += 1
                            n += 1
                    else:
                        water = walls[count2]
                        n = 0
                        while n < water:
                            water2 += 1
                            n += 1
                count += 1
        return water2
