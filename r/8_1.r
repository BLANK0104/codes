#utsav chandra b297
X <- c(62, 64, 65, 69, 70, 71, 72, 74)
Y <- c(126, 125, 139, 145, 165, 152, 180, 208)

mean_X <- mean(X)
mean_Y <- mean(Y)

sd_X <- sd(X)
sd_Y <- sd(Y)

cov_XY <- cov(X, Y)

r <- cov_XY / (sd_X * sd_Y)

cat("Karl Pearson's coefficient of correlation:", r)