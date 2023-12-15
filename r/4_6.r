
pdf_function<- function(x) {return (12*x^2*(1-x))}
p=integrate (pdf_function, lower=0.5, upper=1) $value
print(p)
prob_part1=choose (4,1) *p^1* (1-p)^3
print(prob_part1)
prob_none<-(1-p)^4
prob_at_least_one=1-prob_none
print(prob_none)
print(prob_at_least_one)
mean=integrate(function(x) x*pdf_function(x), lower=0, upper=1)$value
print(mean)
variance<-integrate (function(x) (x-mean)^2*pdf_function(x), lower=0, upper=1)$value   
print(variance)
std_deviation=sqrt(variance)
print(std_deviation)
Y=function(x) {return (200*(1-x))}
mean_Y=200*(1-mean)
print(mean_Y)
std_deviation_Y=200*sqrt(variance)
print(std_deviation)
print(std_deviation_Y)
