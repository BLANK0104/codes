pdf <- function(x) {
    if (x> 5 && x<=7){
        return((3/8)* (7-x)^2)}
    else{
        return(0)
    }}
x<-seq(4,8,by=0.01)
y<-sapply(x,pdf)
plot(x, y, type = "l", xlab = "pH", ylab = "f(x)", main = "PDF OF PH", col = "orange")
cdf <- function(x) {
    if(x<5) {
        return(0)}
     else if(x>=5&& x<=7) 
     {
        return((3/8)*((7-x)^3/3-(7-5)^3/3))}
        else {
            return(1)}}
probability_less_than_6=cdf (6)
print(probability_less_than_6)
conditional_probability= (cdf (5.5)-cdf (5))/probability_less_than_6
print(conditional_probability)