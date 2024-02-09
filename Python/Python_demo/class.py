class details:
    def __init__(self,name,lastName,qualification):
        self.Name=name 
        self.Lastname=lastName
        self.Qualification=qualification
    def Congrats(self):
        print(self.Name,self.Lastname,self.Qualification)
x=details("Lavanya","M","B.Sc")
x.Congrats ()
