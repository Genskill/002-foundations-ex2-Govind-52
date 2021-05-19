#include <stdio.h> 

int main() 
{
	int choice; 
	
	
	printf("Enter Choice[1/2] \n"); 
	scanf("%d",&choice);
	switch(choice) 
{
	case 1:  
	int n;
	printf("Enter the numner of rows\n"); 
	scanf("%d",&n); 
	
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
	int x;  
	printf("Enter the numner of rows\n"); 
	scanf("%d",&x); 
	
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
