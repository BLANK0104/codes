#utsav chandra, b297
line1 <- c(1, 6, -6)
line2 <- c(3, 2, -10)

x_mean <- (-1 * line1[3])/line1[1]
y_mean <- (-1 * line2[3])/line2[2]

cov_xy <- (-1 * line1[2] * line2[2])/line1[1]
sd_x <- sqrt((line1[1] * (x_mean^2)) + (2 * line1[2] * x_mean) + line1[3])
sd_y <- sqrt((line2[1] * (y_mean^2)) + (2 * line2[2] * y_mean) + line2[3])
corr_xy <- cov_xy/(sd_x * sd_y)

cat("Mean of x:", x_mean, "\n")
cat("Mean of y:", y_mean, "\n")
cat("Correlation coefficient between x and y:", corr_xy, "\n")
