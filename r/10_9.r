#utsav chandra, b297
alpha <- 0.05
n1 <- 500
n2 <- 150
x1 <- 20
x2 <- 5
p_hat1 <- x1 / n1
p_hat2 <- x2 / n2
p_hat <- (x1 + x2) / (n1 + n2)
se <- sqrt(p_hat * (1 - p_hat) * (1/n1 + 1/n2))
z_stat <- (p_hat1 - p_hat2) / se
p_value <- pnorm(z_stat, lower.tail = FALSE)
cat("z-statistic:", z_stat, "\n")
cat("p-value:", p_value, "\n")

if (p_value < alpha) {
  cat("Reject the null hypothesis. The machine has improved after overhauling.")
} else {
  cat("Accept the null hypothesis. The machine may not have improved after overhauling.")
}