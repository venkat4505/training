/*
 *UDP server
 *  -> socket() - creates a socket/session
 *  -> bind() - bind/assigning a name to a socket
 *  -> recvfrom()
 *  -> sendto()
 *  -> close()
 */

#include<stdio.h>
#include <sys/types.h>      
#include <sys/socket.h>
#include <netinet/in.h>   
#include <stdlib.h>

int main()
{
	int sockd;

	int status;
	socklen_t len = sizeof(struct sockaddr_in);  //length of socket 
//	sizeof(struct sockaddr_in);
	char *buf = NULL;

	if (NULL == (buf = (char *) malloc (sizeof(char) *100))) {
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}

	struct sockaddr_in *server_addr;
	struct sockaddr_in *client_addr;

	server_addr -> sin_family = PF_INET;                                        
    server_addr -> sin_port = 21;                                               
    server_addr -> sin_addr.s_addr = inet_addr("172.16.5.228"); 

	if (-1 == (sockd = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP))) {
		perror("socket not created\n"); 
		exit(EXIT_FAILURE);
	}

	if (-1 == (status = (bind(sockd,(struct sockaddr*) server_addr,len)))) {
		perror("cannot bind\n") ;
		exit(EXIT_FAILURE);
	}
	
	while(1) {

		if (-1 == (status = (recvfrom(sockd, buf, 100,0, (struct sockaddr*)client_addr,&len)))) {
			perror("receiving failed");
			exit(EXIT_FAILURE);
		}	
	
		printf("server received : %s\n",buf);

		printf("enter the string:");
	
		if (NULL == (fgets(buf,100, stdin) )) {
			perror("fgets failed");
			exit(EXIT_FAILURE);
		}
	
		if (-1 == (status = (sendto(sockd, buf, 100,0, (struct sockaddr *)client_addr,len)))) {
			perror("sending failed");
			exit(EXIT_FAILURE);
		}	
	}

	return 0;
}
