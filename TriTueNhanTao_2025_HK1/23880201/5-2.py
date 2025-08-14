#BT18: Count all letters, digits, and special symbols from a given string
str1 = "P@#yn26at^&i5ve"
char_c = 0
digit = 0
sym = 0
for char in str1:
    if char.isalpha():
        char_c += 1
    elif char.isdigit():
        digit += 1
    else:
        sym += 1
print(f"Chars = {char_c}\nDigits = {digit}\nSymbol = {sym} \n")
