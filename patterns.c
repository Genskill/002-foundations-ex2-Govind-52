#include <stdio.h> 
#include <cs50.h>
int main() 
{
  int choice = get_int("Enter type of pattern (1 or 2) \n"); 
  
  int n= get_int("Enter the number of rows \n");  
  
	switch(choice) 
{
	case 1:  
	   for(int i=1;i<=n;i++) 
	{
		for(int j=0;j<=n-i;j++) 
		{
			printf("#");
		} 
	          if(n!=i)    
		 printf("\n"); 
		   else 
	         continue;		   
	}
	break; 
	
	case 2: 
	  
		
	for(int i=1;i<=n;i++) 
	{
		for(int j=0;j<=n;j++) 
		{   if(j<=n-i) 
		printf(" "); 
		else 
		printf("#"); 
			
		} 
	         if(n!=i)           
		 printf("\n"); 
		else 
		continue;
        } 
	break; 
    default : printf("Invalid Entry"); 	

} 
return 0;
}
