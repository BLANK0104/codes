#Utsav Chandra
#B297

# Load the faithful dataset
data(faithful)
library(moments)
# Calculate the first four raw moments
m1 <- moment(faithful$eruptions, order = 1)
m2 <- moment(faithful$eruptions, order = 2)
m3 <- moment(faithful$eruptions, order = 3)
m4 <- moment(faithful$eruptions, order = 4)

# Calculate the first four central moments
cm1 <- moment(faithful$eruptions, order = 1, central = TRUE)
cm2 <- moment(faithful$eruptions, order = 2, central = TRUE)
cm3 <- moment(faithful$eruptions, order = 3, central = TRUE)
cm4 <- moment(faithful$eruptions, order = 4, central = TRUE)


# Print the results
print(paste("First four raw moments:", m1, m2, m3, m4))
print(paste("First four central moments:", cm1, cm2, cm3, cm4))

# Load the BJsales dataset
data(BJsales)

# Calculate the third central moment
cm3 <- moment(BJsales, order = 3, central = TRUE)

# Print the result
print(paste("Third central moment:", cm3))