'''def sample():
    a=1+2+1
    print(a)
    if a==3:
        print("a is 3")
        x="Hi Lavanya "
        for x1 in x:
            print(x1)
        x=x.split (" ")
        for x2 in x:
            print(x2)
    if a==4:
        print("a is 4")
    if a==6:
        print("a is 6")
    else:
        print("No value")
    y=input ("Enter the value:").split () 
    print (y)
sample()'''
i=0
while i<10:
    print(i)
    if (i==9):
        break
    i+=1
i=1
while i<7:
    i+=1
    if (i==2):
        continue 
    print (i)