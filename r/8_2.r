#utsav chandra b297

data(mtcars)

par(mfrow=c(2,2))
plot(mtcars$mpg, mtcars$disp, main="mpg vs. disp", xlab="mpg", ylab="disp")
plot(mtcars$mpg, mtcars$hp, main="mpg vs. hp", xlab="mpg", ylab="hp")
plot(mtcars$mpg, mtcars$wt, main="mpg vs. wt", xlab="mpg", ylab="wt")
plot(mtcars$disp, mtcars$wt, main="disp vs. wt", xlab="disp", ylab="wt")

cor_disp_wt <- cor(mtcars$disp, mtcars$wt)
cor_mpg_hp <- cor(mtcars$mpg, mtcars$hp)
cor_wt_mpg <- cor(mtcars$wt, mtcars$mpg)

cat("Correlation between disp and wt:", cor_disp_wt, "\n")
cat("Correlation between mpg and hp:", cor_mpg_hp, "\n")
cat("Correlation between wt and mpg:", cor_wt_mpg, "\n")