import pandas as pd
import matplotlib.pyplot as plt 
data=pd.read_csv("laptop_price.csv",encoding='latin-1')
displaydata=pd.DataFrame(data)
print(displaydata)
print(type(displaydata))
print(displaydata.info())
displaydata.plot(kind='line',
                 x='Company',
                 y='Price_euros',
                 color='red')
plt.title("Laptop Price Graph")
plt.show()