#!/usr/bin/python3
"""
	You have n number of locked boxes in front of you.
	Each box is numbered sequentially from 0 to n - 1
	and each box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """
            method that determines if all the boxes can be opened.
    """
    list = 1
    dict = {0: "true"}
    while list < len(boxes):
        dict[list] = "false"
        list += 1
    count = 0
    for i in boxes:
        if dict[count] == "false":
            return (False)
        for h in i:
            if (h in dict.keys()):
                dict[h] = "true"
                for o in boxes[h]:
                    dict[o] = "true"
        count += 1
    return (True)
