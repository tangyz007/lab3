#include <stdio.h>
#include <stdlib.h>

void showChoices();
long factorial(short n);
float maximum(float a,float b);
float division(int p, int q);
int main()
{
	unsigned short x;
    unsigned int s; float b,c;int e,r;
	int choice;
	while(1)
	{
		showChoices();
		scanf("%d",&choice);
		switch (choice)
		{
				case 1: //to calculate the factorial of the number
			    printf("Please input a number!");
			    scanf("%hu",&x);
					//factorial(x);
					printf("%ld\n",factorial(x)); //print out the result of factorial function.
					break;
				case 2: //decide whether the input number is a leap year or not
					printf("please input the year!");
					scanf("%u",&s);
					if (s%400 == 0)
	printf("%d is a leap year. \n",s);
	else if ( s%100 == 0)
	printf("%d is not a leap year. \n",s);
	else if ( s%4 == 0)
	printf("%d is a leap year. \n",s);
	else
	printf("%d is not a leap year. \n",s);

					break;
	case 3: //get the max number between two numbers
	scanf("%f %f",&b,&c);
	printf(" the max number is %f", maximum(b,c));
	break;
	case 4:// make division between two numbers
		scanf("%d %d",&e, &r);
		printf("%f",division(e,r));

		break;
		case 5:
		return 0;
		}
	}
}

	void showChoices() //show the options
	{
		printf("\n1.Factorial of a number");
		
		printf("\n2.Leap year or not");
		
		printf("\n3.Maximum");
		
		printf("\n4.Division of two numbers");
		
		printf("\n5.Exit");
		
		printf("\nEnter your choice");
		fflush(stdout);

	}

	long factorial(short n) // factorial funciton
	{
	  int c;
	  long result = 1;

	  for (c = 1; c <= n; c++)
	    result = result * c;

	  return result;
	}
float maximum(float a,float b)
{
float max;
max = a>b? a : b;
return max;
}
float division(int p, int q)
{
	float result;
	result=p/q;
	return result;
	}
