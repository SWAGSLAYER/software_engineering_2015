#include<stdio.h>


int main ()
{
	int x;
	int y;
	int sum = 0;
	int i;

	printf("x:\n");
	scanf("%d", &x);
	printf("y:\n");
	scanf("%d", &y);
	if(x >= y)
	{
		printf("Enter a new X\n");
		scanf("%d", &x);
	}
		
	for(i = x; i <= y; i++)
		{
			if(i % 2 != 0)
				{
					sum = sum + i;
					
				}
					
		}

	printf("result is %d\n", sum);	
		
		

	return 0;
}
