#utsav chandra, b297
n_juniors <- 60 
mean_juniors <- 171.5 
n_seniors <- 50
mean_seniors <- 173.8 
sd <- 6.2
alpha_1 <- 0.05 
pooled_se <- sqrt((sd^2 / n_juniors) + (sd^2 / n_seniors))
t_statistic_1 <- (mean_juniors - mean_seniors) / pooled_se
df <- n_juniors + n_seniors - 2
critical_t_value_1 <- qt(1 - alpha_1 / 2, df)
if (t_statistic_1 < -critical_t_value_1) {
  cat("Reject the null hypothesis. Junior students are shorter than senior students at 5% LOS.\n")
} else {
  cat("Fail to reject the null hypothesis. There is no significant evidence that junior students are shorter than senior students at 5% LOS.\n")
}
cat("t-statistic:", t_statistic_1, "\n")
cat("Degrees of Freedom:", df, "\n")
cat("Critical t-value (two-tailed):", critical_t_value_1, "\n")

# Set the 1% level of significance
alpha_2 <- 0.01
critical_t_value_2 <- qt(1 - alpha_2 / 2, df)
if (t_statistic_1 < -critical_t_value_2) {
  cat("Reject the null hypothesis. Junior students are shorter than senior students at 1% LOS.\n")
} else {
  cat("Fail to reject the null hypothesis. There is no significant evidence that junior students are shorter than senior students at 1% LOS.\n")
}
cat("Critical t-value (two-tailed) at 1% LOS:", critical_t_value_2, "\n")
