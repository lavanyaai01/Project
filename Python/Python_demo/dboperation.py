from tkinter import *
mark=Tk ()
mark.title("Student Mark List")
mark.geometry("500x200+0+100")
labeltitle=Label(mark,text="Marks")
labeltitle.grid(row=1,column=50,padx=40,pady=40)
name=Label(mark,text="Name",font="Boulder")
name.grid(row=2,column=30,padx=40,pady=40)
name=Entry(mark,width=40)
name.grid(row=2,column=40)
tamil=Label(mark,text="Tamil",font="CharterBT")
tamil.grid(row=3,column=40)
tamil=Entry(mark,width=40)
tamil.grid(row=3,column=50)
english=Label(mark,text="English",font="CharterBT")
english.grid(row=4,column=40,padx=40,pady=40)
english=Entry(mark,width=40)
english.grid(row=4,column=50)
maths=Label(mark,text="Maths",font="CharterBT")
maths.grid(row=5,column=40)
maths=Entry(mark,width=40)
maths.grid(row=5,column=50)
science=Label(mark,text="Science",font="CharterBT")
science.grid(row=6,column=40,padx=40,pady=40)
science=Entry(mark,width=40)
science.grid(row=6,column=50)
social=Label(mark,text="Social",font="CharterBT")
social.grid(row=7,column=40)
social=Entry(mark,width=40)
social.grid(row=7,column=50)
tbutton=Button(mark,text="Reset")
tbutton.grid(row=8,column=80)
dbutton=Button(mark,text="Delete")
dbutton.grid(row=8,column=100,padx=40)
ibutton=Button(mark,text="Insert")
ibutton.grid(row=8,column=60,padx=40)
ubutton=Button(mark,text="Update")
ubutton.grid(row=8,column=120)
mark.mainloop ()