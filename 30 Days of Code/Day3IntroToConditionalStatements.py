#!/bin/python

import sys


n = int(raw_input().strip())
if(n%2!=0):
    print "Weird"
elif((n<5) or (n>20)):
    print "Not Weird"
elif((n>5) or (n<20)):
    print "Weird"