#BT32: Delete a list of keys from a dictionary
sample_dict = {
    "name": "Kelly",
    "age": 25,
    "salary": 8000,
    "city": "New york"
}

# Keys to remove
keys = ["name", "salary"]

for key in list(sample_dict.keys()):
    for i in keys:
        if key == i:
            del sample_dict[key]

print(sample_dict)