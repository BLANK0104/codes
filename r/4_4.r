cdf<- function(x){
    if(x<0) {
        return(0)}
    else if(x>=0 && x<=4) {
        return(x^ 2/40)} 
    else if (x>4 && x<=10) {
        return((20*x-x^2-40)/60)}
    else{
        return (1)}}
x=seq(-1,11,by=0.1)
y=sapply(x,cdf)
plot(x, y, type = "l", xlab = "minutes early", ylab = "F(x)", main = "CDF of Arrival time")
probability_at_least_5=1-cdf(5)
print(probability_at_least_5)
pdf<-function (x){
    if(x>=0 && x<=4) {
        return(x/20)}
    else if (x>4 && x<=10){
        return((20-x)/30)}
        else {
            return(0)}}
y_pdf=sapply(x,pdf)
plot(x, y_pdf, type = "l", xlab = "minutes early", ylab = "F(x)", main = "PDF of Arrival time")
