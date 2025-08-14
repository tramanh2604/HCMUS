#BT14: Use a lambda with the filter() function to get all even numbers from a list
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even = list(filter(lambda x: x % 2 == 0, numbers))
print(f"The even numbers in the list are: {even}")