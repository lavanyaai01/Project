from tkinter import *
from tkinter import ttk
win=Tk ()
win.title("Student Mark List")
win.geometry("500x500")
tablist=ttk.Notebook(win)
tablist.pack(padx=10,pady=5)
tabInsert=ttk.Frame(tablist,width=win.winfo_screenwidth (),height=win.winfo_screenheight ())
tabInsert.pack()
tabUpdate=ttk.Frame(tablist,width=win.winfo_screenwidth (),height=win.winfo_screenheight ())
tabUpdate.pack ()
tabDelete=ttk.Frame(tablist,width=win.winfo_screenwidth (),height=win.winfo_screenheight ())
tabDelete.pack ()
tablist.add(tabInsert,text="Insert")
tablist.add(tabUpdate,text="Update")
tablist.add(tabDelete,text="Delete")
titledisplayframeintab=Frame(tabInsert,width=win.winfo_screenwidth(),height=win.winfo_screenheight())
titledisplayframeintab.pack()
lbltitle=Label(titledisplayframeintab,text="Inserting Student Table",font="40")
lbltitle.grid(row=0,columnspan=10,padx=10)
name=Label(titledisplayframeintab,text="Name")
name.grid(row=2,columnspan=1,padx=10,pady=10)
name1=Entry(titledisplayframeintab,width=30)
name1.grid(row=2,column=10,padx=10,pady=10)
win.mainloop ()