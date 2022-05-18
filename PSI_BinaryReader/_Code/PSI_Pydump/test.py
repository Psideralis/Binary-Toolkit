import numpy as np 
import matplotlib.pyplot as plt
from scipy.io.wavfile import read, write
from numpy.fft import fft, ifft

Fs, data = read('test.wav')
data_1 = data[:,0]
data_2 = data[:,1]
print('Sampling Frequency is',Fs,'Hz')
print('Total sample length',len(data))

plt.figure()
plt.plot(data_1)
plt.xlabel('Sample Index')
plt.ylabel('Amplitude')
plt.title('Waveform of Test Audio')
plt.show()

write('output.wav',Fs,data)

