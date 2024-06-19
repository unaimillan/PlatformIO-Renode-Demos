#!/bin/python3
import socket
import math
import time
from pathlib import Path

teleplotAddr = ("127.0.0.1",47269)
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def sendTelemetry(name, value):
    now = time.time() * 1000
    msg = name+":"+str(now)+":"+str(value)+"|g"
    sock.sendto(msg.encode(), teleplotAddr)

retry_count = 0
while retry_count < 3:
    try:
        with open('/tmp/renode-usart2', 'r') as fin:
            for line in fin:
                # print('recieved:', repr(line))
                channel_name, value = line.strip().split(':')
                sendTelemetry(channel_name, value)
        break
    except FileNotFoundError:
        retry_count += 1
        print('File not found, retrying...')
        time.sleep(5)

# i=0
# while i < 1000:
    
#     sendTelemetry("sin", math.sin(i))
#     sendTelemetry("cos", math.cos(i))

#     i+=0.1
#     time.sleep(0.01)
