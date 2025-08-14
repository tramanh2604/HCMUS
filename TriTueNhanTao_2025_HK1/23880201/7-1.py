#BT25: Sum and average of all numbers in a list
my_list = [10, 20, 30, 40, 50]
sum = 0
length = int(len(my_list))
for i in my_list:
    sum += i

average = sum / length
print(f"Sum: {sum}\nAverage: {average}")