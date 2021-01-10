#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    for j in s2:
        if j in s1:
            return "YES"
            break
        else:
            continue
        
        return "NO"

n= int(input())
   for q_itr in range(n):
        s1 = input()

        s2 = input()

        result = twoStrings(s1, s2)

        print(result)

