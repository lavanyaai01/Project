class Animal ():
    def __init__ (self):
        print("Cow is a useful Animal")
class Bird ():
    def __init__ (self):
        print ("Peacock is a Bird")
        super(). __init__ (self)
class specification (Animal,Bird):
       pass 
s=specification ()
