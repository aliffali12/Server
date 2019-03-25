<<<<<<< HEAD
 
=======

>>>>>>> d55bc79c50e14322b8edac38424a0089e1b286e2
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
<<<<<<< HEAD
#include <unistd.h>
=======
#include <unistd.h> 

>>>>>>> d55bc79c50e14322b8edac38424a0089e1b286e2

#define PORT 9002

int main(int argc, char const *argv[]) 
{ 	
<<<<<<< HEAD

	setbuf(stdout,NULL);

	int server_new, new_sock, vread; 

	struct sockaddr_in address; 

	int opt = 1; 

	int addrlen = sizeof(address); 

	char buffer [1024] ; 

	char welcome [256];
 

	// Creating socket file descriptor 


	if ((server_new = socket(AF_INET, SOCK_STREAM, 0)) == 0) 

	{ 

		perror("socket failed"); 

		exit(EXIT_FAILURE); 

	} 

	// Forcefully attaching a socket to the port 9002 

	address.sin_family = AF_INET; 

	address.sin_addr.s_addr = INADDR_ANY; 

	address.sin_port = htons(PORT); 



        // Forcefully attaching socket to the port 9002 


    if (bind(server_new, (struct sockaddr *)&address,sizeof(address))<0) 

    { 

        perror("binding failed"); 

        exit(EXIT_FAILURE); 

=======
	setbuf(stdout,NULL);

	printf("trying to make a new socket");
	
	int server_new, new_sock, vread; 
	
	struct sockaddr_in address; 
	
	int opt = 1; 
	
	int addrlen = sizeof(address); 

	char buffer[1024] = {0}; 

	char *welcome = "Welcome and Hello"; 

	// Creating socket file descriptor 

	if ((server_new = socket(AF_INET, SOCK_STREAM, 0)) == 0) 

	{ 
		perror("socket failed"); 

		exit(EXIT_FAILURE); 
		
	} 

	// Forcefully attaching socket to the port 9002

	address.sin_family = AF_INET; 

	address.sin_addr.s_addr = INADDR_ANY;
	
	address.sin_port = htons(PORT);

   	 // Forcefully attaching socket to the port 9002

    if (bind(server_new, (struct sockaddr *)&address,sizeof(address))<0) 
    
    { 
	    
        perror("binding failed"); 

        exit(EXIT_FAILURE); 
	    
>>>>>>> d55bc79c50e14322b8edac38424a0089e1b286e2
    } 

    if (listen(server_new, 3) < 0) 

    { 
<<<<<<< HEAD

        perror("listening"); 

        exit(EXIT_FAILURE);

    } 

	memset(buffer ,0, sizeof(buffer));

    if ((new_sock = accept(server_new, (struct sockaddr *)&address, 
(socklen_t*)&addrlen))<0) 


    { 

=======
	    
        perror("listening"); 
	    
        exit(EXIT_FAILURE); 

    } 

    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, 
(socklen_t*)&addrlen))<0) 

    { 
	    
>>>>>>> d55bc79c50e14322b8edac38424a0089e1b286e2
        perror("accepted by Server"); 

        exit(EXIT_FAILURE); 

    } 

    vread = read( new_sock , buffer, 1024); 

<<<<<<< HEAD
    recv(new_sock, buffer, sizeof(buffer), 1);
    printf("Message From Client: %s", buffer);
    recv(new_sock, buffer, sizeof(buffer), 0);
    printf("%s",buffer);
    printf("\n");   

    scanf("%[^\n]%*c", welcome);

    send(new_sock , welcome , strlen(welcome) , 0 ); 
    return 0; 

=======
    printf("%s\n",buffer ); 

    send(new_sock , welcome , strlen(welcome) , 0 ); 

    return 0; 
	
>>>>>>> d55bc79c50e14322b8edac38424a0089e1b286e2
} 
