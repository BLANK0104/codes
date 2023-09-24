
vector_data <- c(1, 2, 3, 4, 5)

# Create a matrix
matrix_data <- matrix(6:15, nrow = 2)

# Create another list
nested_list <- list("item1" = "apple", "item2" = "banana", "item3" = "orange")

# Create the main list
main_list <- list("my_vector" = vector_data, "my_matrix" = matrix_data, "my_nested_list" = nested_list)

# Display the names and values of the elements in the main list
print("List:")
print(main_list)

# Display the second element of the list (the matrix)
print("Second Element:")
print(main_list$my_matrix)
