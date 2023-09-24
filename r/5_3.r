#Utsav Chandra
# Mean number of accidents
mean_accidents <- 7.6

# i. Probability that less than three accidents will occur
prob_less_than_three <- ppois(2, mean_accidents)
cat("i. Probability of less than three accidents:", prob_less_than_three, "\n")

# ii. Probability that exactly three accidents will occur
prob_exactly_three <- dpois(3, mean_accidents)
cat("ii. Probability of exactly three accidents:", prob_exactly_three, "\n")
