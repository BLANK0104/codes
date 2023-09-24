import numpy as np
from matplotlib import pyplot as plt
# Function is defined
def FermiDirac (BE) :
 f = 1/(np.exp(BE) + 1)
 return f
def boseEinstein (BE) :
 f = 1/(np.exp(BE) - 1)
 return f
def boltzmann (BE) :
 f = np.exp(-BE)
 return f
BE1 = np.linspace(0.5,5,100)
BE = np.linspace(-5,5,100)
plt.plot(BE, FermiDirac(BE), '.')
plt.plot(BE1, boltzmann(BE1), '.-')
plt.plot(BE1, boseEinstein(BE1),'-')
plt.xlabel("B(E-Mu)")
plt.ylabel("f(E)")
plt.title("Distribution function versus Temperature")
plt.show()