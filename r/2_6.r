#Write a R program to change the first level of a factor with another level of a given factor. (change the level of vector to some other level)

v=c("a","b","c","d","e","f")
print(v)
v=factor(v)
print(v)
levels(v)[1]="z"
print(v)