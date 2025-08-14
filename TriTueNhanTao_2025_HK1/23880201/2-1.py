#BT5: Accept a list of 5 float numbers as an input from the user
numbers = list()

#chay vong lap 5 lan
for i in range(0,5):
    item = float(input(f"Nhap so thuc o vi tri thu {i+1}: "))
    numbers.append(item)

print(f"User list: {numbers}")