import mysql.connector
from tkinter import *
class DBManipulate:
    def __init__(self):
        print("Welcome to DB Manipulation")
    def returnmsg(self):
        return "connected"
    def mydbconnection(self):
        con=mysql.connector.connect (
            host="192.168.1.240",
            user="AIBATCH01",
            password="AI@123"
            database="ai_lavanya"
        )
        return con
    def insertvalues (self,Name,Tamil,English,Maths,Science,Social):
        Name1=Name
        Tamil1=Tamil
        English1=English
        Maths1=Maths
        Science1=Science
        Socail1=Social
        data=self.mydbconnection()
        return=data.cursor()
        stms=("Insert into Student Mark List  (Name,Tamil,English,Maths,Science,Social) values (\"Aravind\",98,97,87,67,90);")
        result.execute(stms)
        print(stms)
        data.commit()
        return(str(result.rowcount) + "Row Inserted")