#include<stdio.h>
#pragma pack(1)

struct frame1{
    int vpi : 8;
	int hec : 8;   
	short int vci;
	int gfc : 4;      
	int pti : 1;
	int clp : 1;
};

struct frame2{
	short int source_port;
	short int destination_port; 
	int sequence_number;
	int acknowledgement;
	char header_length : 4;
	char reserved : 6;
	char codebits : 6;
	short int window;
	short int urgent;
	short int checksum;
};

struct frame3{
	int version : 4;
	int header_length : 4;
	char service_type;
	short int total_length;
	short int identifier;
	int flags : 4;
	int fragment : 12;
	int ttl : 6;
	short int protocol_id : 10;
	short int header_checksum;
	int source_address;
	int destination_address;
	int options : 20;
	int padding :12;
};
int main()
{
	printf("the size of frame1 is %d bytes\n", sizeof (struct frame1));
	printf("the size of frame2 is %d bytes\n", sizeof (struct frame2));
	printf("the size of frame3 is %d bytes\n", sizeof (struct frame3));
	return 0;
}
