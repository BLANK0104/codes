#Utsav Chandra
#The probability that on joining engineering college, a student will not successfully complete the course of studies is 2/5. Determine the probability that out of 5 students joining the college:  i) none, ii) at least 2 will successfully complete the course.
#Write a R program for above problem.

# Probability of failure
p <- 2/5

# Probability of success
q <- 1 - p

# Number of trials
n <- 5

# Generate binomial distribution
binomial <- rbinom(n, n, p)

# Print binomial distribution
print(binomial)

# Probability that none will successfully complete the course
print(dbinom(0, n, p))

# Probability that at least 2 will successfully complete the course
print(pbinom(1, n, p, lower.tail = FALSE))

# Plot probability distribution
plot(binomial, type = "h", main = "Binomial Distribution", xlab = "Number of trials", ylab = "Probability")

# Plot cumulative probability distribution
plot(binomial, type = "s", main = "Cumulative Probability Distribution", xlab = "Number of trials", ylab = "Probability")
