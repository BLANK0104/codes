#utssav chandra, b297
n1 <- 100  
mean1 <- 62.5  
n2 <- 100  
mean2 <- 64.5
sd2 <- 12.5  
alpha <- 0.05
pooled_se <- sqrt(((((n1 - 1) * sd2^2) + ((n2 - 1) * sd2^2)) / (n1 + n2 - 2)) * (1/n1 + 1/n2))
t_statistic <- (mean1 - mean2) / (pooled_se * sqrt((1/n1) + (1/n2)))
df <- n1 + n2 - 2
critical_t_value <- qt(1 - alpha / 2, df)
p_value <- 2 * (1 - pt(abs(t_statistic), df))
if (t_statistic > critical_t_value) {
  cat("Reject the null hypothesis. The fresh group of boys has a better IQ.\n")
} else {
  cat("Accept the null hypothesis. There is no significant evidence that the fresh group of boys has a better IQ.\n")
}
cat("t-statistic:", t_statistic, "\n")
cat("Degrees of Freedom:", df, "\n")
cat("Critical t-value (two-tailed):", critical_t_value, "\n")
cat("p-value:", p_value, "\n")
