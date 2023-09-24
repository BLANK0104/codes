#reading csv file named empdata.csv
print(getwd())
x = read.csv("C:\\codes\\r\\empdata.csv")
print(is.data.frame(x))
print(x)
max(x$Salary)
print(subset(x,salary==max(salary)))
#print data for hr dept
print(subset(x,dept=="hr"))