#Utsav Chandra
#B297

cat("\n\n\n\n")
# Given
mean_diameter <- 1.005  # Mean diameter in inches
std_deviation <- 0.01   # Standard deviation in inches

# Specs
lower_limit <- 1.00 - 0.02  # Lower specification limit
upper_limit <- 1.00 + 0.02  # Upper specification limit

# z-scores for the lower and upper specification limits
z_lower <- (lower_limit - mean_diameter) / std_deviation
z_upper <- (upper_limit - mean_diameter) / std_deviation

#  probability that a randomly selected shaft will be outside the specified range
probability_outside_specifications <- pnorm(z_lower) + (1 - pnorm(z_upper))

# Convert the probability to a percentage
percentage_outside_specifications <- probability_outside_specifications * 100

# Print the result
cat("Percentage of output that will fail to meet specifications:", percentage_outside_specifications, "%\n")
