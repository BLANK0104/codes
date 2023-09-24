#make an advnace calculator with gui and all features whihc runs in browser

from tkinter import *
from tkinter import messagebox
import math

def click(event):
    global scvalue
    text = event.widget.cget("text")
    print(text)
    if text == "=":
        if scvalue.get().isdigit():
            value = int(scvalue.get())
        else:
            try:
                value = eval(screen.get())
            except Exception as e:
                print(e)
                value = "Error"
        scvalue.set(value)
        screen.update()
    elif text == "C":
        scvalue.set("")
        screen.update()
    elif text == "sin":
        scvalue.set(math.sin(int(scvalue.get())))
        screen.update()
    elif text == "cos":
        scvalue.set(math.cos(int(scvalue.get())))
        screen.update()
    elif text == "tan":
        scvalue.set(math.tan(int(scvalue.get())))
        screen.update()
    elif text == "log":
        scvalue.set(math.log(int(scvalue.get())))
        screen.update()
    elif text == "√":
        scvalue.set(math.sqrt(int(scvalue.get())))
        screen.update()
    elif text == "π":
        scvalue.set(math.pi)
        screen.update()
    elif text == "e":
        scvalue.set(math.e)
        screen.update()
    elif text == "x!":
        scvalue.set(math.factorial(int(scvalue.get())))
        screen.update()
    elif text == "x^2":
        scvalue.set(math.pow(int(scvalue.get()),2))
        screen.update()
    elif text == "x^3":
        scvalue.set(math.pow(int(scvalue.get()),3))
        screen.update()
    elif text == "x^y":
        scvalue.set(math.pow(int(scvalue.get()),int(scvalue.get())))
        screen.update()
    elif text == "x^1/y":
        scvalue.set(math.pow(int(scvalue.get()),1/int(scvalue.get())))
        screen.update()

        
    else:
        scvalue.set(scvalue.get() + text)
        screen.update()

root = Tk()
root.geometry("500x700")
root.title("Calculator")
#root.wm_iconbitmap("1.ico")

scvalue = StringVar()
scvalue.set("")
screen = Entry(root, textvar=scvalue, font="lucida 40 bold")
screen.pack(fill=X, ipadx=8, pady=10, padx=10)

f = Frame(root, bg="grey")
b = Button(f, text="9", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="8", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="7", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="+", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="6", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)

b.bind("<Button-1>", click)

b = Button(f, text="5", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="4", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="-", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="3", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="2", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="1", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="*", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="0", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="C", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="=", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="/", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="sin", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="cos", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="tan", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="log", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

f = Frame(root, bg="grey")
b = Button(f, text="pi", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="x^2", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="x^3", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

b = Button(f, text="x^1/y", padx=20, pady=10, font="lucida 20 bold")
b.pack(side=LEFT, padx=10, pady=10)
b.bind("<Button-1>", click)

f.pack()

root.mainloop()