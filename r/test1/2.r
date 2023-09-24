#create a table of 5 observations having columns batting order, name and runs
#and save it as a csv file

#a=read.csv("C:\\codes\\test1\\batting.csv")
#print(a)
a=data.frame(batting.order=c(1,2,3,4,5),name=c("a","b","c","d","e"),runs=c(100,200,300,200,100),wicket=c(1,2,3,4,5))
print(b)
#add column wicket
a$wicket=c(1,2,3,4,5)
print(a)
#create another table for 3  more players whose batting order is 6,7,8

b=data.frame(batting.order=c(6,7,8),name=c("x","y","z"),runs=c(100,200,300),wicket=c(6,7,8))
print(b)
#combine table a and b
c=rbind(a,b)
print(c)
#priint summary of c
print(summary(c))
#extract 3,5 rows, 2,3 columns
print(c[3:5,2:3])
