#task1
'''
x = int(input())
y = int(input())

print(f'Sum: {x+y}')
'''

#task2
'''
x = input().split()


print(f'Sum: {int(x[0])+int(x[1])}')
'''

#task3
'''
x = input()
y = input().split()
count = 0
for i in y:
  count+= int(i)
print(f"Sum: {count}")
'''

#task4
'''
x = input().split()
N = int(x[0])
M = int(x[1])
y = []
for i in range(N):
  x = input().split()
  z = []
  for i in x:
    z.append(int(i))
  y.append(z)

for i in range(len(y)):
  c = y[i]
  c.sort()
  
  print(f"Line #{i+1}: {c[0]} {c[-1]}")
'''
#task5
x = input().split()

N = int(x[0])
M = int(x[1])
a = []
for j in range(N):
  b = input().split()
  a.append(b)

for i in range(len(a)):
  for j in range(len(a[i])):
    start = [i, j]
    end = [M - i, N - j]
    khoj(start, end)
sizes = []


def khoj(start, end):
  x = end[0] - start[0]
  y = end[1] - start[1]
  for i in range(x):
    for j in range(y):
      if a[i][j] == ".":
        continue
      else:
        break
