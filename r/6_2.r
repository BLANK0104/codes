#Utsav Chandra
#B297

# (P(Z ≤ Z) = 0.5)
Z_a <- qnorm(0.5)

#  (P(Z ≤ Z) = 0.80)
Z_b <- qnorm(0.80)

#  (P(Z ≥ Z) = 0.14)
Z_c <- qnorm(1 - 0.14)

#  (P(Z ≥ Z) = 0.69)
Z_d <- qnorm(1 - 0.69)

#  (P(-Z < Z < Z) = 0.90)
Z_e <- abs(qnorm((1 - 0.90) / 2))

#  (P(Z = Z) = 0.90)
Z_f <- 1-(pnorm(2,0,1)) 

# Print the results
cat("a. Z for P(Z ≤ Z) = 0.5 is", Z_a, "\n")
cat("b. Z for P(Z ≤ Z) = 0.80 is", Z_b, "\n")
cat("c. Z for P(Z ≥ Z) = 0.14 is", Z_c, "\n")
cat("d. Z for P(Z ≥ Z) = 0.69 is", Z_d, "\n")
cat("e. Z for P(-Z < Z < Z) = 0.90 is", Z_e, "\n")
cat("f. P(Z = Z) = 0.90 is n.",Z_f, "\n")
