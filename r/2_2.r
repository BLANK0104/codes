#read csv and plot subdivided bar graph,and multiple bar graph

#read csv
data <- read.csv("C:\\codes\\r\\data.csv",header = TRUE,sep = ",")
print(data)
#make bar graph
barplot(main = "bar graph of sales",xlab = "city",ylab = "products",col = rainbow(length(data$city)),beside = TRUE,legend = rownames(data),args.legend = list(x = "topright",bty = "n",cex = 0.8,fill = rainbow(length(data$city))),data$p2)
#multiple bar graph
barplot(main = "bar graph of sales",xlab = "city",ylab = "products",col = rainbow(length(data$city)),beside = TRUE,legend = rownames(data),args.legend = list(x = "topright",bty = "n",cex = 0.8,fill = rainbow(length(data$city))),data$p2)
#subdivied bar graph
barplot(main = "bar graph of sales",xlab = "city",ylab = "products",col = rainbow(length(data$city)),beside = TRUE,legend = rownames(data),args.legend = list(x = "topright",bty = "n",cex = 0.8,fill = rainbow(length(data$city))),data$p2)