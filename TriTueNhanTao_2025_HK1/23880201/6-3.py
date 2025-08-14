#BT23: List Creation using two lists
l1 = [3, 6, 9, 12, 15, 18, 21]
l2 = [4, 8, 12, 16, 20, 24, 28]

odd_list = l1[1::2]
print(f"Element at odd-index positions from list one: {odd_list}")

even_list = l2[0::2]
print(f"Element at even-index positions from list two: {even_list}")

res = list()
res.extend(odd_list)
res.extend(even_list)
print(f"Printing Final third list {res}")