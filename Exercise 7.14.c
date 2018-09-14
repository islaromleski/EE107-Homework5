#include <stdio.h>

int a[16] = {	34, -5, 6, 0, 12, 100, 56, 22,
				44, -3, -9, 12, 17, 22, 6, 11 };
int size = 16;
int i, j, temp;
char order;

int main(void)
{
	void sort(void);
	
	printf("Would you like the array sorted in ascending "
	"(input 'a') or descending (input 'd') order? ");
	scanf("%c", &order);
	
	if(order != 'a' && order != 'd')
	{
		printf("\nUnknown input. Please enter either 'a' or 'd'.\n");
		
		return 1;
	}
	
	printf("\nThe array before the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", a[i]);
	
	sort();
	
	printf("\n\nThe array after the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", a[i]);
	
	printf("\n");
	
	return 0;
}

void sort(void)
{	
	if(order == 'a')
	{
		for(i = 0; i < size-1; ++i)
			for (j = i+1; j < size; ++j)
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
	else if(order == 'd')
	{
		for(i = 0; i < size-1; ++i)
			for (j = i+1; j < size; ++j)
				if(a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
}