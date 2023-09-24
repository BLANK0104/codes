
# Create a 4x5 matrix and fill it by rows
matrix_rows <- matrix(data = 1:20, nrow = 4, ncol = 5, byrow = TRUE)

# Create a 3x2 matrix with row and column labels
matrix_labels <- matrix(data = c(10, 20, 30, 40, 50, 60), nrow = 3, ncol = 2, byrow = TRUE,
                        dimnames = list(c("Row1", "Row2", "Row3"), c("Col1", "Col2")))

# Create a 2x2 matrix with row and column labels and fill it by columns
matrix_columns <- matrix(data = c(100, 200, 300, 400), nrow = 2, ncol = 2, byrow = FALSE,
                         dimnames = list(c("RowA", "RowB"), c("ColX", "ColY")))

# Display the matrices
print("Matrix filled by rows:")
print(matrix_rows)

print("Matrix with labels (filled by rows):")
print(matrix_labels)

print("Matrix with labels (filled by columns):")
print(matrix_columns)
