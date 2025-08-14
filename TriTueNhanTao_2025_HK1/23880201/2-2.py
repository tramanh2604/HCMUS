#BT6: Interactive Menu
while True:
    print("---Menu---")
    print("1. Say Hello")
    print("2. Calculate Square")
    print("3. Exit")

    choice = int(input("Nhap lua chon (1-3): "))

    if choice == 1:
        print("Hello there!")
    elif choice == 2:
        try:
            number = int(input("Nhap so muon tinh: "))
            square = number ** 2
            print(f"Binh phuong cua {number} la {square}")
        except ValueError:
            print("Invalid input. Please enter an integer")
    elif choice == 3:
        print("Exiting...")
        break
    else:
        print("Invalid input. Please enter a number between 1 and 3")