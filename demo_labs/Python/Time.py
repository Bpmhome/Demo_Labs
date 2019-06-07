#!/usr/bin/env python
# -*- coding: utf-8 -*-
import socket
import re

hex_int = []
new_output = []
host = '10.128.102.115'
port = 3000  
keys = ['5V&$10jr@y', 'As26yx*uTB', '5V8tY7&ox^']
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((host, port))
#s.sendall(b'msg')
data = s.recv(1024)
data = data.decode('utf-8')
s.close()

data = re.findall('..',data)
for i in data:
    hex_int.append(int(i, 16))

count = 0

for item in keys:
    output = ''
    for char in item:
        output += str(ord(char))
        output += re.findall('.',output)
        for i in hex_int:
            if count >= len(output):
                char = 0
            else:
                output += hex_int[count] ^ output[count]
            count += 1    
    print(output)






print('Revieced', repr(data))