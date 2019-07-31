#include<stdio.h>
#include<stdlib.h>
#define SIZE 20	//macro for array size
#define MAX 32	//macro for integer size
#define ONE 1

void rem_enter(char *);

int str_len ( char *);

int isvalid( char *);

/*function prototypes for mergesort, merging */

void merge_sort(int arr[], int low, int high);

void merging(int arr[], int low, int mid, int high);

