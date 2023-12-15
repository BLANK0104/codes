#Utsav chandra, b297
alpha <- 0.05
pop_mean <- 165
sample_mean <- 160
n <- 100
pop_sd <- 10
t_stat <- (sample_mean - pop_mean) / (pop_sd / sqrt(n))
df <- n - 1
p_value <- pt(t_stat, df, lower.tail = FALSE) * 2

# Print the results
cat("t-statistic:", t_stat, "\n")
cat("p-value:", p_value, "\n")

# Check if the null hypothesis can be rejected
if (p_value < alpha) {
  cat("Reject the null hypothesis. The population mean height is not 165 cm.")
} else {
  cat("Accept the null hypothesis. The population mean height may be 165 cm.")
}