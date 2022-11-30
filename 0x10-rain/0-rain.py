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
    wall = 0
    while walls[0] == 0:
        walls.pop(0)
    while walls[len(walls) - 1] == 0:
        walls.pop()
    for i in walls:
        count2 = count
        if count != len(walls) - 1:
            if i > 0:
                wall = i
            elif i == 0:
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
            else:
                return 0
            count += 1 
    return water2
