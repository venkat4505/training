#include<stdio.h>                                                               
#define size 2                                                                  
#define length(str) while (str[i]){ i++;}//(str[++i])                                                              
                                                                                
int main()                                                                      
{                                                                               
    char str[] = "edge";                                                        
    int i = 0;                                                                  
    int pos;                                                                    
    int j;                                                                      
    char ch[2];                                                                 
                                                                                
//  printf ("strlen = %d", "hello" -str - 1);                                   
    printf("enter the character:");                                             
    fgets(ch, size, stdin);                                                     
                                                                                
    printf("enter the position:");                                              
    scanf("%d",&pos);                                                           
                                                                                
    length(str);                                                                
    printf("the length of the string is %d\n",i);           
	
	for(j = i + 1; j > pos; j--){
		str[j] = str[j - 1];
	}
	str[pos] = ch[0];
	printf("the new string is %s\n", str);
}
