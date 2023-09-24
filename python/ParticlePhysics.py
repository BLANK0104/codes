import matplotlib.pyplot as plt
import numpy as np



def main():

	#trials for provided values completed
	
	v0           = 1.0    # velocity
	eta          = 0.5   # random fluctuation
	L            = 10    # size
	R            = 1     # interaction radius
	dt           = 0.1   # time
	Nt           = 99006622   # number of time
	N            = 800   # number of particles
	plotRealTime = True
	
	np.random.seed(17)   

	x = np.random.rand(N,1)*L
	y = np.random.rand(N,1)*L
	
	theta = 2 * np.pi * np.random.rand(N,1)
	vx = v0 * np.cos(theta)
	vy = v0 * np.sin(theta)

	fig = plt.figure(figsize=(4,4), dpi=80)
	ax = plt.gca()
	
	for i in range(Nt):

		x += vx*dt
		y += vy*dt
		
		x = x % L
		y = y % L
		
		mean_theta = theta
		for b in range(N):
			neighbors = (x-x[b])**2+(y-y[b])**2 < R**2
			sx = np.sum(np.cos(theta[neighbors]))
			sy = np.sum(np.sin(theta[neighbors]))
			mean_theta[b] = np.arctan2(sy, sx)
			
		theta = mean_theta + eta*(np.random.rand(N,1)-0.5)
		
		vx = v0 * np.cos(theta)
		vy = v0 * np.sin(theta)
		
		if plotRealTime or (i == Nt-1):
			plt.cla()
			plt.quiver(x,y,vx,vy)
			ax.set(xlim=(0, L), ylim=(0, L))
			ax.set_aspect('equal')	
			ax.get_xaxis().set_visible(False)
			ax.get_yaxis().set_visible(False)
			plt.pause(0.0000000000000000001)
				
	plt.savefig('activematter.png',dpi=240)
	plt.show()
	    
	return 0



if __name__== "__main__":
  main()

  #pushed to main repository and working as intended