#Utsav Chandra
#B297

cat("\n\n\n\n")

# Given
mean_resistance <- 0.13  # Mean resistance in ohms
std_deviation <- 0.005   # Standard deviation in ohms

# Specs
lower_limit <- 0.12  # Lower specification limit
upper_limit <- 0.14  # Upper specification limit

# z-scores for the lower and upper specification limits
z_lower <- (lower_limit - mean_resistance) / std_deviation
z_upper <- (upper_limit - mean_resistance) / std_deviation

# probability that a randomly selected wire will meet the specifications
probability_within_specifications <- pnorm(z_upper) - pnorm(z_lower)

# Print the result
cat("a. Probability that a randomly selected wire will meet the specifications:", probability_within_specifications, "\n")


# Probability that a single wire meets the specifications
probability_single_wire <- probability_within_specifications

# Calculate the probability that all four wires meet the specifications
probability_all_four_wires <- probability_single_wire ^ 4

# Print the result
cat("b. Probability that all four wires will meet the specifications:", probability_all_four_wires, "\n")
