#BT13: Create a lambda function that squares a given number
square = lambda x: x**2

num = int(input("Nhap so: "))
squared_num = square(num)
print(f"The square number of {num} is {squared_num}")