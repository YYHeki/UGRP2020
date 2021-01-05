#libraries
import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
gpio_pin = 18
scale = [ 261, 294, 329, 349, 392, 440, 493, 523 ]
GPIO.setup(gpio_pin, GPIO.OUT)
list = [4, 4, 5, 5, 4, 4, 2, 4, 4, 2, 2, 1]
try:
	p = GPIO.PWM(gpio_pin, 600)
	p.start(50)
	for i in range(12):
		p.ChangeFrequency(scale[list[i]])
		if i == 6:
			time.sleep(1)
		else:
			time.sleep(0.5)
finally:
	p.stop()
	GPIO.cleanup()
