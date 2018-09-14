//Program to find the Least Common Multiple (LCM) of two numbers.

#include <stdio.h>
int main(void)
{
	//Declaring variables.
	int input1, input2, result;
	
	//Prototyping functions.
	int lcm(int u, int v);
	
	//Ask for & store the user's input.
	printf("This program finds the Least Common Multiple "
	"of two positive numbers.\nPlease input your numbers: ");
	scanf("%i%i", &input1, &input2);
	
	//Tests that the numbers are positive.
	if(input1 < 0 || input2 < 0)
	{
		printf("\nPlease input positive numbers. Negative "
		"inputs are not accepted.\n");
		return 1;
	}
	
	//Calls the lcm function.
	result = lcm(input1, input2);
	
	//Displays the result.
	printf("\nThe LCM of %i and %i is %i.\n", input1, input2, result);
	
	return 0;
}

int lcm(int u, int v)
{
	//Declaring Variables
	int lcm;
	
	//Prototyping functions.
	int gcd(int u, int v);
	
	//Calculating the LCM.
	lcm = u*v / gcd(u, v);
	
	return lcm;
}

int gcd(int u, int v)
{
	//Declaring variables.
	int temp;
	
	//Calculating the GCD.
	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}