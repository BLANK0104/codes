#utsav chandra
#Out of 800 families with 5 children each, how many would be expected to have
#i)	3 boys and 2 girls	(ii) 5 girls	(iii) 5 boys?	
#Write a R program for above problem.

# Total number of families
total_families <- 800

# Number of children in each family
num_children <- 5

# Probability of having a boy or girl for each child
p_boy_or_girl <- 0.5

# i) Expected number of families with 3 boys and 2 girls
k_3_boys_2_girls <- 3
probability_3_boys_2_girls <- dbinom(k_3_boys_2_girls, num_children, p_boy_or_girl)
expected_families_3_boys_2_girls <- total_families * probability_3_boys_2_girls

# ii) Expected number of families with 5 girls
k_5_girls <- 5
probability_5_girls <- dbinom(k_5_girls, num_children, p_boy_or_girl)
expected_families_5_girls <- total_families * probability_5_girls

# iii) Expected number of families with 5 boys
k_5_boys <- 5
probability_5_boys <- dbinom(k_5_boys, num_children, p_boy_or_girl)
expected_families_5_boys <- total_families * probability_5_boys

cat("i) Expected number of families with 3 boys and 2 girls:", expected_families_3_boys_2_girls, "\n")
cat("ii) Expected number of families with 5 girls:", expected_families_5_girls, "\n")
cat("iii) Expected number of families with 5 boys:", expected_families_5_boys, "\n")
