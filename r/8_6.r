#utsav chandra b297

p_studyhrs=c(3,15,6,8,4,2,10)
p_examscore=c(75,95, 65, 70,85,80,65)
print(cor(p_studyhrs, p_examscore, method = "pearson"))
d_studyhrs=c(4,12,9,6,2,3,10)
d_examscore=c(70,98, 85, 80, 65, 75,92)
print(cor(d_studyhrs, d_examscore, method = "pearson"))
