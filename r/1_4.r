
n <- 3
m <- n - 1

# Create two sample matrices of order n x (n-1)
matrix1 <- matrix(1:(n*m), nrow = n, ncol = m)
matrix2 <- matrix((n*m+1):(2*n*m), nrow = n, ncol = m)

# Display the matrices
print("Matrix 1:")
print(matrix1)

print("Matrix 2:")
print(matrix2)

# Addition of two matrices
addition_result <- matrix1 + matrix2
print("Addition Result:")
print(addition_result)

# Subtraction of two matrices
subtraction_result <- matrix1 - matrix2
print("Subtraction Result:")
print(subtraction_result)
