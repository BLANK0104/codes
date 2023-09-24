
# Load the iris dataset
data(iris)

# List all the observations in the dataset
print("All observations in the 'iris' dataset:")
print(iris)

# Print the summary of the entire dataset
print("Summary of the 'iris' dataset:")
print(summary(iris))

# Print the summary of only the 'Sepal.Length' column
print("Summary of 'Sepal.Length' column:")
print(summary(iris$Sepal.Length))

# Filter data only for the 'setosa' species column
setosa_data <- subset(iris, Species == "setosa")

# Print the filtered data for 'setosa' species
print("Filtered data for 'setosa' species:")
print(setosa_data)
