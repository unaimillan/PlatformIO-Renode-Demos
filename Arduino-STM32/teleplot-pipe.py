#!/bin/python
import socket
import math
import time

teleplotAddr = ("127.0.0.1",47269)
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

def sendTelemetry(name, value):
    now = time.time() * 1000
    msg = name+":"+str(now)+":"+str(value)+"|g"
    sock.sendto(msg.encode(), teleplotAddr)


with open('/tmp/renode-usart2', 'r') as fin:
    for line in fin:
        # print('recieved:', repr(line))
        channel_name, value = line.strip().split(':')
        sendTelemetry(channel_name, value)

# i=0
# while i < 1000:
    
#     sendTelemetry("sin", math.sin(i))
#     sendTelemetry("cos", math.cos(i))

#     i+=0.1
#     time.sleep(0.01)
