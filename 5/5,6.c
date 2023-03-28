#include <stdio.h>
#include <stdlib.h>

int ACK(int n){
	if(n==0) 
	{
		return 1;
	}
	else if (n>0) 
		{
			return ACK(n-2);
		}
		else 
		{
			return 0;		
		}
}

int main(){

	int n;
	n=72345;
	ACK(n);
	printf("El valor final es: %d\n", ACK(n));

    system("pause");
	return 0;
}