#Utsav Chandra
#B297

data=c(21,15,40,30,26,45,50,54,60,65,70)
data <- c(21, 15, 40, 30, 26, 45, 50, 54, 60, 65, 70)

# Mean
mean_data <- mean(data)
print(paste("Mean:", mean_data))

# Median
median_data <- median(data)
print(paste("Median:", median_data))

# Mode
Mode <- function(x) {
  ux <- unique(x)
  ux[which.max(tabulate(match(x, ux)))]
}
mode_data <- Mode(data)
print(paste("Mode:", mode_data))

# Q3
q3_data <- quantile(data, 0.75)
print(paste("Q3:", q3_data))

# D6
d6_data <- quantile(data, 0.6)
print(paste("D6:", d6_data))

# P84
p84_data <- quantile(data, 0.84)
print(paste("P84:", p84_data))

# Skewness
library(e1071)
skewness_data <- skewness(data)
print(paste("Skewness:", skewness_data))

# Kurtosis
kurtosis_data <- kurtosis(data)
print(paste("Kurtosis:", kurtosis_data))

# First four raw moments
library(moments)
m1_data <- moment(data, order = 1)
m2_data <- moment(data, order = 2)
m3_data <- moment(data, order = 3)
m4_data <- moment(data, order = 4)
print(paste("First four raw moments:", m1_data, m2_data, m3_data, m4_data))

# First four central moments
library(moments)
cm1_data <- moment(data, order = 1, central = TRUE)
cm2_data <- moment(data, order = 2, central = TRUE)
cm3_data <- moment(data, order = 3, central = TRUE)
cm4_data <- moment(data, order = 4, central = TRUE)
print(paste("First four central moments:", cm1_data, cm2_data, cm3_data, cm4_data))