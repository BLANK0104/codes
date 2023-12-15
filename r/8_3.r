#utsav Chandra b297

judge_a <- c(8, 7, 6, 3, 2, 1, 5, 4)
judge_b <- c(7, 5, 4, 1, 3, 2, 6, 8)

rank_sum_a <- sum(judge_a)
rank_sum_b <- sum(judge_b)

sum_products <- sum(judge_a * judge_b)

n <- length(judge_a)
r <- (n * sum_products - rank_sum_a * rank_sum_b) / sqrt((n * sum(judge_a^2) - rank_sum_a^2) * (n * sum(judge_b^2) - rank_sum_b^2))

cat("Coefficient of correlation:", r)