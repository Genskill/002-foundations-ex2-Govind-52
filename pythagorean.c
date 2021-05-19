#include <stdio.h> 
#include <cs50.h>
int main() 
{
	float max,m,n; 
	printf("Enter 3 numbers\n"); 
	float a= get_float("side 1 %0.0f\n",a);  
	float b= get_float("side 2 %0.0f\n",b); 
	float c= get_float("side 3 %0.0f\n",c); 
	if(a>b&&a>c) 
	{max=a;
	m=b; 
	n=c;} 
	else if(b>c) 
	{max=b;
	m=a; 
	n=c;} 
	else  
	{max=c; 
	 m=a; 
	 n=b;}
	
	
	
	
	if(max*max== m*m+n*n)
     printf("Yes"); 
	 else 
	 printf("No"); 
	 	
}
