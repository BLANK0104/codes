
# create the data frame
df <- data.frame(X1 = c(10, 38, 25, 29, 16, 14),
                 X2 = c(12, 39, 20, 31, 16, 23),
                 X3 = c(10, 23, 16, 13, 11, 6))
#i)	Find the line of regression of X1 on X2,X3 and the corresponding multiple correlation coefficient R1.23
model <- lm(X1 ~ X2 + X3, data = df)
print(summary(model))

#ii)	Find the line of regression of X2 on X1,X3 and the corresponding multiple correlation coefficient R2.13
model <- lm(X2 ~ X1 + X3, data = df)
print(summary(model))

#iii)	Find the line of regression of X3 on X1,X2 and the corresponding multiple correlation coefficient R3.12
model <- lm(X3 ~ X1 + X2, data = df)
print(summary(model))