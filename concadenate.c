#include <stdio.h>  
int main()  
{  
    char name1[20]; 
    char name2[20]; 
    
    int i;  

    printf("Enter name1: ");  
    scanf("%[^\n]s",name1);  
    printf("\nEnter name2: ");  
    scanf(" %[^\n]s",name2);  


    for(i=0;name1[i]!='\0';i++);    
        
    for(int j=0;name2[j]!='\0';j++)  
    {     
        name1[i]=name2[j];  
        i++;  
    } 

    name1[i]='\0';  
    printf("new concatenated string will be: %s", name1);  
    
    return 0;  
}
//write a program to find the operands of a keyword in a file using input redirection in c.
