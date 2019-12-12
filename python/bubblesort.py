a = [21,4,1,3,9,20,25,6,21,14]




for i in range(len(a)):
    for j in range(len(a)-1):
        if a[j]>a[j+1]:
            temp=a[j]
            a[j]=a[j+1]
            a[j+1]=temp
        else:
            pass


for i in range(len(a)):
    print (a[i])
