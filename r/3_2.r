# Given probabilities
outcomes <- c(-2, -1, 0, 1, 2, 3)
probabilities <- c(0.1, k, 0.2, 2*k, 0.3, 3*k)

# Sum of probabilities must be 1, so we can solve for k
k <- 1 - sum(probabilities)

# Calculate cumulative probabilities
cumulative_probabilities <- cumsum(probabilities)

# Calculate P(X < 2)
p_x_less_than_2 <- sum(probabilities[outcomes < 2])

# Display results
cat("Value of k:", k, "\n")
cat("P(X < 2):", p_x_less_than_2, "\n")

# Plot probability distribution
plot(outcomes, probabilities, type = "h", lwd = 10, col = "blue",
     main = "Probability Distribution", xlab = "Outcome", ylab = "Probability")

# Plot cumulative distribution function
plot(outcomes, cumulative_probabilities, type = "s", col = "red",
     main = "Cumulative Distribution Function", xlab = "Outcome", ylab = "Cumulative Probability")
