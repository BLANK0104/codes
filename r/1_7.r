
# i. Create table1 of 7 observations
table1 <- data.frame(
  RollNumber = c(101, 102, 103, 104, 105, 106, 107),
  Name = c("u1", "u2", "u3", "u4", "u5", "u6", "u7"),
  MTT1Marks = c(85, 78, 92, 67, 89, 72, 95)
)

# ii. Add one more column of MTT2 marks in table1
table1$MTT2Marks <- c(90, 82, 95, 70, 88, 75, 97)

# iii. Create table2 for 3 more students who are late admitted
table2 <- data.frame(
  RollNumber = c(108, 109, 110),
  Name = c("Henry", "Ivy", "Jack"),
  MTT1Marks = c(80, 91, 68),
  MTT2Marks = c(85, 89, 72)
)

# iv. Combine Table1 and Table2
combined_table <- rbind(table1, table2)

# v. Print the summary of the new table
print("Summary of the new table:")
print(summary(combined_table))

# vi. Extract only RollNumber and MTT2 marks from the new table
roll_mtt2 <- combined_table[, c("RollNumber", "MTT2Marks")]

# vii. Extract only the first two rows of the new table
first_two_rows <- combined_table[1:2, ]

# viii. Extract 3rd and 5th rows with 2nd and 3rd columns
rows_3_and_5_cols_2_and_3 <- combined_table[c(3, 5), c(2, 3)]

# Print the results
print("RollNumber and MTT2 marks from the new table:")
print(roll_mtt2)

print("First two rows of the new table:")
print(first_two_rows)

print("3rd and 5th rows with 2nd and 3rd columns:")
print(rows_3_and_5_cols_2_and_3)
