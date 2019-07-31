#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int str_len(char *);
int isvalid(char *);
void rem_enter(char *);

// function declarations
void push(int element);
int pop();
void display();

//initializing global variables
int top;
int stack[MAX];
int size;
