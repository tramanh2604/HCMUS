#BT29: Perform dictionary operations
my_dict = {'name': 'Alice', 'age': 35, 'city': 'New York', 'profession': 'Doctor'}

del my_dict['profession']
print(f"Original dict: {my_dict}")
print(f"Updated dict after removing 'profession': {my_dict}")

print("Printing all key-value pairs:")
for key, value in my_dict.items():
    print(f"{key}: {value}")

def check_dict(dict, key_to_check):
    return key_to_check in dict

key = 'age'
print(f"Does {key} exist? {check_dict(my_dict, key)}")