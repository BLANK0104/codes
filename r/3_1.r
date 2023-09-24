# Given probabilities
k <- 0.1

# Possible outcomes and corresponding probabilities
outcomes <- c(1, 2, 3, 4, 5, 6, 7)
probabilities <- c(k, 2*k, 3*k, k^2, k^2 + k, 2*k^2, 4*k^2)

# Calculate cumulative probabilities
cumulative_probabilities <- cumsum(probabilities)

# Display probability distribution table
cat("Outcome   Probability\n")
for (i in 1:length(outcomes)) {
  cat(outcomes[i], "         ", probabilities[i], "\n")
}

# Plot probability distribution
plot(outcomes, probabilities, type = "h", lwd = 10, col = "blue",
     main = "Probability Distribution", xlab = "Outcome", ylab = "Probability")

# Plot cumulative distribution function
plot(outcomes, cumulative_probabilities, type = "s", col = "red",
     main = "Cumulative Distribution Function", xlab = "Outcome", ylab = "Cumulative Probability")
