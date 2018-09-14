//Program to calculate the roots of a quadratic equation.

#include<stdio.h>

int main(void)
{
	//Declare the variables.
	float a, b, c;
	
	//Declares the functions.
	void quadraticCalculator(float a, float b, float c);
	
	//Takes the user's input and stores it in variables.
	printf("This program calculates the roots of a quadratic equation."
		" Please enter the numbers for a, b, and c, in that order.\n\n");
	scanf("%f%f%f", &a, &b, &c);
	
	//Calls the quadraticCalculator function.
	quadraticCalculator(a, b, c);
	
	return 0;
}

void quadraticCalculator(float a, float b, float c)
{
	//Declares and sets variables.
	float resultPos, resultNeg;
	float test;
	
	test = ((b * b) - (4 * a * c));

	//Declares functions.
	float squareRoot(float x);
	
	//Tests if the discriminant is less than 0, if not, it runs the calculations.
	if(test < 0)
	{
		printf("\nSorry, the roots of your quadratic equation are imaginary.\n\n");
	}
	else
	{
		resultPos = (-b + squareRoot(test)) / (2 * a);
		resultNeg = (-b - squareRoot(test)) / (2 * a);
		
		printf("\nYour two discriminants are %g and %g.\n\n", resultPos, resultNeg);
	}	
}

float squareRoot(float x)
{
	//Declares & sets variables.
	const float epsilon = 0.00001;
	float guess = 1.0;
	
	//Declares functions.
	float absoluteValue (float x);
	
	while(absoluteValue(guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	
	return(guess);
}

float absoluteValue (float x)
{
	if(x < 0)
		x = -x;
	
	return(x);
}