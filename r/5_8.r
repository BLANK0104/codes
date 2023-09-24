#utsav chandra

# Average number of imperfections per minute
lambda <- 0.2

# (a) Probability of spotting one imperfection in 3 minutes (k = 1)
lambda_3_minutes <- lambda * 3
prob_one_imperfection_3_minutes <- dpois(1, lambda_3_minutes)

# (b) Probability of spotting at least 2 imperfections in 5 minutes (k >= 2)
lambda_5_minutes <- lambda * 5
prob_at_least_2_imperfections_5_minutes <- 1 - ppois(1, lambda_5_minutes)

# (c) Probability of spotting at most 1 imperfection in 15 minutes (k <= 1)
lambda_15_minutes <- lambda * 15
prob_at_most_1_imperfection_15_minutes <- ppois(1, lambda_15_minutes)

cat("a) Probability of spotting one imperfection in 3 minutes:", prob_one_imperfection_3_minutes, "\n")
cat("b) Probability of spotting at least 2 imperfections in 5 minutes:", prob_at_least_2_imperfections_5_minutes, "\n")
cat("c) Probability of spotting at most 1 imperfection in 15 minutes:", prob_at_most_1_imperfection_15_minutes, "\n")
