from tkinter import *
app=Tk ()
app.title ("My first python GUI app")
app.geometry ("500x200+0+100")
# app.state("zoomed")
app.config (bg="light gray")
def clickresult ():
    a=10
    b=10
    c=a+b
    lblTitle.config(text=c)
lblTitle = Label (text="Arithmatic Operations")
lblTitle.grid (row=0,columnspan=2,padx=40,pady=40)
inputbox1=Entry (app,width=60)
inputbox1.grid(row=0,column=2)
lblTitle1=Label(app,text="Arithmatic Operations")
lblTitle1.grid(row=1,column=1,padx=40,pady=40)
inputbox2=Entry(app,width=30)
inputbox2.grid(row=1,column=2)
clickme=Button(app,text="addition",command=clickresult)
clickme.grid (row=2,column=8,padx=40,pady=40)
app.mainloop ()