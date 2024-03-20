def findMax(numbers):
    max = numbers[0]
    for i in numbers:
        if i > max:
            max = i
    return max

def findMin(numbers):
    min = numbers[0]
    for i in numbers:
        if i<min:
            min = i
    return min
