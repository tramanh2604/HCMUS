# BT1: Print alternate prime numbers till 20
import math

def isPrime(n):
    # So be hon 1 thi k phai nguyen to
    if n <= 1:
        return False

    # Kiem tra tu 2 toi can bac hai cua n
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True


prime_list = list() # Tao list de luu so nguyen to
n = 20
for i in range(0, n+1):
    if isPrime(i) == True:
        prime_list.append(i)

print(f"Alternate prime numbers from 1 to 20: {prime_list}")


print(f"Alter prime numbers from 1 to 20: {prime_list[::2]}")