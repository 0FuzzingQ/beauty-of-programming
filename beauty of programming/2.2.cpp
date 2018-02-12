#include <iostream>  
#include <stdlib.h>

using namespace std; 

int main(int argc, char const *argv[])
{
	unsigned int count;

	scanf("%d",&count);
	printf("%d\n",count );
	int num2 = 0;
	int num5 = 0;
	int num0 = 0;
	for (int i = 1; i <= count; i++)
	{
		
		if (i%10 == 2)
		{
			num2++;
		}
		if (i%10 == 5)
		{
			num5++;
		}
		if (i%10 == 0)
		{
			num0++;
		}
	}
	printf("%d",num0+(num2<num5?num2:num5));
	int num = 1;
	while(1){
		if(count%2 == 0){
			count /= count;
			num++;
		}
		if (count%2 == 1)
		{
			printf("%d",num);
			break;
		}
	}
	return 0;
}