# Define the PDF function
pdf <- function(x) {
  result <- ifelse(x >= 0 & x <= 1, 6 * x * (1 - x), 0)
  return(result)
}

# Define the CDF function
cdf <- function(x) {
  result <- sapply(x, function(t) integrate(pdf, lower = 0, upper = t)$value)
  return(result)
}

# Probability that repair costs will exceed Rs 75 during a week
prob_over_75 <- 1 - cdf(0.75)
cat("Probability that repair costs will exceed Rs 75 during a week:", prob_over_75, "\n")

# Probability that repair costs will exceed Rs 75 given that they will exceed Rs 50
prob_over_75_given_50 <- prob_over_75 / (1 - cdf(0.5))
cat("Probability that repair costs will exceed Rs 75 given that they will exceed Rs 50:", prob_over_75_given_50, "\n")

# Plot the CDF
x <- seq(0, 1, by = 0.01)
y <- cdf(x)
plot(x, y, type = "l", xlab = "x", ylab = "F(x)", main = "CDF of X")
