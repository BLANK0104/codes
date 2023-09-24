#graphs
#pie charts and save it as png file
x=c(21,62,10,53,12)
lbls=c("USA","UK","China","Russia","India")
piepercent=round(x*100/sum(x),2)
pie(x,labels=piepercent,main="pie chart of countries",col=rainbow(length(x)))
(legend("topright",lbls,cex=0.8,fill=rainbow(length(lbls))))
print(y)

png("piechart.png")
