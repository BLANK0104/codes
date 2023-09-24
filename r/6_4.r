#Utsav Chandra
#B297

# Given
mean <- 16
std_dev <- 1
overflow_limit <- 17

# Calculate the z-score for the overflow limit
z_score <- (overflow_limit - mean) / std_dev

# Find the probability that the fill amount is greater than 17 ounces
probability_overflow <- 1 - pnorm(z_score)

# Print the result
cat("\n\n\n\n","The probability that the machine will overflow any one bottle is", probability_overflow, "\n")
