import random
'''for i in range(3):
    print(random.randint(10,50))
    members = ['John', 'Mary', 'Bob', 'Mosh']
    leader = random.choice(members)
    print(leader)
    '''

members = ['Hemanth', 'Saran','Kannan', 'Boobesh','Yasi','Smir']
numbers = [1,2,3,4,5,6]

for i in range(len(numbers)):
    print(f"{members[i]} : {random.randint(1,6)}")
