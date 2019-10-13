print("Hello My Friends ! I'm Permutation Calculator. My Creator: https://github.com/wolfnatural ")

x = int(input("Please Enter The Desired First Number :"))
y = int (input("Please Enter The Desired First Number :"))

z=1
q=1
t=1

for i in range (x):
    z*=i+1

for l in range (y):
    q*=l+1

for k in range (x-y):
    t*=k+1

answer = z/t


if (x==y):
    print("Answer : 1 \n \n Contact : harunaydmrtr@outlook.com")

elif(y+1==x):
    print("Answer :",x)
    print("\n Contact : harunaydmrtr@outlook.com")

else:
    print("Answer :",answer)
    print("\n Contact : harunaydmrtr@outlook.com")