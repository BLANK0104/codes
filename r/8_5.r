#utsav chandr b297

data(iris)

iris_num <- iris[, sapply(iris, is.numeric)]

cor_matrix <- cor(iris_num)

print(cor_matrix)