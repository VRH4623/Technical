class Point:
    def move(self):
        print('Move')

    def draw(self):
        print("Draw")

Point1 = Point()
Point1.x = 10
Point1.y = 20
print(Point1.x)
Point1.draw()


