t = int(input())
count = 0

for i in range(t):

    a,b,c = map(int,input().rstrip().split())

    if ((a==1 and b == 1) or (b==1 and c==1) or (a==1 and c==1)):
        count += 1 

print(count)