#utsav chandra

# Average number of phone calls per minute
lambda <- 2.5

# (i) Probability of no phone calls (k = 0)
prob_no_calls <- dpois(0, lambda)

# (ii) Probability of 4 or fewer phone calls (k = 0, 1, 2, 3, 4)
prob_4_or_less_calls <- sum(dpois(0:4, lambda))

# (iii) Probability of more than 6 phone calls (k > 6)
prob_more_than_6_calls <- 1 - ppois(6, lambda)

cat("i) Probability of no phone calls:", prob_no_calls, "\n")
cat("ii) Probability of 4 or fewer phone calls:", prob_4_or_less_calls, "\n")
cat("iii) Probability of more than 6 phone calls:", prob_more_than_6_calls, "\n")
