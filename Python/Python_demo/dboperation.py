from tkinter import *
import mysql.connector
mark=Tk ()
mark.title("Student Mark List")
mark.geometry("500x200+0+100")
def MyDBConnection ():
    dbcon=mysql.connector.connect (
        host="192.168.1.240",
        user="AIBATCH01",
        password="AI@123",
        database="ai_lavanya"
    )
    return dbcon
def insertvalue ():
    n=name1.get()
    a=tamil1.get ()
    b=english1.get ()
    c=maths1.get ()
    d=science1.get ()
    e=social1.get ()
    e_con=MyDBConnection()
    result=e_con.cursor ()
    statement="Insert into student_marklist(Student_Name,Tamil,English,Maths,Science,Social)values (%s,%s,%s,%s,%s,%s);"
    valuepass=(n,a,b,c,d,e)
    result.execute(statement,valuepass)
    e_con.commit ()
    print (result.rowcount,"Row inserted")
def updatevalue ():
    n=name1.get ()
    a=tamil1.get ()
    e_con=MyDBConnection ()
    result=e_con.cursor ()
    statement="Update student_marklist set Student_Name =  (%s) where S_No = (%s);"
    valuepass=(n,a)
    result.execute(statement,valuepass)
    e_con.commit ()
    print(result.rowcount, "Row Updated")
def deletevalue ():
    n=name1.get ()
    e_con=MyDBConnection ()
    result=e_con.cursor ()
    statement=" Delete from  student_marklist where Student_Name = (%s);"
    valuepass=(n,)
    result.execute (statement,valuepass)
    e_con.commit ()
    print(result.rowcount,"Row Deleted")
labeltitle=Label(mark,text="Marks")
labeltitle.grid(row=1,column=50,padx=40,pady=40)
name=Label(mark,text="Name",font="Georgia")
name.grid(row=2,column=30,padx=40,pady=40)
name1=Entry(mark,width=40)
name1.grid(row=2,column=40)
tamil=Label(mark,text="Tamil",font="CharterBT")
tamil.grid(row=3,column=40)
tamil1=Entry(mark,width=40)
tamil1.grid(row=3,column=50)
english=Label(mark,text="English",font="CharterBT")
english.grid(row=4,column=40,padx=40,pady=40)
english1=Entry(mark,width=40)
english1.grid(row=4,column=50)
maths=Label(mark,text="Maths",font="CharterBT")
maths.grid(row=5,column=40)
maths1=Entry(mark,width=40)
maths1.grid(row=5,column=50) 
science=Label(mark,text="Science",font="CharterBT")
science.grid(row=6,column=40,padx=40,pady=40)
science1=Entry(mark,width=40)
science1.grid(row=6,column=50)
social=Label(mark,text="Social",font="CharterBT")
social.grid(row=7,column=40)
social1=Entry(mark,width=40)
social1.grid(row=7,column=50)
tbutton=Button(mark,text="Reset",font="Verdana")
tbutton.grid(row=8,column=80)
dbutton=Button(mark,text="Delete",font="Verdana",command=deletevalue)
dbutton.grid(row=8,column=100,padx=40)
ibutton=Button(mark,text="Insert",font="Verdana", command=insertvalue)
ibutton.grid(row=8,column=60,padx=40)
ubutton=Button(mark,text="Update",font="Verdana",command=updatevalue)
ubutton.grid(row=8,column=120)
mark.mainloop ()