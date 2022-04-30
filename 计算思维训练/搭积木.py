n=int(input())
matrix=[(['x'] * n) for i in range(n)]
def find(a,matrix):#找到a的坐标（二维数组）
    for i in range(n):
        for j in range(n):
            if matrix[i][j] == a:
                return [i,j]
def recover(a,matrix):#将a之上的所有木块恢复最初位置
    dot = find(a,matrix)
    for i in range(dot[1]+1,n):
        if matrix[dot[0]][i] != 'x':
            matrix[matrix[dot[0]][i]][0] = matrix[dot[0]][i]
            matrix[dot[0]][i]='x'
    return matrix
def mvon(a,b,matrix):
    recover(a,matrix)
    recover(b,matrix)
    matrix[q[0]][q[1]+1]=a
    matrix[p[0]][p[1]]='x'
    return matrix
def mvov(a,b,matrix):
    for i in range(p[1]+1,n):
        if matrix[p[0]][i] != 'x':
            matrix[matrix[p[0]][i]][0] = matrix[p[0]][i]
            matrix[p[0]][i]='x'
    for j in range(1,n):
        if matrix[q[0]][j] == 'x':
            break
    matrix[q[0]][j]= a
    matrix[p[0]][p[1]]='x'
    return matrix
def ston(a,b,matrix):
    recover(b,matrix)
    k=1
    for j in range(0,n):
        if matrix[p[0]][j] == 'x':
            break
        else:
            matrix[q[0]][q[1]+k] = matrix[p[0]][j]
            matrix[p[0]][j] = 'x'
            k+=1
    return matrix
def stov(a,b,matrix):
    for i in range(0,n):
        if matrix[q[0]][i] == 'x':
            k=i
            break
    for j in range(p[1],n):
        if matrix[p[0]][j] == 'x':
            break
        else:
            matrix[q[0]][k] = matrix[p[0]][j]
            matrix[p[0]][j] ='x'
            k+=1
    return matrix
def xhan(a,b,matrix):
    temp = matrix[p[0]]
    matrix[p[0]] = matrix[q[0]]
    matrix[q[0]] = temp
    return matrix
for i in range(0,n):
    matrix[i][0]=i
while True:
    line = input()
    if line == 'q':
        break
    else:
        a = line.split()
        a[1]=int(a[1])
        a[3]=int(a[3])
        p=find(a[1],matrix)
        q=find(a[3],matrix)
        if p[0] == q[0]:#判断a,b是否同一列
            continue
        if a[1] == a[3]:#判断a,b是否相等
            continue
        if a[0]+a[2] == "mvon":
            matrix=mvon(a[1],a[3],matrix)
        if a[0]+a[2] == "mvov":
            matrix=mvov(a[1],a[3],matrix)
        if a[0]+a[2] == "ston":
            matrix=ston(a[1],a[3],matrix)
        if a[0]+a[2] == "stov":
            matrix=stov(a[1],a[3],matrix)
        if a[0]+a[2] == "xhan":
            matrix=xhan(a[1],a[3],matrix)
for i in range(n):#打印
    print("%d:"%i,end='')
    for j in range(0,n):
        if matrix[i][j] == 'x':
            break
        print(" %d"%matrix[i][j],end='')
    print()