#utsav chandra, b297
age <- c(2, 4, 6, 8)
maintenance_cost <- c(5, 7, 8.5, 11)
print(yonx <- lm(age ~ maintenance_cost))
print(predict(yonx, data.frame(maintenance_cost = 9)))
plot(maintenance_cost, age, main = "Age vs Maintenance Cost", xlab = "Maintenance Cost (in hundreds of dollars)", ylab = "Age (in years)", abline(yonx), col="purple")
