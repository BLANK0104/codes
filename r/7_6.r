#Utsav Chandra
#B297

# Load the faithful dataset
data(faithful)

# Calculate the mean, median, and mode
meanF <- mean(faithful$eruptions)
medianF <- median(faithful$eruptions)
modeF <- names(table(faithful$eruptions))[table(faithful$eruptions) == max(table(faithful$eruptions))]

# Calculate the skewness and kurtosis
library(e1071)
skewnessF <- skewness(faithful$eruptions)
kurtosisF <- kurtosis(faithful$eruptions)

# Calculate Q3, D6, and P84
q3F <- quantile(faithful$eruptions, 0.75)
d6F <- quantile(faithful$eruptions, 0.6)
p84F <- quantile(faithful$eruptions, 0.84)

# Print the results
print(paste("Mean duration:", meanF))
print(paste("Median duration:", medianF))
print(paste("Mode duration:", modeF))
print(paste("Skewness of duration:", skewnessF))
print(paste("Kurtosis of duration:", kurtosisF))
print(paste("Q3 of duration:", q3F))
print(paste("D6 of duration:", d6F))
print(paste("P84 of duration:", p84F))