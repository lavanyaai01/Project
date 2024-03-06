import os
import tkinter as tk
from tkinter import ttk

win=tk.Tk ()
win.title ("Student Management System")
win.state("zoomed")
win.geometry("600x600")



imgdir=os.path.join((os.path.join(os.path.dirname(__file__),'img')),"image.gif")
getTitleImage=PhotoImage('titleimage',file=imgdir)



titleImageFrame=Frame(win, bg="white")#, height=200)
titleImageFrame.pack(padx=10,fill="both")

lblDisplayTitleImage=Label(titleImageFrame,image=getTitleImage).pack()




def createTab():
    tabwelcome=ttk.Notebook(tablist,width=win.winfo_screenwidth(),height=win.winfo_screenheight())
    tabwelcome.pack(fill="both",expand=True)
    tablist.add(tabwelcome,text="untitle-01")
menubarlist=tk.Menu(win,bg="Red")
filemenu=tk.Menu(menubarlist,tearoff=0)
menubarlist.add_cascade(label="File",menu=filemenu,underline=0)
filemenu.add_command(label="New",underline=0,accelerator="Ctrl+N",command=createTab)
filemenu.add_command(label="New Window",underline=4,accelerator="Ctrl+Shift+W")
filemenu.add_command(label="Close",underline=4,accelerator="Ctrl+E")
filemenu.add_command(label="Print",underline=0,accelerator="Ctrl+P")
filemenu.add_command(label="Exit",underline=1,command=exitwindow,accelerator="Ctrl+Q")

editmenu=tk.Menu(menubarlist,tearoff=0)
menubarlist.add_cascade(label="Edit",menu=editmenu)
editmenu.add_command(label="Undo",underline=0,accelerator="Ctrl+Z")
editmenu.add_command(label="Redo",underline=0,accelerator="Ctrl+Shit+Z")
editmenu.add_separator ()
editmenu.add_command(label="Copy",underline=0,accelerator="Ctrl+C")
editmenu.add_command(label="Cut",underline=0,accelerator="Ctrl+X")
editmenu.add_command(label="Paste",underline=0,accelerator="Ctrl+V")
editmenu.add_command(label="Exit",underline=0,command=exitwindow,accelerator="Ctrl+Q")
win.config(menu=menubarlist)
Tabframe=tk.Frame(win,bg="Red")
Tabframe.pack(fill="both",expand=True)
tablist=ttk.Notebook(Tabframe)
tablist.pack(expand=True)
tabwelcome=ttk.Notebook(tablist,width=win.winfo_screenwidth(),height=win.winfo_screenheight ())
tabwelcome.pack(fill="both",expand=True)
tablist.add(tabwelcome,text="Welcome")
tablist.add(tabwelcome,text="Welcome")
text=tk.Text(tabwelcome,width=win.winfo_screenwidth(),height=win.winfo_screenheight())
text.pack(fill="both")
win.mainloop ()