from cmath import cos, sin
import numpy as np 
import matplotlib.pyplot as plt
from scipy.io.wavfile import read, write

for x in range(20,24000,100):
    fs = x
    samplerate = 44100
    t = np.linspace(0., 1., samplerate)
    amplitude = np.iinfo(np.int16).max
    sineData = amplitude * np.sin(2. * np.pi * fs * t)
    cosineData = amplitude * np.cos(2. * np.pi * fs * t)
    squareData = 0
    triangularData = 0
    sawteethData = 0
    complexExponentialSample = 0
    armonicSample = 0
    polynomialSample = 0;
    radicalSample= 0
    rationalSample = 0
    ellipticSample = 0
    parabolicSample = 0
    hiperbolicSample = 0
    conarmonicSample = 0
    armonicData = 0
    phase = 0
    for f in range(20,24000,100):
        armonicData += amplitude * (np.sin(2. * np.pi * f * t + phase) + np.cos(2. * np.pi * f * t + phase))
    write("./Sounds/SineSample_2/example"+str(fs)+".wav", samplerate, sineData.astype(np.int16))