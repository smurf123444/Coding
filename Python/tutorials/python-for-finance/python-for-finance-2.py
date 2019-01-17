import datetime as dt
import matplotlib.pyplot as plt
from matplotlib import style
import pandas as pd
import pandas_datareader.data as web

style.use('ggplot')

##start = dt.datetime(2000,1,1) # Start time of stock price
##end = dt.datetime(2016,12,13) # End time of stock price

##df = web.DataReader('TSLA', 'yahoo', start, end) # Read from web.Datareader

##df.to_csv('tsla.csv') # Data frame to file .csv

df = pd.read_csv('tsla.csv', parse_dates=True, index_col=0)
##print(df.head()) # print csv file
print(df[['Open','High']].head())
df['Adj Close'].plot()
plt.show() #Set up graph :D