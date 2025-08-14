#BT22: Set Intersection and Removal
first_set = {23, 42, 65, 57, 78, 83, 29}
second_set = {57, 83, 29, 67, 73, 43, 48}

intersection = first_set.intersection(second_set)
print(f"Intersection is {intersection}")

for i in intersection:
    first_set.remove(i)

print(f"First set after removing {first_set}")