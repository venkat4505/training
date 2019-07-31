#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int str_len(char *);
int isvalid(char *);
void rem_enter(char *);

//function declarations
void enqueue(int element);
int dequeue();
void display();

//declaring global variables
int array[20];
int rear;
int front;
int max;
int count;
