from tkinter import *
import mysql.connector
win=Tk ()
win.title("Insert into MySQL DB Demo")
win.geometry("500x500")
class frameDBOperation:
    def __init__(self):
        frametop=Frame(win,bg="black",width=500,height=500,padx=30,pady=30)
        frametop.pack(side=TOP)
        btinsert=Button(frametop,text="INSERT",command=self.frameleft).pack(padx=10,pady=10)
        btupdate=Button(frametop,text="UPDATE").pack(padx=10,pady=10)
        btdelete=Button(frametop,text="DELETE").pack(padx=10,pady=10)
    def frameleft(self):
        frameleft=Frame(win,bg="black",width=500,height=500,padx=30,pady=30)
        frameleft.pack(side=LEFT)
frameright=Frame(win,bg="red",width=500,height=500)
frameright.pack(side=RIGHT)
lbl_Title_of_Operation=Label(frameleft,text="Insert into MySQL DB Demo")
lbl_Title_of_Operation.grid(row=0,columnspan=5)
lblname=Label(frameleft,text="Name")
lblname.grid(row=2,column=1,padx=30,pady=10)
lblTamil=Label(frameleft,text="Tamil")
lblTamil.grid(row=3,column=1,padx=30,pady=10)
win.mainloop ()
