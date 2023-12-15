#Utsav chandra, b297
rent_data <- data.frame(Rent = c(3600, 10000, 4500, 5250, 3500, 3000),
                        No_of_rooms = c(2, 6, 3, 4, 2, 1),
                        Distance_from_Centre_of_city = c(1, 1, 2, 3, 10, 4))

model <- lm(Rent ~ No_of_rooms + Distance_from_Centre_of_city, data = rent_data)

new_data <- data.frame(No_of_rooms = 2, Distance_from_Centre_of_city = 2)
predicted_rent <- predict(model, newdata = new_data)

cat("Least square equation: Rent =", round(coef(model)[1], 2), "+", round(coef(model)[2], 2), "* No. of rooms +", round(coef(model)[3], 2), "* Distance from Centre of city\n")
cat("Predicted rent for a 2-bedroom apartment 2 km away from downtown:", round(predicted_rent, 2))