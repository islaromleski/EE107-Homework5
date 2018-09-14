#include <stdio.h>

int main(void)
{
	char order;
	int i;
	int array[16] = {	34, -5, 6, 0, 12, 100, 56, 22,
						44, -3, -9, 12, 17, 22, 6, 11 };
	void sort(int a[], int n, char order);
	
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
		printf("%i ", array[i]);
	
	sort(array, 16, order);
	
	printf("\n\nThe array after the sort:\n");
	
	for(i = 0; i < 16; ++i)
		printf("%i ", array[i]);
	
	printf("\n");
	
	return 0;
}

void sort(int a[], int n, char order)
{
	int i, j, temp;
	
	if(order == 'a')
	{
		for(i = 0; i < n-1; ++i)
			for (j = i+1; j < n; ++j)
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
	else if(order == 'd')
	{
		for(i = 0; i < n-1; ++i)
			for (j = i+1; j < n; ++j)
				if(a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}
}