#utsav chandra, b297
library(datasets)
data(auto_mpg)

model <- lm(mpg ~ . - name, data = auto_mpg)
summary(model)
