def itf(inch):
    feet = inch/12
    return feet

def ctmr(cm):
    meter = cm/100
    return meter

print("1. Inches to feet")
print("2. Centimeter to meter")
s = int(input("Enter your choice: "))
if s == 1:
    inch = float(input("Enter the distance in inches: "))
    print("Distance in feet is: ", itf(inch))
elif s == 2:
    cm = float(input("Enter the distance in centimeter: "))
    print("Distance in meter is: ", ctmr(cm))