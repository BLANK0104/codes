p=0.5
n=10
x=(0:10)
#x=0
print(dbinom(x,n,p))
#x>=1
print(pbinom(0,n,p,lower.tail=FALSE))
x>=8
print(pbinom(8,n,p))

print(pdf(x,n,p))
z=data.frame(x,dbinom(x,n,p),pbinom(x,n,p))
print(z)
dev.off()
plot(x,dbinom(x,n,p),type="h",lwd=3,col="red")
plot(x,pbinom(x,n,p),type="h",lwd=3,col="red")