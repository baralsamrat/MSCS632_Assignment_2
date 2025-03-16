# Python: Demonstrating dynamic typing and function scope (closures)
def outer():
    x = 10
    def inner():
        # Python uses lexical scoping. 'nonlocal' allows modifying the variable in the enclosing scope.
        nonlocal x
        x += 1
        return x
    return inner

closure_function = outer()
print("Python closure call 1:", closure_function())  # 11
print("Python closure call 2:", closure_function())  # 12
