#Utsav Chandra
#B297

value <- c(5, 6, 7, 8, 9, 10)
frequency <- c(6, 8, 14, 22, 28, 36)

# Calculate the weighted mean
weighted_mean = sum(value * frequency) / sum(frequency)
print(paste("Weighted mean:", weighted_mean))

# Calculate the median
n = sum(frequency)
middle = (n + 1) / 2
cumulative_frequency = cumsum(frequency)
median = value[which(cumulative_frequency >= middle)[1]]
print(paste("Median:", median))

# Calculate the mode
mode = value[which.max(frequency)]
print(paste("Mode:", mode))