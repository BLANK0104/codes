# Given probabilities for X
x_values <- c(-2, -1, 0, 1, 2)
x_probabilities <- c(1/5, 1/5, 2/5, 2/15, 1/15)

# Calculate the corresponding values and probabilities for Y
y_values <- x_values^2 + 1
y_probabilities <- x_probabilities

# Calculate cumulative probabilities for Y
cumulative_y_probabilities <- cumsum(y_probabilities)

# Display the probability distribution of Y
cat("Y Value   Probability\n")
for (i in 1:length(y_values)) {
  cat(y_values[i], "         ", y_probabilities[i], "\n")
}

# Plot probability distribution of Y
plot(y_values, y_probabilities, type = "h", lwd = 10, col = "blue",
     main = "Probability Distribution of Y", xlab = "Y Value", ylab = "Probability")

# Plot cumulative distribution function of Y
plot(y_values, cumulative_y_probabilities, type = "s", col = "red",
     main = "Cumulative Distribution Function of Y", xlab = "Y Value", ylab = "Cumulative Probability")
