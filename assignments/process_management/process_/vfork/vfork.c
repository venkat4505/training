//Creating a child process using fork() system call and experimenting

#include<stdio.h>
#include<stdlib.h>

int d = 5;

int main() 
{
	char ch;

	FILE *fp;
	fp = fopen("just.txt","w+");//file open

	int a = 0;//parent pid
	int b = 0;//vfork return value
  	
	int *p = NULL;
	p = (int *) malloc(sizeof(int) * 5);//dynamic memory allocation to comapre heap variables
	*p = 11;//value in heap
	
	
	a = getpid();
	b = vfork();

	if ( b > 0) {
		printf("\nparent process\n");
		
	//	*p = 99; 
	//	d = 10;
		int c = 20;
	
		printf("parent_pid -> %d\n",a);
		printf("child_pid -> %d\n",b);
		printf("l_var 20 -> %d\n",c);		
		printf("g_var 10 -> %d\n",d);
		printf("addres of g_var -> %p\n",&d);
		printf("p 99 -> %d\n", *p);
		printf("addres of p -> %p\n\n",p);

		fputs("global edge",fp);

		rewind(fp);

		while(EOF != (ch = fgetc(fp))) {

		printf("%c",ch);

		}

		fclose(fp);
		
		printf("\n");

	}
	
	else{
		printf("child process\n");
		
		*p = 88;
		d = 25;
		int c = 20;

        printf("parent_pid -> %d\n",a); 
		printf("child_pid -> %d\n",b);  
		printf("l_var 20 -> %d\n",c);     
		printf("g_var 25 -> %d\n",d);
		printf("addres of g_var -> %p\n",&d);
		printf("p 88 -> %d\n", *p);               
        printf("addres of p -> %p\n\n",p); 

		fputs(" software limited\n",fp);
  
       	rewind(fp);
  
       	while(EOF != (ch = fgetc(fp))) {
  
        	printf("%c",ch);
        }
		
		fclose(fp);
		printf("\n");
		//execl("fork.c","fork",NULL);
		//exit(0);
	} 

	return 0;
}
	
