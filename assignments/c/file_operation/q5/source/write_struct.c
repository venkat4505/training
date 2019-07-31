#include"header.h"

char buf[256];

struct EH {
	unsigned char e_ident[16];
	short e_type;
	short e_machine;
	int e_version;
	unsigned int e_entry;
}e[5];


void accept_struct()
{
	int i;
	FILE * fp;
	if(NULL == (fp = fopen("info.db", "wb+"))) {//open file
		perror("fopen failed\n");
		exit(1);
	}

	for(i = 0; i < 5; i++) {//read structure elements
		printf("Enter type : ");
		scanf("%hd", &e[i].e_type);
		printf("Enter e_ident : ");
		scanf("%s", e[i].e_ident);
		printf("Enter e_machine : ");
		scanf("%hd", &e[i].e_machine);
		printf("Enter version : ");
		scanf("%d", &e[i].e_version);
		printf("Enter entry : ");
		scanf("%u", &e[i].e_entry);
	}

	if(0 == (fwrite(e, sizeof(struct EH), 5, fp))) {//write to file
		perror("fwrite failed\n");
		exit(1);
		}

}    

void read_struct()                                                          
{                                                                               
	    FILE*fp;                                                                   
	int i;                                                                      
	if(NULL == (fp = fopen("info.db", "rb"))) {//open file
		perror("fopen failed\n");
		exit(1);
	}

	if(0 == (fread(e, sizeof(struct EH), 5, fp))) {
		perror("fread failed\n");
		exit(1);
		}

	for(i = 0; i < 5; i++) {//display the contents                       
		printf("e_ident : %s\n", e[i].e_ident);
		printf("e_type : %d\n", e[i].e_type);
		printf("e_machine : %d\n", e[i].e_machine);
		printf("e_version : %d\n", e[i].e_version);
		printf("e_Entry : %d\n", e[i].e_entry);
	}                                                                           
	return;                                                                     
}                                                                              
