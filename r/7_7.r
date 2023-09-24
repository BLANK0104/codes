#Utsav Chandra
#B297

# Define the first three moments
m1 <- 2
m2 <- 10
m3 <- -30

# Calculate the mean
mean <- m1
print(paste("Mean:", mean))

# Calculate the variance
variance <- m2 - (m1^2)
print(paste("Variance:", variance))

# Calculate the skewness
skewness <- (m3 - (3*m1*m2) + (2*(m1^3))) / variance^(3/2)
print(paste("Skewness:", skewness))