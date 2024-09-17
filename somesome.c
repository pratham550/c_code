#include<stdio.h>

void print_binary(int num)
{
	unsigned char *ptr = (unsigned char *)&num;
	unsigned mask;
	printf("%d : ", num);
	for(int i = 3 ; i >= 0 ; i--)
	{
		mask = 0x80;
		while(mask)
		{
			if(*(ptr + i) & mask)
				printf("1");
			else
				printf("0");
			
			mask = mask >> 1;
		}
		printf(" ");
	}
	printf("\n");
}

int main(void)
{
	int num;

	printf("Enter num : ");
	scanf("%d", &num);

	print_binary(num);


	return 0;
}
