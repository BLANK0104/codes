#utsav chandra, b297
total_students <- 600
fast_food_consumers <- 600
obese_fast_food_consumers <- 150
p_obesity_without_fast_food <- 0.20 

expected_obese_fast_food <- fast_food_consumers * p_obesity_without_fast_food
observed <- matrix(c(obese_fast_food_consumers, fast_food_consumers - obese_fast_food_consumers,
                     total_students - fast_food_consumers, total_students - obese_fast_food_consumers),
                   nrow = 2,
                   byrow = TRUE)
colnames(observed) <- c("Obese", "Not Obese")
rownames(observed) <- c("Fast Food Consumers", "Non-Fast Food Consumers")
expected <- matrix(c(expected_obese_fast_food, fast_food_consumers - expected_obese_fast_food,
                     total_students - fast_food_consumers, total_students - expected_obese_fast_food),
                   nrow = 2,
                   byrow = TRUE)
chi_squared_result <- chisq.test(observed, correct = FALSE)
p_value <- chi_squared_result$p.value
alpha <- 0.05
if (p_value < alpha) {
  cat("Reject the null hypothesis. There is evidence of an association between consuming fast food and obesity among school students in Delhi.\n")
} else {
  cat("Accept the null hypothesis. There is no significant evidence of an association between consuming fast food and obesity among school students in Delhi.\n")
}
print(chi_squared_result)
