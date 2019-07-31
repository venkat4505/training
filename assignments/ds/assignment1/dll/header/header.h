//double linked list header file

#include<stdio.h>                                                               
#include<stdlib.h>                                                              
                                                                                
#define MAX 100                                                                 
                                                                                
//global declarations                                                           
                                                                                
struct node{                                                                    
        int data;                                                               
        struct node *next;//to point next node address in a node
		struct node *prev;//to point previous node address in a node                                                      
    };                                                                          
    typedef struct node * dll;                                                  
                                                                                
    dll head;

//function declarations

dll insert_node(dll head);

dll insert_begin(dll head);       
dll insert_end(dll head);
dll insert_mid(dll head);   
dll insert_gpos(dll head);

dll delete_node(dll head);

dll delete_begin(dll head);
dll delete_end(dll head);
dll delete_mid(dll head);                                
