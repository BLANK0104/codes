#Solving math word problems automatically using deep learning/machine learning.
#Eg: A train running at the speed of 60km/hr crosses a pole in 10 seconds, what is the length of the
#train? [Download dataset from web and apply ML algorithm to train and test]
#

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import re
import nltk
from nltk.corpus import stopwords
from nltk.stem import WordNetLemmatizer
from sklearn.feature_extraction.text import CountVectorizer
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
from sklearn.metrics import r2_score
from sklearn.metrics import accuracy_score
from sklearn.metrics import confusion_matrix
from sklearn.metrics import classification_report
from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error

#Importing dataset
dataset = pd.read_csv('train.csv')
dataset.head()

#Data Preprocessing
dataset.isnull().sum()
dataset = dataset.dropna()
dataset.isnull().sum()
dataset.shape
dataset['Difficulty'].value_counts()
dataset['Difficulty'].value_counts().plot(kind='bar')
dataset['Difficulty'].value_counts().plot(kind='pie')
dataset['Difficulty'].value_counts().plot(kind='hist')
dataset['Difficulty'].value_counts().plot(kind='box')
dataset['Difficulty'].value_counts().plot(kind='kde')
dataset['Difficulty'].value_counts().plot(kind='area')
dataset['Difficulty'].value_counts().plot(kind='density')
dataset['Difficulty'].value_counts().plot(kind='hexbin')
dataset['Difficulty'].value_counts().plot(kind='scatter')
dataset['Difficulty'].value_counts().plot(kind='line')
dataset['Difficulty'].value_counts().plot(kind='barh')

#Data Visualization
sns.countplot(dataset['Difficulty'])
sns.countplot(dataset['Difficulty'], hue=dataset['Difficulty'])
sns.countplot(dataset['Difficulty'], hue=dataset['Difficulty'], palette='Set1')

#Data Preprocessing
dataset['Problem'] = dataset['Problem'].str.lower()
dataset['Problem'] = dataset['Problem'].str.replace('[^\w\s]','')
dataset['Problem'] = dataset['Problem'].str.replace('\d','')
dataset['Problem'] = dataset['Problem'].str.replace('\s+',' ')
dataset['Problem'] = dataset['Problem'].str.strip()
dataset['Problem'] = dataset['Problem'].str.replace(' +',' ')

#Data Preprocessing
lemmatizer = WordNetLemmatizer()
corpus = []
for i in range(0, len(dataset)):
    review = re.sub('[^a-zA-Z]', ' ', dataset['Problem'][i])
    review = review.lower()
    review = review.split()
    review = [lemmatizer.lemmatize(word) for word in review if not word in set(stopwords.words('english'))]
    review = ' '.join(review)
    corpus.append(review)

#Data Preprocessing
cv = CountVectorizer(max_features=1500)
X = cv.fit_transform(corpus).toarray()
y = dataset.iloc[:, 1].values

#Data Preprocessing
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)

#Data Preprocessing
regressor = LinearRegression()
regressor.fit(X_train, y_train)

#Data Preprocessing
y_pred = regressor.predict(X_test)
y_pred

#Data Preprocessing
print('Mean Absolute Error:', mean_absolute_error(y_test, y_pred))
print('Mean Squared Error:', mean_squared_error(y_test, y_pred))

#Data Preprocessing
print('Root Mean Squared Error:', np.sqrt(mean_squared_error(y_test, y_pred)))

#Data Preprocessing
