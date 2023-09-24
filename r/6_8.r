#Utsav Chandra
#B297
cat("\n\n\n\n")
# Given
mean_weight <- 1.9  # Mean weight in grams
variance_weight <- 0.01  # Variance in grams

# Number of envelopes in a packet
packet_size <- 1000

#standard deviation from the variance
std_deviation <- sqrt(variance_weight)

# (i) Number of envelopes weighing 2 gm or more
weight_threshold_i <- 2
z_score_i <- (weight_threshold_i - mean_weight) / std_deviation
probability_i <- 1 - pnorm(z_score_i)
expected_count_i <- probability_i * packet_size

# (ii) Number of envelopes weighing 2.1 gm or more
weight_threshold_ii <- 2.1
z_score_ii <- (weight_threshold_ii - mean_weight) / std_deviation
probability_ii <- 1 - pnorm(z_score_ii)
expected_count_ii <- probability_ii * packet_size

# Print the results
cat("(i) Expected number of envelopes weighing 2 gm or more:", expected_count_i, "\n")
cat("(ii) Expected number of envelopes weighing 2.1 gm or more:", expected_count_ii, "\n")

# probability density plot
library(ggplot2)

# range of weights for the plot
weights <- seq(1.7, 2.3, by = 0.01)
pdf_values <- dnorm(weights, mean_weight, std_deviation)

# Create the plot
ggplot(data = data.frame(weights, pdf_values), aes(x = weights, y = pdf_values)) +
  geom_line() +
  geom_area(fill = "#a800a5", alpha = 0.5, aes(x = ifelse(weights >= weight_threshold_i, weights, NA))) +
  geom_area(fill = "#0f00b3", alpha = 0.5, aes(x = ifelse(weights >= weight_threshold_ii, weights, NA))) +
  labs(x = "Weight (grams)", y = "Probability Density") +
  ggtitle("Probability Density of Envelope Weights") +
  theme_minimal()

  ggsave("envelope_weights_plot.png", plot = last_plot(), width = 6, height = 4)