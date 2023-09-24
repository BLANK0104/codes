#B297
particulars_of_items=c("raw material","direct labour","supplies","taxes","transportation","packing")
print(particulars_of_items)
amount_in_crores=c(62,70,21,15,8,4)
print(amount_in_crores)
pie3D(amount_in_crores,labels=particulars_of_items,main="pie chart of expenses",col=rainbow(length(particulars_of_items)),explode=0.1)
piepercent(amount_in_crores,labels=particulars_of_items,main="pie chart of expenses",col=rainbow(length(particulars_of_items)))