# Given number of white and red balls
n_white <- 7
n_red <- 3

# Total number of balls
total_balls <- n_white + n_red

# Calculate the probability of drawing 0, 1, or 2 white balls
prob_0_white <- choose(n_red, 2) / choose(total_balls, 2)
prob_1_white <- (choose(n_white, 1) * choose(n_red, 1)) / choose(total_balls, 2)
prob_2_white <- choose(n_white, 2) / choose(total_balls, 2)

# Calculate the expected number of white balls drawn
expected_white <- (0 * prob_0_white) + (1 * prob_1_white) + (2 * prob_2_white)

# Display the expected number of white balls drawn
cat("Expected number of white balls drawn:", expected_white, "\n")

# Possible outcomes: 0 white balls, 1 white ball, 2 white balls
outcomes <- c(0, 1, 2)
probabilities <- c(prob_0_white, prob_1_white, prob_2_white)

# Plot probability distribution
barplot(probabilities, names.arg = outcomes,
        main = "Probability Distribution of White Balls",
        xlab = "Number of White Balls", ylab = "Probability")

# Calculate cumulative probabilities
cumulative_probabilities <- cumsum(probabilities)

# Plot cumulative distribution function
plot(outcomes, cumulative_probabilities, type = "s", col = "red",
     main = "Cumulative Distribution Function of White Balls",
     xlab = "Number of White Balls", ylab = "Cumulative Probability")
