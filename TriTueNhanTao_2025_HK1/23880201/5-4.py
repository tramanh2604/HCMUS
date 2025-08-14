#BT20: Removal all characters from a string except integers
str = 'I am 25 years and 10 months old'
res = "" #bien luu ket qua
for char in str:
    if char.isdigit():
        res += char

print(res)