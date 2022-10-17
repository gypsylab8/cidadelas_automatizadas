import os
import RPi.GPIO as GPIO
import time

commPin = 18
GPIO.setmode(GPIO.BCM) 
GPIO.setup(commPin, GPIO.IN) 

if gpio.input(commPin):
    os.system("omxplayer --display=2 video1.mp4 &; omxplayer --display=7 video2.mp4")

time.sleep(2)
