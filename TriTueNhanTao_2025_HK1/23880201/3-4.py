#BT12: Calculate the cube of all numbers from 1 to a given number
input_number = int(input("Nhap so mong muon: "))
for i in range(0, input_number):
    num = i+1
    print(f"Current number is {num} and the cube is {num*num*num}")