#a=int(input("enter any number to check weather it is even or odd : "))
#if a/2==0 :
#    print("the no is even")
#else :
#    print("the no is odd")



#a=int(input("enter any number"))
#b=int(input("enter any number"))
#c=int(input("enter any number"))
#if a>b and a>c:
#    print(a,": a is greater")
#elif b>a and b>c:
#    print(b,": b is greater")
#else:
#    print(c,": c is greater")



#a=int(input("enter any number"))
#rev=0
#while a>0:
#    b=a%10
#    rev=rev *10 + b
#    a=a//10
#    print("the reverse number is",rev)



#a=int(input("enter any number"))
#digit=0
#while a>0:
#    b=a%10
#    digit=digit+b
#    a=a//10
#print("the sum of given nummber is : ",digit)


#a=int(input("enter any number : "))
#fac=1
#for i in range(1,a+1,):
#    fac=fac*i
#    print("the factorial is",fac)


#a=int(input("enter any number"))
#rev=0
#while a>0:
#    b=a%10
#    rev =rev*10+b
#    a=a//10
#print("the rev number is",rev)

#a=int(input("enter any number"))
#rev=0
#while a>0:
#    b=a%10
#    rev=rev*10+b
#    a=a//10
#print("the output is",rev)

#a=int(input("enter number for factorial : "))
#fact=1
#while a>0:
#    b=a%10
#    fact=fact*b
#    a=a//10
#print("the output is",fact)


#thisdict={"name " :"rahul",
#          "age": "20",
#
#}
#thisdict["course"] = "BCA"
#thisdict["age"] = 21
#print(thisdict)
#del thisdict["age"]
#print(thisdict)


#creating a list

#list=[10,20,30] 
#print(list[0])
#print(list)
#print(list[0:2])
#print(len(list))
#print(20 in (list))
#list[0]=5
#print(list)

#creating a tupple

#tup=(20,30,40)
#print(tup)

#for loop


#for i in range(1,11):
#    print(i)

#diff betn break and continuye

#or i in range(1,6):
#   if i==3:
#       break
#   print(i)

#or i in range(1,6):
#   if i==3:
#       continue
#   print(i)

# a=int(input("enter number : ")) 
# b=int(input("enter number : "))
# c=int(input("enter number : "))
# if a>b and a>c:
#     print("A is greater...")
# elif b>a and b>c:
#     print("B is grester...")
# elif c>a and c>b:
#     print("c is grester...")
# else:
#     print("Multiple numbers are equal")


# a=int(input("enter number : ")) 
# b=int(input("enter number : "))
# c=int(input("enter number : "))
# if (a>b and a<c)or(a>c and a<b):
#     print("A is second largest number...")
# elif (b>a and b<c)or(b>c and b<a):
#     print("B is second largest number...")
# elif (c>a and c<b)or(c>b and c<a):
#     print("C is second largest number...")
# else:
#     print("Multiple numbers are equal")


# year=int(input("Enter year"))
# if year%400==0:
#     print("The year is leap year")
# elif year%100==0 :
#     print("the year is not leap year")
# elif  year%4==0:
#     print("the year is leap year")
# else:
#     print("The year is not a leap yearn")

# A=int(input("Enter number : "))
# for i in range(1,6):
#     print(i)


# Num=int(input("Enter number : "))
# count=1
# for i in range(1,11):
#     i=Num*count
#     count=count+1
#     print(i)

#     ALTERNATE WAY

# num=int(input("enter number : "))
# for i in range(1,11):
#     print(num,"X",i,"=",num*i)

# num=int(input("enter number : "))
# sum=0
# for i in range(1,num+1):
#     sum=sum+i
#     print(sum)

# num=int(input("enter number : "))
# total=0
# for i in range(1,num+1):
#     if i%2==0:
#         total=total+i
# print(total)


# num=int(input("enter number"))
# odd=0
# even=0
# for i in range(1,num+1):
#     if i%2==0:
#         even=even+1
#     else:
#         odd=odd+1
# print("even number is",even)
# print("odd number is",odd)


# num=int(input("enter number : "))
# fact=1
# for i in range(1,num):
#     num=num*fact
#     fact=fact+1
#     print(num)