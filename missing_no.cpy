# You are given all numbers between 1,2,…,n
#  except one. Your task is to find the missing number.
# Input
# The first input line contains an integer n
# The second line contains n−1
#  numbers. Each number is distinct and between 1
#  and n (inclusive).
# Output
# Print the missing number.
n=int(input())
x = list(map(int, input(). split()))
x.sort()
print(x)
for j in range(1,n+1):
    if j in x:
        continue
    else:
        print(j)
