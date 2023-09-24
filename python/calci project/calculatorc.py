from tkinter import *
import math

# Define functions for the calculator operations
def calculate():
    operation = operator.get()
    num = float(num_entry.get())

    if operation == "sin":
        result.set(math.sin(num))
    elif operation == "cos":
        result.set(math.cos(num))
    elif operation == "tan":
        result.set(math.tan(num))
    elif operation == "sqrt":
        result.set(math.sqrt(num))
    elif operation == "log":
        result.set(math.log10(num))
    elif operation == "ln":
        result.set(math.log(num))
    elif operation == "pi":
        result.set(math.pi)
    elif operation == "e":
        result.set(math.e)
    elif operation == "abs":
        result.set(abs(num))
    elif operation == "floor":
        result.set(math.floor(num))
    elif operation == "ceil":
        result.set(math.ceil(num))
    else:
        result.set("Invalid Operation")


# Create the main window
window = Tk()
window.title("Scientific Calculator")

# Create the input fields and labels
Label(window, text="Enter a number: ").grid(row=0, column=0)
num_entry = Entry(window)
num_entry.grid(row=0, column=1)

Label(window, text="Select an operation: ").grid(row=1, column=0)
operator = StringVar(window)
operator.set("sin")
operator_menu = OptionMenu(window, operator, "sin", "cos", "tan", "sqrt", "log", "ln", "pi", "e", "abs", "floor", "ceil")
operator_menu.grid(row=1, column=1)

Label(window, text="Result: ").grid(row=2, column=0)
result = StringVar()
result.set("0")
result_label = Label(window, textvariable=result)
result_label.grid(row=2, column=1)

# Create the button for calculating the operation
Button(window, text="Calculate", command=calculate).grid(row=3, column=0, columnspan=2)

# Run the main loop for the window
window.mainloop()
