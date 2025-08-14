#BT27: Concatenate two lists in the following order
list1 = ["Hello ", "take "]
list2 = ["Dear", "Sir"]

res = list()
for i in list1:
    for j in list2:
        char = i + j
        res.append(char)

print(res)