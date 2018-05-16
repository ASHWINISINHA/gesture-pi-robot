import serial
import pyautogui
import autopy
ser = serial.Serial("COM4", 9600)
serin = ser.readline()
while 1:
    serialread = str (ser.readline())
    #read the serial data and print it as line
    print serialread
    
    if 'f' in serialread:
        pyautogui.press('up')

    if 'left' in serialread:
        pyautogui.press( 'left')  

    if 'right' in serialread:
         pyautogui.press('right') 

    if 's' in serialread:
      pyautogui.press('down')

        


