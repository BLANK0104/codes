#Utsav Chandra
#B297

print("\n\n\n\n")

# Given
sample_mean <- 14
sample_std_dev <- 2.5
sample_size <- 1000

# standard error of the sample mean
standard_error <- sample_std_dev / sqrt(sample_size)

# i.students score between 12 and 15?
score_range_low <- 12
score_range_high <- 15

# z-scores for the lower and upper bounds of the range
z_low <- (score_range_low - sample_mean) / standard_error
z_high <- (score_range_high - sample_mean) / standard_error

# probability that students score between 12 and 15
probability_between_12_and_15 <- pnorm(z_high) - pnorm(z_low)

# ii. score above 18?
score_above <- 18

#  z-score for the score above 18
z_above <- (score_above - sample_mean) / standard_error

#  probability that students score above 18
probability_above_18 <- 1 - pnorm(z_above)

# How many score below 8?
score_below <- 8

# z-score for the score below 8
z_below <- (score_below - sample_mean) / standard_error

# probability that students score below 8
probability_below_8 <- pnorm(z_below)

# iv. minimum marks scored by top 30% students
top_percentage <- 0.30

#  z-score for the top 30% cutoff
z_top <- qnorm(1 - top_percentage)

# minimum marks scored by the top 30% students
minimum_marks_top_30_percent <- (z_top * standard_error) + sample_mean

# 
cat("i. Number of students scoring between 12 and 15:", probability_between_12_and_15 * sample_size, "\n")
cat("ii. Number of students scoring above 18:", probability_above_18 * sample_size, "\n")
cat("iii. Number of students scoring below 8:", probability_below_8 * sample_size, "\n")
cat("iv. Minimum marks scored by top 30% students:", minimum_marks_top_30_percent, "\n")
