import pandas as pd

# Load the dataset
df = pd.read_csv('ckextended.csv')

# Display the first few rows of the dataset
print(df.head())
import matplotlib.pyplot as plt
import numpy as np

# Function to reshape and plot the image
def plot_image(pixels, emotion):
    # Reshape the 1D array into a 2D image
    image = pixels.reshape(48, 48)  # Assuming the image size is 48x48
    plt.imshow(image, cmap='gray')
    plt.title(f'Emotion: {emotion}')
    plt.axis('off')
    plt.show()

# Convert the 'pixels' column from string to numpy array
df['pixels'] = df['pixels'].apply(lambda x: np.array(x.split(), dtype='float32'))

# Plot the first image in the dataset
plot_image(df['pixels'][0], df['emotion'][0])