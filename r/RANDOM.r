fig <- plot_ly(auto_data, x = ~Location, color = ~Fuel_Type, colors = "viridis") %>% 
add_histogram()%>%
 layout(xaxis = list(title = "Car Count"),
 yaxis = list(title = "City"))
fig <- plot_ly(auto_data, x = ~Location, color = ~Transmission, 
colors=c("#636efa","#ef553b")) %>% add_histogram()%>%
 layout(xaxis = list(title = "Car Count"),
 yaxis = list(title = "City"))
fig <- plot_ly(auto_data, x = ~Location, color = ~Owner_Type, colors="Dark2") %>% 
add_histogram()%>%
 layout(xaxis = list(title = "Car Count"),
 yaxis = list(title = "City"))
fig <- plot_ly(data = auto_data, y = ~Mileage.Km.L, x=~Engine.CC,
 type = "scatter",color = ~Manufacturer,colors="Set2",
 mode = "markers",marker = list(size = 10)) %>%
 layout(xaxis = list(title = "Engine CC"),
 yaxis = list(title = "Mileage Km/L"))
fig <- plot_ly(data = auto_data, y = ~Mileage.Km.L, x=~Engine.CC,
 type = "scatter",color = ~Year,colors="viridis",
 mode = "markers",marker = list(size = 10)) %>%
 layout(xaxis = list(title = "Engine CC"),
 yaxis = list(title = "Mileage Km/L"))
fig <- plot_ly(data = auto_data, y = ~Mileage.Km.L, x=~Engine.CC,
 type = "scatter",color = ~Fuel_Type, colors = "Set1",
 mode = "markers",marker = list(size = 7)) %>%
 layout(xaxis = list(title = "Engine CC"),
 yaxis = list(title = "Mileage Km/L"))
fig <- plot_ly(data = auto_data, y = ~Mileage.Km.L, x=~Power,
 type = "scatter",color = ~Year, colors="plasma",
 mode = "markers",marker = list(size = 7)) %>%
 layout(xaxis = list(title = "Power HP"),
 yaxis = list(title = "Mileage Km/L"))
