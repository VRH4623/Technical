list = []
solo = []
size = int(input())
for i in range(size):
    value = int(input())
    list.append(value)

for i in range(size):
    if list[i] not in solo:
        solo.append(list[i])

for i in range(len(solo)):
    print(solo[i])
