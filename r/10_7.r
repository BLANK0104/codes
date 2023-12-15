#utsav chandra, b297
alpha <- 0.05
n <- 40
x <- 28
p_hat <- x / n
p0 <- 0.8
se <- sqrt(p0 * (1 - p0) / n)
z_stat <- (p_hat - p0) / se
p_value <- 2 * pnorm(-abs(z_stat))
cat("z-statistic:", z_stat, "\n")
cat("p-value:", p_value, "\n")
if (p_value < alpha) {
  cat("Reject the null hypothesis. The evidence supports the stockbroker's claim.")
} else {
  cat("Accept the null hypothesis. The evidence does not support the stockbroker's claim.")
}