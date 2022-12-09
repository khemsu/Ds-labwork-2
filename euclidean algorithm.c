
#include <stdio.h>  
int gcd(int a, int b) 
{ 
	if (a == 0) 
			return b; 
	else
		return gcd(b%a, a); 
} 


int main() 
{ 
	int a,b;
	
	printf("\nEnter the Value of a and b to find gcd():   ");
    scanf("%d  %d", &a,&b);
    
	printf("\n GCD(%d, %d) = %d", a, b, gcd(a, b)); 
	
	return 0; 
}