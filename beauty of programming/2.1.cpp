#include <iostream>  
#include <stdlib.h>
#include <string> 
using namespace std; 

int  main(int argc, char const *argv[])
{
	int sum = 0;
	unsigned int a =44;
	while(a >= 1){
		//printf("%d\n", a);
		if (a%2 == 0){
			
			a = a/2;
		}
		else{
			sum++;
			a = (a-1)/2;
		}
	}
	printf("%d\n",sum);
	return 0;
}