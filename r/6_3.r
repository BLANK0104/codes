#Utsav Chandra
#B297

# Given
mean <- 600
std_dev <- 40
budgeted_amount <- 700

# Calculate the z-score for $700
z_score <- (budgeted_amount - mean) / std_dev

# Find the probability that Z > z_score
probability_exceed_budget <- 1 - pnorm(z_score)

# Print the result
cat("\n\n\n\n","a. Probability that actual costs will exceed $700 is", probability_exceed_budget, "\n")



# Given parameters
desired_probability <- 0.1

# Calculate the z-score for the desired probability
z_score_desired <- qnorm(1 - desired_probability)

# Solve for X using the z-score formula: X = z * std_dev + mean
budgeted_amount_needed <- z_score_desired * std_dev + mean

# Print the result
cat("\n","b. Budgeted amount to ensure a 0.1 probability of exceeding it is", budgeted_amount_needed, "\n")
