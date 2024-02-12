'''class parent ():
    def welcome (self):
        print("Welcome to parent")
    def land (self):
        print("I have 2acr lands")
class Son (parent):
    def car (self):
        print("I do have BMW")
s= Son ()
s.welcome ()
s.land ()
s.car ()'''


class parent ():
    def __init__(self):
        print ("Family name is Bright Services")
    def welcome(self):
        print("welcome to parent")
    def land (self):
        print("I have 2 acr land")
class child(parent):
    def __init__ (self):
        super(). __init__ ()
        super ().welcome()
        super ().land()
        print("Child name is AI Batch")
    def car (self):
        print("I want a car")
s=parent ()
s=child ()
s.welcome ()
s.land ()
s.car ()
