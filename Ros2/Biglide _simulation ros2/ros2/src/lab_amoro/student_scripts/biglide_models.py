from math import *
import numpy as np

# Geometric parameters
l = 0.2828427
d = 0.4
# Dynamic parameters
mp = 3.0
mf = 1.0


def dgm(q11, q21, assembly_mode):
    
    #compute A2H
    
    A2H = 0.5*np.array([
    -d,
    q11-q21])
    
    # Compute a and h
    a = np.linalg.norm(A2H)
    try:
        term = l**2 - a**2

        # Ensure the term inside sqrt is non-negative
        h = sqrt(max(0, term))

    except ValueError:
        # If an error occurs, return None or some default value
        h = None
    
    # Compute HC based on assembly_mode (+1 or -1)
    rotation_matrix = np.array([[0, -1], [1, 0]])
    HC = assembly_mode * (h / a) *rotation_matrix @ A2H
    
    
    OA2 = np.array([d / 2, q21])
    
    OC = OA2 + A2H + HC
    
    x, y = OC[0], OC[1]
    
   
    return x, y


def igm(x, y, gamma1, gamma2):
    try:
        term1 = l**2 - (x + d/2)**2
        term2 = l**2 - (x - d/2)**2

        # Use safe_sqrt to prevent negative sqrt errors
        q11 = y + gamma1 * sqrt(max(0, term1))
        q21 = y + gamma1 * sqrt(max(0, term2))

        # Adding clamping to prevent extreme values
        q11 = np.clip(q11, -10, 10)  # Set appropriate limits based on your model
        q21 = np.clip(q21, -10, 10)

    except ValueError:
        # If an error occurs, set default values to prevent nan propagation
        q11, q21 = 0.0, 0.0
    return q11, q21


def dgm_passive(q11, q21, assembly_mode):
	
	x,y= dgm(q11, q21, assembly_mode)
	q12 = atan2(y-q11,x+d/2)
	q22 = atan2(y-q21,x-d/2)
	return q12, q22


# You can create intermediate functions to avoid redundant code
def compute_A_B(q11, q12, q21, q22 ):
    A = np.array([[l*cos(q12),l*sin(q12)],[l*cos(q22),l*sin(q22)]])
    B = np.array([[l*sin(q12),0],[0,l*sin(q22)]])
    return A, B


def dkm(q11, q12, q21, q22, q11D, q21D):
	
    A,B = compute_A_B(q11, q12, q21, q22)
	
    A_inv = np.linalg.inv(A)
	
    qD = np.array([q11D,q21D])
	
    pD = A_inv @ (B @ qD)
	
    xD = pD[0]
    yD = pD[1]
    
    return xD, yD


def ikm(q11, q12, q21, q22, xD, yD):
    A,B = compute_A_B(q11, q12, q21, q22)
	
    B_inv = np.linalg.inv(B)
	
    pD = np.array([xD, yD])
	
    qD = B_inv @ (A @ pD)
	
    	
    q11D = qD[0]
    
    q21D = qD[1]
    return q11D, q21D


def dkm_passive(q11, q12, q21, q22, q11D, q21D, xD, yD):
	
	u1 = np.array([cos(q12),sin(q12)])
	u2 = np.array([cos(q22),sin(q22)])
	
	rotation_matrix = np.array([[0, -1], [1, 0]])
	
	v1= rotation_matrix@u1
	v2= rotation_matrix@u2
	
	v = np.vstack((v1, v2))

	B = np.array([[v1[1],0],[0,v2[1]]])
	
	
	
	
	
	pD = np.array([xD, yD])
	qD = np.array([q11D,q21D])
	
	qpD = (1/l)*((v@pD) - (B@qD))
	
	
	
	
	q12D = qpD[0]
	q22D = qpD[1]
	return q12D, q22D


def dkm2(q11, q12, q21, q22, q11D, q12D, q21D, q22D, q11DD, q21DD):
    

	
    rotation_matrix = np.array([[0, -1], [1, 0]])
    
    
    #A,B = compute_A_B(q11, q12, q21, q22)
    u1 = np.array([cos(q12),sin(q12)])
    u2 = np.array([cos(q22),sin(q22)])
	
    A = np.vstack((u1, u2))
    B = np.array([[u1[1],0],[0,u2[1]]])
    
    A_inv = np.linalg.inv(A)
    
    qdd = np.array([q11DD, q21DD])
    
        
    d = np.array([l*(q12D**2),l*(q22D**2)])
    
    
    
    pDD = A_inv @ ((B @ qdd) - d)
    
    
	
    
    xDD = pDD[0]
    yDD = pDD[1]
    return xDD, yDD


def ikm2(q11, q12, q21, q22, q11D, q12D, q21D, q22D, xDD, yDD):
    rotation_matrix = np.array([[0, -1], [1, 0]])
    
    
    #A,B = compute_A_B(q11, q12, q21, q22)
    
    u1 = np.array([cos(q12),sin(q12)])
    u2 = np.array([cos(q22),sin(q22)])
	
    A = np.vstack((u1, u2))
    B = np.array([[u1[1],0],[0,u2[1]]])
    
    B_inv = np.linalg.inv(B)
    
    pdd = np.array([xDD, yDD])
    
        
    d = np.array([l*(q12D**2),l*(q22D**2)])
    
    
    
    qDD = B_inv @ ((A @ pdd) + d)
    q11DD = qDD[0]
    q21DD = qDD[1]
    return q11DD, q21DD


def dkm2_passive(q11, q12, q21, q22, q11D, q12D, q21D, q22D, q11DD, q21DD, xDD, yDD):
    
	u1 = np.array([cos(q12),sin(q12)])
	u2 = np.array([cos(q22),sin(q22)])
	
	rotation_matrix = np.array([[0, -1], [1, 0]])
	
	v1= rotation_matrix@u1
	v2= rotation_matrix@u2
	
	A = np.vstack((v1, v2))

	B = np.array([[v1[1],0],[0,v2[1]]])
	
	pDD = np.array([xDD, yDD])
	qDD = np.array([q11DD, q21DD])
	
	qpDD = (1/l)*((A@pDD) - (B@qDD))
	
	q12DD = qpDD[0]
	q22DD = qpDD[1]
	return q12DD, q22DD


def dynamic_model(q11, q12, q21, q22, q11D, q12D, q21D, q22D):
    
    
    u1 = np.array([cos(q12),sin(q12)])
    u2 = np.array([cos(q22),sin(q22)])
	
    A = np.vstack((u1, u2)) 
    B = np.array([[u1[1],0],[0,u2[1]]])
    A_inv = np.linalg.inv(A)
    
    J =A_inv.dot(B)
    
    MF = np.array([[mf,0],[0,mf]])
    
    M = MF + mp*(J.T.dot(J))
    
    
    qpd = np.array([-l*mp*q12D**2,-l*mp*q22D**2])
    
    c = J.T.dot(A_inv).dot(qpd)  
    
       
    #M = np.zeros((2, 2))
    #c = 0
    return M, c
