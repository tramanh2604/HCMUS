#BT15: Create an inner function
#outer function
def outer_func(a, b):
    #inner function
    def addition(a, b):
        return a+b
    
    #call inner func in outer func
    add = addition(a,b)
    return add + 5

result = outer_func(5, 10)
print(result)