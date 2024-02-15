class parent ():
    def __init__ (self):
        print("My Family")
    def world (self):
        print("Family is my World")
class family (parent):
    def __init__(self):
        print("I am Lavanya")
class Love (parent):
    def __init__ (self):
        print("I Love my family")

p=parent ()
p.world ()
f=family ()
l=Love ()