n = input()
set1 = [];
set1.append([1]);
for i in range(1,n):
   set1.append([1]);
   for j in range(1,i):
      sum = set1[i-1][j-1] + set1[i-1][j]
      print(sum,end=" ")
   set1.append([1])
   print()
