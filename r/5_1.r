#Utsav Chandra
# Probability of a single student graduating
p_graduate <- 0.5

# Number of students
n_students <- 10

# i. Probability that none will graduate
prob_none_graduate <- dbinom(0, n_students, p_graduate)
cat("i. Probability that none will graduate:", prob_none_graduate, "\n")

# ii. Probability that exactly one will graduate
prob_one_graduate <- dbinom(1, n_students, p_graduate)
cat("ii. Probability that exactly one will graduate:", prob_one_graduate, "\n")

# iii. Probability that at least one will graduate
prob_at_least_one_graduate <- 1 - dbinom(0, n_students, p_graduate)
cat("iii. Probability that at least one will graduate:", prob_at_least_one_graduate, "\n")
