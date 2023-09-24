#Utsav Chandra
#If the probability of recovering loan amount according to repayment schedule is 0.8 for a particular category of loans. What is the probability of recovering at least 4 out of 6 loans sectioned in this category? Also calculate the expected number of recoveries and the extent of variation.
#Write a R program for above problem.

# Probability of success
p <- 0.8

# Probability of failure
q <- 1 - p

# Number of trials
n <- 6

# Generate binomial distribution
binomial <- rbinom(n, n, p)

# Print binomial distribution
print(binomial)

# Probability of recovering at least 4 out of 6 loans
print(pbinom(3, n, p, lower.tail = FALSE))
