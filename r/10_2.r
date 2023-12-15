#utsav chandra, b297
alpha <- 0.05
pop_sd <- 4
sample_mean1 <- 20
n1 <- 500
sample_mean2 <- 15
n2 <- 400
s_pool <- sqrt(((n1 - 1) * var(rep(sample_mean1, n1)) + (n2 - 1) * var(rep(sample_mean2, n2)))) / sqrt(n1 + n2 - 2)
t_stat <- (sample_mean1 - sample_mean2) / (s_pool * sqrt(1/n1 + 1/n2))
df <- n1 + n2 - 2
p_value <- pt(t_stat, df, lower.tail = FALSE) * 2
cat("t-statistic:", t_stat, "\n")
cat("p-value:", p_value, "\n")
if (p_value < alpha) {
  cat("Reject the null hypothesis. The two samples may have different population means.")
} else {
  cat("Accept the null hypothesis. The two samples may have the same population mean.")
}