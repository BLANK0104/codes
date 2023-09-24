#Utsav Chandra
#Find binomial distribution if the mean is 5 and variance is 10/3.
#Write a R program for above problem. Also write a R program to plot probability distribution and cumulative probability distribution.


# Mean and variance of binomial distribution
mean <- 5
variance <- 10/3

# Number of trials
n <- 10

# Probability of success
p <- mean/n

# Probability of failure
q <- 1 - p

# Generate binomial distribution
binomial <- rbinom(n, n, p)

# Print binomial distribution
print(binomial)

# Plot probability distribution
plot(binomial, type = "h", main = "Binomial Distribution", xlab = "Number of trials", ylab = "Probability")

# Plot cumulative probability distribution
plot(binomial, type = "s", main = "Cumulative Probability Distribution", xlab = "Number of trials", ylab = "Probability")
