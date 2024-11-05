from math import *
import numpy as np

# Geometric parameters
l = 0.09
d = 0.118

# Dynamic parameters
ZZ1R = 1.0 * 0.045 * 0.045
ZZ2R = 1.0 * 0.045 * 0.045
mR = 0.5

def dgm(q11, q21, assembly_mode):
    OA_21 = np.array([d/2, 0])
    A21_A22 = np.array([l * np.cos(q21), l * np.sin(q21)])
    A22_H = np.array([0.5 * (-l * np.cos(q21) - d + l * np.cos(q11)), 
                      0.5 * (-l * np.sin(q21) + l * np.sin(q11))])

    a = np.linalg.norm(A22_H)

    if l**2 - a**2 > 0:
        h = np.sqrt(l**2 - a**2)
    else:
        h = 0

    H_A13 = assembly_mode * (h / a) * (np.array([[0, -1], [1, 0]]) @ A22_H)
    OA_13 = OA_21 + A21_A22 + A22_H + H_A13
    x = OA_13[0]
    y = OA_13[1]
    return x, y

def igm(x, y, gamma1, gamma2):
    A11_M1 = 0.5 * np.array([[x + d / 2], [y - 0]])
    c = np.linalg.norm(A11_M1)
    
    if c < l:
        b = np.sqrt(l**2 - c**2)
    else:
        b = np.sqrt(c**2 - l**2)

    M1_A12 = gamma1 * (b / c) * (np.array([[0, -1], [1, 0]]) @ A11_M1)
    A11_A12 = M1_A12 + A11_M1
    q11 = np.arctan2(A11_A12[1], A11_A12[0])

    A21_M2 = 0.5 * np.array([[x - d / 2], [y - 0]])
    c = np.linalg.norm(A21_M2)
    
    if c < l:
        b = np.sqrt(l**2 - c**2)
    else:
        b = np.sqrt(c**2 - l**2)

    M2_A22 = gamma2 * (b / c) * (np.array([[0, -1], [1, 0]]) @ A21_M2)
    A21_A22 = M2_A22 + A21_M2
    q21 = np.arctan2(A21_A22[1], A21_A22[0])
    
    return q11, q21

def dgm_passive(q11, q21, assembly_mode):
    x, y = dgm(q11, q21, assembly_mode)
    q12 = np.arctan2(y / l - sin(q11), x / l + d / (2 * l) - cos(q11)) - q11
    q22 = np.arctan2(y / l - sin(q21), x / l - d / (2 * l) - cos(q21)) - q21
    return q12, q22

def compute_A_B(q11, q12, q21, q22):
    x = -d / 2 + l * np.cos(q11) + l * np.cos(q11 + q12)
    y = l * np.sin(q11) + l * np.sin(q11 + q12)
    A13 = np.array([x, y])
    A11 = np.array([-d / 2, 0])
    A21 = np.array([d / 2, 0])
    A12 = np.array([-d / 2 + l * np.cos(q11), l * np.sin(q11)])
    A22 = np.array([d / 2 + l * np.cos(q21), l * np.sin(q21)])

    u12 = A13 - A12
    u22 = A13 - A22
    u11 = A12 - A11
    u21 = A22 - A21

    u11 = u11 / np.linalg.norm(u11)
    u12 = u12 / np.linalg.norm(u12)
    u22 = u22 / np.linalg.norm(u22)
    u21 = u21 / np.linalg.norm(u21)

    Rot_mat = np.array([[0, -1], [1, 0]])
    v11 = Rot_mat @ u11
    v21 = Rot_mat @ u21

    A = np.array([u12, u22])
    B = np.array([[l * np.dot(u12, v11), 0], [0, l * np.dot(u22, v21)]])
    return A, B

def dkm(q11, q12, q21, q22, q11D, q21D):
    A, B = compute_A_B(q11, q12, q21, q22)
    zita_dot = np.dot(np.linalg.inv(A) @ B, np.array([q11D, q21D]))
    xD = zita_dot[0]
    yD = zita_dot[1]
    return xD, yD

def ikm(q11, q12, q21, q22, xD, yD):
    A, B = compute_A_B(q11, q12, q21, q22)
    q_dot = np.dot(np.linalg.inv(B) @ A, np.array([xD, yD]))
    q11D = q_dot[0]
    q21D = q_dot[1]
    return q11D, q21D

def compute_An_Bn(q11, q12, q21, q22):
    x = -d / 2 + l * np.cos(q11) + l * np.cos(q11 + q12)
    y = l * np.sin(q11) + l * np.sin(q11 + q12)
    A13 = np.array([x, y])
    A11 = np.array([-d / 2, 0])
    A21 = np.array([d / 2, 0])
    A12 = np.array([-d / 2 + l * np.cos(q11), l * np.sin(q11)])
    A22 = np.array([d / 2 + l * np.cos(q21), l * np.sin(q21)])

    u12 = A13 - A12
    u22 = A13 - A22
    u11 = A12 - A11
    u21 = A22 - A21

    u11 = u11 / np.linalg.norm(u11)
    u12 = u12 / np.linalg.norm(u12)
    u22 = u22 / np.linalg.norm(u22)
    u21 = u21 / np.linalg.norm(u21)

    Rot_mat = np.array([[0, -1], [1, 0]])
    v11 = Rot_mat @ u11
    v21 = Rot_mat @ u21
    v12 = Rot_mat @ u12
    v22 = Rot_mat @ u22

    An = np.array([v12, v22])
    Bn = np.array([[l * np.dot(v12, v11) + l, 0], [0, l * np.dot(v22, v21) + l]])
    return An, Bn

def dkm_passive(q11, q12, q21, q22, q11D, q21D, xD, yD):
    An, Bn = compute_An_Bn(q11, q12, q21, q22)
    qp_dot = (An @ np.array([xD, yD]) - Bn @ np.array([q11D, q21D])) / l
    q12D = qp_dot[0]
    q22D = qp_dot[1]
    return q12D, q22D

def compute_A_B_d(q11, q12, q21, q22, q11D, q12D, q21D, q22D):
    x = -d / 2 + l * np.cos(q11) + l * np.cos(q11 + q12)
    y = l * np.sin(q11) + l * np.sin(q11 + q12)
    A13 = np.array([x, y])
    A11 = np.array([-d / 2, 0])
    A21 = np.array([d / 2, 0])
    A12 = np.array([-d / 2 + l * np.cos(q11), l * np.sin(q11)])
    A22 = np.array([d / 2 + l * np.cos(q21), l * np.sin(q21)])

    u12 = A13 - A12
    u22 = A13 - A22
    u11 = A12 - A11
    u21 = A22 - A21

    u11 = u11 / np.linalg.norm(u11)
    u12 = u12 / np.linalg.norm(u12)
    u22 = u22 / np.linalg.norm(u22)
    u21 = u21 / np.linalg.norm(u21)

    Rot_mat = np.array([[0, -1], [1, 0]])
    v11 = Rot_mat @ u11
    v21 = Rot_mat @ u21
    v12 = Rot_mat @ u12
    v22 = Rot_mat @ u22

    An = np.array([u12, u22])
    Bn = np.array([[l * np.dot(u12, v11), 0], [0, l * np.dot(u22, v21)]])
    dn = np.array([-l * q11D**2 * np.dot(u12, u11) - l * (q11D + q12D)**2, 
                  -l * q21D**2 * np.dot(u22, u21) - l * (q21D + q22D)**2])
    return An, Bn, dn

def dkm2(q11, q12, q21, q22, q11D, q12D, q21D, q22D, q11DD, q21DD):
    An, Bn, dn = compute_A_B_d(q11, q12, q21, q22, q11D, q12D, q21D, q22D)
    zitaDD = np.linalg.inv(An) @ (Bn @ np.array([q11DD, q21DD]) + dn)
    xDD = zitaDD[0]
    yDD = zitaDD[1]
    return xDD, yDD

def ikm2(q11, q12, q21, q22, q11D, q12D, q21D, q22D, xDD, yDD):
    A, B, dn = compute_A_B_d(q11, q12, q21, q22, q11D, q12D, q21D, q22D)
    qDD = np.linalg.inv(B) @ (A @ np.array([xDD, yDD]) - dn)
    q11DD = qDD[0]
    q21DD = qDD[1]
    return q11DD, q21DD

def compute_An_Bn_Cn(q11, q12, q21, q22, q11D, q12D, q21D, q22D):
    x = -d / 2 + l * np.cos(q11) + l * np.cos(q11 + q12)
    y = l * np.sin(q11) + l * np.sin(q11 + q12)
    A13 = np.array([x, y])
    A11 = np.array([-d / 2, 0])
    A21 = np.array([d / 2, 0])
    A12 = np.array([-d / 2 + l * np.cos(q11), l * np.sin(q11)])
    A22 = np.array([d / 2 + l * np.cos(q21), l * np.sin(q21)])

    u12 = A13 - A12
    u22 = A13 - A22
    u11 = A12 - A11
    u21 = A22 - A21

    u11 = u11 / np.linalg.norm(u11)
    u12 = u12 / np.linalg.norm(u12)
    u22 = u22 / np.linalg.norm(u22)
    u21 = u21 / np.linalg.norm(u21)

    Rot_mat = np.array([[0, -1], [1, 0]])
    v11 = Rot_mat @ u11
    v21 = Rot_mat @ u21
    v12 = Rot_mat @ u12
    v22 = Rot_mat @ u22

    An = np.array([v12, v22])
    Bn = np.array([[l * np.dot(v12, v11) + l, 0], [0, l * np.dot(v22, v21) + l]])
    Cn = np.array([-l * q11D**2 * np.dot(v12, u11), -l * q21D**2 * np.dot(v22, u21)])
    return An, Bn, Cn

def dkm2_passive(q11, q12, q21, q22, q11D, q12D, q21D, q22D, q11DD, q21DD, xDD, yDD):
    An, Bn, Cn = compute_An_Bn_Cn(q11, q12, q21, q22, q11D, q12D, q21D, q22D)
    qpDD = (An @ np.array([xDD, yDD]) - Bn @ np.array([q11DD, q21DD]) - Cn) / l
    q12DD = qpDD[0]
    q22DD = qpDD[1]
    return q12DD, q22DD

def dynamic_model(q11, q12, q21, q22, q11D, q12D, q21D, q22D):
    A, B = compute_A_B(q11, q12, q21, q22)
    M = (np.linalg.inv(A) @ B).T @ (mR * (np.linalg.inv(A) @ B)) + np.array([[ZZ1R, 0], [0, ZZ2R]])
    _, _, d = compute_A_B_d(q11, q12, q21, q22, q11D, q12D, q21D, q22D)
    c = ((np.linalg.inv(A) @ B).T @ (mR * (np.linalg.inv(A) @ B))) @ d
    return M, c
