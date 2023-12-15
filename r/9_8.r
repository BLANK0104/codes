#Utsav chandra, b297
library(ISLR)
data("Carseats")

model <- lm(Sales ~ Price + Urban + US, data = Carseats)
print(summary(model))
plot(Carseats$Price, Carseats$Sales, main = "Sales vs Price", xlab = "Price", ylab = "Sales", abline(model), col="purple")
