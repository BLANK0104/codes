#Utsav chandra

x <- c(10, 12, 18, 18, 15, 40)
y <- c(12, 18, 25, 25, 50, 25)

rank_x <- rank(x)
rank_y <- rank(y)

d <- rank_x - rank_y

sum_d_squared <- sum(d^2)

n <- length(x)
r <- 1 - (6 * sum_d_squared) / (n * (n^2 - 1))

cat("Rank correlation coefficient:", r)