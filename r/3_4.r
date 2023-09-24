# Given values and probabilities
x_values <- c(-3, -2, -1, 0, 1, 2)
x_probabilities <- c(0.05, 0.1, 0.2, 0.3, 0.2, 0.15)

# Calculate mean
mean_x <- sum(x_values * x_probabilities)

# Calculate variance
variance_x <- sum(x_probabilities * (x_values - mean_x)^2)

# Display mean and variance
cat("Mean:", mean_x, "\n")
cat("Variance:", variance_x, "\n")
