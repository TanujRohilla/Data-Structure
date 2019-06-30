# Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots. 

t=int(input())
while(t):
    n=input().split(".")
    s=n[::-1]
    d=".".join(s)
    print(d)
    t=t-1