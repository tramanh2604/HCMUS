#BT16: Return multiple values from a function
def calculation(a, b):
    addition = a + b
    subtraction = a - b

    return addition, subtraction

res = calculation(50, 40)
print(res)