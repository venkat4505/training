//circular linked list header file

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

//global declarations

struct node {
		int data;
		struct node *next;//to point next node address in a list
	};

	typedef struct node * csll;

	csll head;

//function declarations

csll insert_node(csll head);

csll insert_begin(csll head);
csll insert_end(csll head);

csll delete_node(csll head);

csll delete_begin(csll head);
