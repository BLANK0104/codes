#utsav chandra, b297

# Part a
x <- c(25, 27.5, 32.5, 35, 45)
y <- c(105, 125, 140, 140, 150)
correlation_coefficient <- cor(x, y)
cat("The linear correlation coefficient is", correlation_coefficient, "\n")
cat("The correlation coefficient indicates the strength and direction of the linear relationship between the two variables. A value of 1 indicates a perfect positive correlation, a value of -1 indicates a perfect negative correlation, and a value of 0 indicates no correlation.")

# Part b
regression_line <- lm(y ~ x)
summary(regression_line)
cat("The line of regression of Y on X is Y =", round(regression_line$coefficients[1], 2), "+", round(regression_line$coefficients[2], 2), "X\n")
x_new <- 50
y_new <- predict(regression_line, data.frame(x = x_new))
cat("The estimated value of Y when X =", x_new, "is", round(y_new, 2), "\n")

# Part c
plot(x, y, main = "Braking Distance vs Curb Weight", xlab = "Curb Weight (in hundreds of pounds)", ylab = "Braking Distance (in feet)")
abline(regression_line, col = "red")

