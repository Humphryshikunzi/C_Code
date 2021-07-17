 #include <stdio.h>

int max(int, int);
void swap(int, int);
void swap_ref(int *x, int *y);
int summation;


 int main(int argc, char const *argv[])
{
	 printf("Morning ?\n");

	 int value1 = 95;
	 int value2 = 87;
	 int *ptr_1 = &value1;
	 summation = value1 + value2;

	 printf("The pointer to value1 is %d\n", *ptr_1 );
	 printf("The summation of value2 and value1 is %d\n", summation );

	 int maxivalue = max(value1,value2);
	 printf("The maximum among the given values is %d\n", maxivalue );

     /*printf("Swapping by value\n");
	 printf("The value of X before swap is %d\n", value1 );
	 printf("The value of Y before swap is %d\n", value2 );

	 swap(value1, value2);

	 printf("The value of X after swap is %d\n", value1 );
	 printf("The value of Y after swap is %d\n", value2 );*/

	 printf("Swapping by reference\n");
	 printf("The value of X before swap is %d\n", value1 );
	 printf("The value of Y before swap is %d\n", value2 );

	 swap_ref(&value1, &value2);

	 printf("The value of X after swap is %d\n", value1 );
	 printf("The value of Y after swap is %d\n", value2 );
	return 0;
}

int max(int number1, int number2)
{
	int result;
	 if (number1 > number2)
	 {
	 	printf("Number1 is greater than number2\n");
	 	result = number1;
	 }
	 else
	 {
	 	printf("Number1 is less than number2\n");
	 	result = number2;
	 }
	 return result;
}

void swap(int x, int y)
{
    int help_swap;
    help_swap = x;
    x = y;
    y = help_swap;

return;
}

void swap_ref(int *x, int *y)
{
    int help_swap;
    help_swap = *x;
    *x = *y;
    *y = help_swap;

return;
}
