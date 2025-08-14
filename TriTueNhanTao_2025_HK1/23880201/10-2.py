#BT38: Swap two tuples in Python
tuple1 = (11, 22)
tuple2 = (99, 88)
print(f"Original: {tuple1}, {tuple2}")
tuple1, tuple2 = tuple2, tuple1

print(f"Swap: {tuple1}, {tuple2}")