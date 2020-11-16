print("I'm Permutation Calculator. My Creator: https://github.com/xrypt0 ")

x = int(input("Please Enter The Desired First Number :"))
y = int(input("Please Enter The Desired Second Number :"))

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


if (x<y):
    print("\n !!!! I Can Not Calculate !!!! PLEASE TRY AGAIN...")

else:
    print("Answer :",answer)
