print(pnorm(1.2,0,1))# area to the left of 1.2
#P(-1.5<=Z)
print(pnorm(-1.5,0,1))# area to the left of -1.5
#P(-1.4<=Z<=0.2)
print(pnorm(0.2,0,1)-pnorm(-1.4,0,1))# area to the left of 0.2 minus area to the left of -1.4

#P(-0.25<=Z<=1.76)
print(pnorm(1.76,0,1)-pnorm(-0.25,0,1))# area to the left of 1.76 minus area to the left of -0.25

#P(|Z|>2)
print(1-(pnorm(2,0,1)))# area to the right of 2

#P(Z<=z))=0.5
print(qnorm(0.5,0,1))# area to the left of z is 0.5

#P(Z<=z))=0.8
print(qnorm(0.8,0,1))# area to the left of z is 0.8

#P(Z>=z))=0.14
print(1-qnorm(0.14,0,1))# area to the right of z is 0.14

#P(-z<=Z<=z))=0.90
print(qnorm(0.9,0,1)-qnorm(0.1,0,1))# area to the left of z is 0.9 minus area to the left of -z is 0.1


print(pnorm(700,600,40,lower.tail = FALSE))

print(qnorm(0,1,600,40,lower.tail = FALSE))

#mean=16, P(X>17)
print(1-pnorm(17,16,16))


#sample =1000, mean=14, sd=2.5
#score of children between 12 qand 15
print((pnorm(15,14,2.5)-pnorm(12,14,2.5))*1000)

#above 18
print((1-pnorm(18,14,2.5))*1000)

#below 8
print((pnorm(8,14,2.5))*1000)

#minimum marks scored by top 30% students
print(qnorm(0.7,14,2.5))

#mean=1.005,sd=0.01,interval=(1.00+-0.02)
print(pnorm(1.02,1.005,0.01)-pnorm(0.98,1.005,0.01))