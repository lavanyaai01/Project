from tkinter import *
win = Tk ()
win.title("Arithmatic operations")
win.geometry("500x500+500+100")
def Addition ():
    a=int (tbEntrya.get ())
    b=int (tbEntryb.get ())
    c=a+b
    labeloutput.config(text=c)
def Subtraction ():
    a=int (tbEntrya.get ())
    b=int (tbEntryb.get ())
    c=a-b
    labeloutput.config(text=c)
labelTitle = Label (win,text="Arithmatic operations")
labelTitle.grid (row=0,column=20,padx=20,pady=30)
labelmsg=Label(win,text="Enter Value a:")
labelmsg.grid(row=1,column=20)
tbEntrya=Entry(win,width=60)
tbEntrya.grid(row=1,column=25)
label1msg=Label(win,text="Enter value b:")
label1msg.grid(row=2,column=20,pady=20)
tbEntryb=Entry (win,width=60)
tbEntryb.grid(row=2,column=25,pady=20)
labeloutput =Label(win,text=" ")
labeloutput.grid(row=3,column=30,pady=20)
btnAdd =Button (win,text="Addition",command=Addition)
btnAdd.grid (row=4,column=20)
btnsubtract =Button (win,text="Subtraction",command=Subtraction)
btnsubtract.grid (row=4,column=30)
win.mainloop ()
