#utsav chandra, b297
alpha <- 0.05
n1 <- 800
n2 <- 600
x1 <- 480
x2 <- 350
p_hat1 <- x1 / n1
p_hat2 <- x2 / n2
p_hat <- (x1 + x2) / (n1 + n2)
se <- sqrt(p_hat * (1 - p_hat) * (1/n1 + 1/n2))
z_stat <- (p_hat1 - p_hat2) / se
p_value <- 2 * pnorm(-abs(z_stat))
cat("z-statistic:", z_stat, "\n")
cat("p-value:", p_value, "\n")
if (p_value < alpha) {
  cat("Reject the null hypothesis. The difference between the proportions of employed persons cannot be ascribed due to sampling fluctuations.")
} else {
  cat("Accept the null hypothesis. The difference between the proportions of employed persons may be ascribed due to sampling fluctuations.")
}