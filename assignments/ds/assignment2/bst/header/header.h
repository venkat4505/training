//header files for binary search tree

#include<stdio.h>                                                               
#include<stdlib.h>    

#define MAX 100                                                                
                                                                                
struct node {                                                                   
                                                                                
    int data;                                                                   
    struct node * lchild;                                                       
    struct node * rchild;                                                       
    };                                                                          

typedef struct node * tree;  

tree root;                                                   
                                                                                
tree insert_node(tree root);                                                
                                                                                
void pre_order(tree root);
void post_order(tree root);    
void in_order(tree root);
    
tree delete_sichild(tree root);                           
