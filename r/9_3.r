#Utsav chandra, b297

# create a data frame with the given data
data <- data.frame(
    aptitude_score = c(74, 87, 69, 93, 81, 97),
    prior_experience = c(5, 11, 4, 9, 7, 10),
    performance_evaluation = c(28, 33, 21, 40, 38, 46)
)

model <- lm(performance_evaluation ~ aptitude_score + prior_experience, data = data)

new_data <- data.frame(
    aptitude_score = 83,
    prior_experience = 7
)
predicted_evaluation <- predict(model, new_data)

print(predicted_evaluation)

#scatter plot with line of regression
plot(data$aptitude_score, data$performance_evaluation, main = "Performance Evaluation vs Aptitude Score", xlab = "Aptitude Score", ylab = "Performance Evaluation", abline(model), col="purple")