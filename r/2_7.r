#Write a R program to create an ordered factor from data of minimum 20 elements consisting of the names of months. (factor the vector of the months and print the frequencies)
#
v=c("January","February","March","April","May","June","January","February","March","April","May","June","July","August","September","October","November","December")
v=factor(v,ordered=TRUE)
print(v)
print(summary(v))