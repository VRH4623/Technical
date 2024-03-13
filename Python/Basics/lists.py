numbers = [1, 3,5,2,89,8,5,12]
print(len(numbers))
numbers.insert(1, 100)
print(numbers)
print(len(numbers))

numbers.remove(89)
print(numbers)

numbers.pop()
print(numbers)

print(8 in numbers)
numbers.sort()
numbers.reverse()
print(numbers)
print(numbers)

numbers2 = numbers.copy()
print(numbers2)


