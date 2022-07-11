# from operator import indexOf


# s = []
# c = "y"
# while c=="y":
#     print("1. Push")
#     print("2. Pop")
#     print("3. Display")
#     choice = int(input("Enter the Number From above Choice :- "))
#     if choice == 1:
#         e_id = int(input("Enter the Employee ID:-"))
#         e_name = input("Enter the Name of Employee:-")
#         e_location = input("ENter the Location:-")
#         emp = e_id,e_name,e_location
#         s.append(emp)
#     elif choice == 2:
#         if s==[]:
#             print("Stack Is empty")
#         else:
#             x,y,z = s.pop();
#             print("Deleted Element is :-",x,y,z)
#     elif choice == 3:
#         l = len(s)
#         for i in range (l-1,-1,-1):
#             print(s[i])
#     else:
#         print("Wrong input")
#     c = input("Enter Y if want to continue to do operation in stack :-")

    
from re import S


s =[]
i =0
while i<6:
    print("1. Push")
    print("2. Pop")
    print("3. Display")
    choice = int(input("Enter the operation want to perform :-"))
    if choice == 1:
        std_name = input("Enter the name of the student :-")
        std_mark= int(input("Enter the Marks :- "))
        if std_mark> 75:
            std = std_name,std_mark
            s.append(std)
    
    elif choice == 2:
        if s ==[]:
            print("Stack is Empty")
        else:
            print("Deleted elemet is :- ",s.pop())
    elif choice==3:
        print(s)
    else:
        for i in s:
            print(i)
    i=i+1
    
        