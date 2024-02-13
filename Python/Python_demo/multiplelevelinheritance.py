class parent ():
    def __init__ (self):
        print("Family Name is Bright Services")
    def AadharAccess (self):
        print("Need Aadhar Access")
    def classroom (self):
        print("You can access classroom")
    def lab01 (self):
        print ("You can access lab01")
    def lab02 (self):
        print ("You can access lab02")
    def aibatch (self):
        print("you can join AI course")
    def cadbatch (self):
        print("You can join cloud application developer course")
    def nightshiftwork (self):
        print ("You can join to work in us process for us work timing")
class child(parent):
        def __init__ (self):
            super(). __init__ ()
            print("Welcome")
        def display (self):
           
            super(). AadharAccess ()
            super(). classroom ()
            super(). lab01 ()
            super(). lab02 ()
            super(). aibatch ()
            super().cadbatch ()
            super(). nightshiftwork ()
            print("Thank you")

class visitors (child):
    pass
v=visitors ()
v.display()
