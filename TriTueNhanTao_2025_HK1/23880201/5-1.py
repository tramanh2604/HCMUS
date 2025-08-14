#BT17: Replace each special symbol with # in the following string
import string
str1 = "/*Jon is @developer & musician!!"

print(f"Original string: {str1}")
# using string.punctuation() to get a special symbol list
for char in string.punctuation:
    str1 = str1.replace(char, "#")

print(f"The strings after replacement: {str1}")