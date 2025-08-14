#BT3: Create a simple countdown timer using a while loop
import time

def countdown(seconds):
    while seconds > 0:
        print(f"Time remaining: {seconds} seconds")
        time.sleep(1) #dung 1s
        seconds -= 1
    
    print("Time's up!")

n = int(input("Nhap thoi gian ban muon: "))
countdown(n)