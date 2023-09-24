item=(c("food","clothing","recreation","education","rent","miscellaneous"))
expenditure=c(87,24,11,13,25,20)
#make pie chart
piepercent=round(expenditure*100/sum(expenditure),2)
print(pie(expenditure,labels=piepercent,main="pie chart of expenditure",col=rainbow(length(expenditure))))
#add legend
print(legend("topright",item,cex=0.8,fill=rainbow(length(item))))