#!/usr/bin/python3
"""
    return amount of rainwater retained.
"""


def rain(walls):
    if not walls:
        return 0
    count = 0
    count2 = 0
    water = 0
    water2 = 0
    noWater = 0
    while walls[0] == 0:
        walls.pop(0)
    while walls[len(walls) - 1] == 0:
        walls.pop()
    for i in walls:
        count2 = count
        if i != 0:
            if i < 0:
                return 0
            noWater = i
        else:
            while walls[count2] == 0:
                count2 += 1
            if noWater < walls[count2]:
                water = noWater
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
