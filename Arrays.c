#include <stdio.h>

double average(int array[5], int size);
int *random_numbers();

 int main(int argc, char const *argv[])
{
	int numbers[5] = {41,45,69,78,20} ;
	int numbers_2[] = {45,87};
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("Number is %d\n", numbers[i] );
	}
	printf("%d\n", numbers_2[1] );


	//Multidimentional arrays
	int values[5][2] = {{4,5},{8,9},{35,78},{87,9},{54,7}};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("The value at values[%d][%d] is %d\n",i,j, values[i][j] );
		}
	}


	printf("Multidimentional array\n");
    double average_numbers = average(numbers, 5);
    printf("The average of numbers is %f\n\n", average_numbers );


  }
// Arrays as parameters
double average(int array[5], int size){
  double avrg;
  double sum=0;

  for (int i = 0; i < 5; ++i)
  {
  	sum += array[i];
  }

  avrg = sum/size;
  return avrg;
}


