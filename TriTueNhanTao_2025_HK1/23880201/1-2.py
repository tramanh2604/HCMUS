#BT2: Print reserve number pattern
n = int(input("Nhap so mong muon: "))
for i in range(1, n+1):
    for j in range(n+1-i, 0, -1):
        print(i, end=' ')
    print()

