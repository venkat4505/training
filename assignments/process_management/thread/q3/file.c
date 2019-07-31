#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *thread_fun(void *tp )
{
    FILE *fp = (FILE *) tp;

    if( !( fprintf(fp, "SOFTWARE LIMITED\n")))
    {
        printf("fprintf failed\n"); 
        exit(1); 
    } 
 
    return NULL; 
} 
 
int main() 
{ 
    int status; 
    FILE *fp; 
    pthread_t th_id; 
 
    fp = fopen("jus.txt", "w+"); 
     
    if(NULL == fp) 
    { 
        perror("fopen failed\n"); 
        exit(1); 
    } 
 
    if(!(fprintf(fp, "GLOBAL EGDE "))) 
    { 
        printf("fprintf failed\n"); 
        exit(1); 
    } 
 
    status  = pthread_create(&th_id, NULL, thread_fun , fp); 
    if (status != 0) 
    { 
        printf("Thread creation failed\n: %d", strerror(status)); 
        exit(1); 
    } 
 
	fclose(fp);
    getchar(); 
    return 0; 
}
