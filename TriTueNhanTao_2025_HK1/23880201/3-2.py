#BT10: Print full multiplication table
for num in range(1, 11):
    print(f"multiplication table of {num}:")
    for i in range(1, 11):
        print(num * i, end=" ")
    print("\n")