import numpy as np
import matplotlib.pyplot as plt

data = open("G.dat", 'r')

x = []
y = []

lines = data.readlines()
cnt = 0
for line in lines:
    words = line.split()
    x.append(float(words[0]))
    y.append(float(words[1]))
    cnt = cnt + 1
    # if cnt > 0: break

#print(x)
#print(y)

colors = (0,0,0)
plt.scatter(x, y, c=colors)
plt.title('G.dat')
plt.xlabel('x')
plt.ylabel('y')
plt.show()