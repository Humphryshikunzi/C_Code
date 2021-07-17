#include <stdio.h>
#include <math.h>

#define length 100
#define width 20

int  main()
{
	printf("My name is Humphry Shikunzi Morton\n");
	printf("Thanks again man for the genorosity you have shown me\n");

	int area = length*width;
	printf("The area is %d\n",area );
    
    const float radius = 21;
    const float PI = 3.142;
 
    float perimeter = PI*radius*radius;
    printf("The perimeter of the circle is %f\n",perimeter );
    conditional_comparison();
    storage();
    loops();

	return 0;
}
void conditional_comparison()
{
	int a = 40;
	char grade = 'B';
	int marks = 65;
	if(a>40)
	{
		printf("A is greater than 40\n");
	}
	else if(a<40)
	{
		printf("A is less than 40\n");
	}
	else
	{
		printf("A is equal to 40\n");
	}

	switch(grade)
	{
		case 'B':
		printf("The average grade for the student was %c\n", 'B' );
		switch(marks)
		{
			case 70:
			printf("The average marks for the student is less than 65\n");
			break;

			case 65:
			printf("The average marks of the student is greater than 65\n");
			break;

		}
		break;
		
		case 'A':
		printf("The average grade for this student was %c\n", 'A' );
		break;

		case 'C':
		printf("The average grade for the student was %c \n", 'C' );
	}


}

void storage()
{
	int a = 4;
	short b ;
	double c ;
	float digitfloat;
	int* ptr;

	printf("The size of a is %d\n ", sizeof(a));
	printf("The size of b is %d\n ", sizeof(b));
	printf("The size of c is %d\n\n ", sizeof(c));

	ptr = &a;
	printf("The value of a is %d\n", a );
	printf("The ptr of a is %d\n\n", *ptr );

	int d = (a==1) ? 12:36;
	int e = (a==4) ? 10:58;
	printf("The value of d is %d\n" ,d );
	printf("The value of e is %d\n",e );

}
void loops()
{
	int a = 10;
	while(a<20)
	{
		printf("The value of  A is %d\n",a );
		a++;
	}

	for (int i = 0; i <50; ++i)
	{
		printf("The value for i is %d\n",i );
	}
	
	do
	{
		printf("The values of a in do loop is %d\n", a);
		a++;
	}
	while(a<30);
}
