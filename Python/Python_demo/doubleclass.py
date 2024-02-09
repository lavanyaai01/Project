class details:
    def __init__(self,name,lastname,qualification):
        self.Name=name 
        self.Lastname=lastname
        self.Qualification=qualification
    def Congrats(self):
        print(self.Name,self.Lastname,self.Qualification,"graduated")
x=details("Lavanya","M","B.Sc")
x.Congrats ()
class psdetails (details):
    def __init__ (self,name,lastname,qualification,university):
        self.University=university
        super(). __init__ (name,lastname,qualification)  
    def thanks (self):
        print(self.Name,self.Lastname,self.Qualification,"graduated from",self.University)
x=psdetails("Lavanya","M","B.Sc","Anna University")
x.Congrats ()
x.thanks ()