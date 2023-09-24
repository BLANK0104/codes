#Utsav Chandra
#B297

height = c(125,135,145,155,165)
girls = c(2,8,12,20,8)
#Find the mean and median of the above grouped data using R programming
weighted_mean = sum(height * girls) / sum(girls)
print(paste("Weighted mean:", weighted_mean))

n = sum(girls)
middle = (n + 1) / 2
cumulative_frequency = cumsum(girls)
median = height[which(cumulative_frequency >= middle)[1]]
print(paste("Median:", median))