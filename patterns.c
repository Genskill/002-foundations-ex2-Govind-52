#include <stdio.h> 
#include <cs50.h>
int main() 
{int choice = get_int("Enter Choice[1/2] \n"); 
	
	switch(choice) 
{
	case 1:  
	
	int n= get_int("Enter the numner of rows\n"); 

	
	for(int i=1;i<=n;i++) 
	{
		for(int j=0;j<=n-i;j++) 
		{
			printf("#");
		} 
	       if(i!=n)
          printf("\n");
		  else 
		  break;	
	}
	break; 
	
	case 2: 
	  
	int x= get_int("Enter the number of rows\n"); 
	 
	
	for(int i=1;i<=x;i++) 
	{
		for(int j=0;j<=x;j++) 
		{   if(j<=x-i) 
		printf(" "); 
		else 
		printf("#"); 
			
		} 
	       if(i!=x)
          printf("\n");
		  else 
		  break;		
    } 
	break; 
    default : printf("Invalid Entry"); 	

} 
return 0;
}
