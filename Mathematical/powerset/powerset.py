# program to find the powerset
import math

def powerset(set,n):
	for i in range(0,(int)(math.pow(2,n))):
		for j in range(0,n):
			if (i & (1<<j)):
				print(set[j],end="")
		print("")

set = input().split(",")
powerset(set,len(set))
