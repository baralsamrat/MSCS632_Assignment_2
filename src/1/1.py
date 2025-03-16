# Intentional error: using letter 'o' instead of digit 0 and a missing colon in the function definition
def calculate_sum(arr)  # Missing colon here
    total = o
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)
