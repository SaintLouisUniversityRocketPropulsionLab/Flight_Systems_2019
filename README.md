# Avonics_2019
Based on code used in 2018. Eliminates telemetry and records video on Pi.

LSM9DS1_I2C_print is used for testing the sensor on the breadboard. Will print all gyro, accel, and mag readings to terminal
LSM9DS1_I2C_record writes these values to a .csv file labeled with the datetime.
Install the library using the instructions here: https://github.com/akimach/LSM9DS1_RaspberryPi_Library

Adafruit_BME280_Example.py used for benchtop testing. This code still needs to be integrated into logger.
Library can be installed here from Adafruit: https://github.com/adafruit/Adafruit_Python_BME280
