#Utsav Chandra
#b297

# Create a data frame for the grouped data
heights <- data.frame(
  Height = c("59.5-62.5", "62.5-65.5", "65.5-68.5", "68.5-71.5", "71.5-74.5"),
  Height1 = c(61, 64, 67, 70, 73),
  Frequency = c(5, 18, 42, 27, 8)
)

# Plot the grouped data
library(ggplot2)
ggplot(heights, aes(x = Height1, y = Frequency)) +
  geom_bar(stat = "identity") +
  labs(x = "Height (inches)", y = "Frequency")
  ggsave("7_4_1.png", width = 6, height = 4, dpi = 300)

# Calculate the skewness and kurtosis
library(moments)
skewness <- skewness(heights$Height1)
kurtosis <- kurtosis(heights$Height1)

# Calculate the shape coefficients
beta1 <- skewness / sqrt(kurtosis)
beta2 <- 3 * (1 + 5 * beta1^2) / (1 + 6 * beta1^2)

# Print the results
print(paste("Skewness:", skewness))
print(paste("Kurtosis:", kurtosis))
print(paste("Shape coefficient beta1:", beta1))
print(paste("Shape coefficient beta2:", beta2))