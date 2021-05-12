from socket import *
import requests
serverName = "localhost"
serverPort = 80
# Creates a socket and specifies that it is uses IPv4 and TCP.
serverSocket = socket(AF_INET,SOCK_STREAM) 
# Binds serverport
serverSocket.bind((serverName,serverPort)) 
# Listens for connections
serverSocket.listen(1) 
print("The server is ready to receive")
while 1:
    # Establishes connection between client and server
    connectionSocket, addr = serverSocket.accept() 
    print ("connection found!\n")
    # Recives message from client
    sentence = connectionSocket.recv(1024)
     # Decodes and prints message from client 
    print("From Client:", sentence.decode())
    # Closes socket
    connectionSocket.close()
