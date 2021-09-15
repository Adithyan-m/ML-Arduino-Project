import serial
import time

sircom = serial.Serial('COM5',9600)
sircom.timeout = 1

while True:
    inp = input("enter input(on/off): ").strip()
    inp = inp.lower()
    if inp == "done":
        print("end of program")
        break
    sircom.write(inp.encode())
    time.sleep(.5)
    print(sircom.readline().decode('ascii'))

sircom.close()