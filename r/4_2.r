# Define the PDF function
pdf <- function(x) {
  result <- ifelse(x >= 2 & x <= 6, (3/32) * (x - 2) * (6 - x), 0)
  return(result)
}

# Define the CDF function
cdf <- function(x) {
  result <- sapply(x, function(t) integrate(pdf, lower = 2, upper = t)$value)
  return(result)
}

# Calculate the probability that solar radiation exceeds 400 calories
prob_exceed_400 <- 1 - integrate(pdf, lower = 2, upper = 4)$value
cat("Probability that solar radiation exceeds 400 calories:", prob_exceed_400, "\n")

# Find the value of x for which P(X <= x) = 0.5
x_median <- uniroot(function(x) cdf(x) - 0.5, interval = c(2, 6))$root
cat("Amount of solar radiation exceeded on 50% of the October days:", x_median, "\n")

# Calculate the mean
mean_radiation <- integrate(function(x) x * pdf(x), lower = 2, upper = 6)$value

# Calculate the variance
variance_radiation <- integrate(function(x) (x - mean_radiation)^2 * pdf(x), lower = 2, upper = 6)$value

# Calculate the standard deviation
sd_radiation <- sqrt(variance_radiation)

cat("Mean:", mean_radiation, "\n")
cat("Variance:", variance_radiation, "\n")
cat("Standard Deviation:", sd_radiation, "\n")
