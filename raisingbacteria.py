n = int(input())
count = 0
while n>0:
    count += n%2
    n = n//2
print(count)