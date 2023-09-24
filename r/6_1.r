#Utsav Chandra
#B297

# (P(Z ≤ 1.2))
prob_a <- pnorm(1.2)

# (P(-1.5 ≤ Z))
prob_b <- 1 - pnorm(-1.5)

# (P(-1.4 < Z < -0.2))
prob_c <- pnorm(-0.2) - pnorm(-1.4)

# (P(-0.25 ≤ Z ≤ 1.76))
prob_d <- pnorm(1.76) - pnorm(-0.25)

# (P(Z > 2))
prob_e <- 1 - pnorm(2)

cat("a. P(Z ≤ 1.2) =", prob_a, "\n")
cat("b. P(-1.5 ≤ Z) =", prob_b, "\n")
cat("c. P(-1.4 < Z < -0.2) =", prob_c, "\n")
cat("d. P(-0.25 ≤ Z ≤ 1.76) =", prob_d, "\n")
cat("e. P(Z > 2) =", prob_e, "\n")
