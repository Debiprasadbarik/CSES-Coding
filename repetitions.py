#You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
#Input:
#The only input line contains a string of n
# characters.
#Output:
#Print one integer: the length of the longest repetition.
#Constraints: 1≤n≤10^6
# seq=input()
# a=seq.count("A")
# c=seq.count("C")
# g=seq.count("G")
# t=seq.count("T")
# print(max(a,c,g,t))
seq=input()
leng=len(seq)
count=0
for i in range(leng):
    if seq[i]==seq[i+1]:
        count+=1
    else:
        count=0
print(count)
