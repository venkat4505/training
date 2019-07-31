#include<stdio.h>
#include<stdlib.h>

#define MAX 100

//global declarations

struct node{                                                                
        int data;                                                               
        struct node *next;                                                      
    };
	typedef struct node * sll;
                                                                         
	sll head;

//function declarations                                                         
                                                                                
sll insert_node(sll head);

sll insert_begin(sll head);
sll insert_end(sll head);
sll insert_gpos(sll head);
sll insert_bpos(sll head);
sll insert_apos(sll head);
sll insert_bnum(sll head);
sll insert_anum(sll head);
sll insert_mid(sll head);
sll insert_pun(sll head);
sll insert_increasing(sll head);

sll delete_node(sll head);

sll delete_begin(sll head);
sll delete_end(sll head);
sll delete_gpos(sll head);
sll delete_bpos(sll head);
sll delete_apos(sll head);
sll delete_bnum(sll head);
sll delete_anum(sll head);
sll delete_mid(sll head);
sll delete_pun(sll head);

void display(sll head);                            
