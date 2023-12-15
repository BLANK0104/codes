f<-function(x){
    ifelse(-1<x&x<2,x^2/3,0)}
p1<-integrate (f, lower=-1, upper=1)$value
print(p1)
p2<-integrate (f, lower=1, upper=3)$value
print(p2)
p3<-integrate (f, lower=Inf, upper=1) $value/integrate (f, lower=-1, upper=1.5)$value
print(p3)
f2=function(x){
    ifelse(1<x&x<2,x*x^2/3,0)}
mean=integrate (f2, lower--Inf, upper-Inf)$value
print(mean)
f3=function(x) {
    ifelse(1<x&x<2,x*x*x^2/3,0)}
f3=function(x) {
     ifelse(-1<x&x<2,x*x*x^2/3,0)} 
v1<-integrate (f3, lower=-Inf, upper=Inf)$value 
var=v1-(mean*mean)
print(var)