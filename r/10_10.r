#utsav chandra, b297
alpha <- 0.05
p_hat <- 0.65
p0 <- 0.7
n <- 150
se <- sqrt(p0 * (1 - p0) / n)
z_stat <- (p_hat - p0) / se
p_value <- 2 * pnorm(-abs(z_stat))
cat("z-statistic:", z_stat, "\n")
cat("p-value:", p_value, "\n")
if (p_value < alpha) {
  cat("Reject the null hypothesis. The proportion of employees showing less than average performance is not 0.7.")
} else {
  cat("Accept the null hypothesis. The proportion of employees showing less than average performance may be 0.7.")
}