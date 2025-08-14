#BT24: Filter List Against Dictionary Values
roll_number = [47, 64, 69, 37, 76, 83, 95, 97]
sample_dict = {'Jhon':47, 'Emma':69, 'Kelly':76, 'Jason':97}

print(f"List: {roll_number}")
print(f"Dictionary: {sample_dict}")

roll_number = [i for i in roll_number if i in sample_dict.values()]

print(f"After removing unwanted elements from list {roll_number}")
