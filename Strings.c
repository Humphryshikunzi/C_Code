#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	printf("Hello\n");
	char letter = 'H';
	char my_name[7] = {'h','u','m','p','h','r','y'};
	char greet[] = "Hello ";
	char greet2[] = "Hi";

	printf("%c\n", letter );
	printf("My name is %s\n", my_name);
	printf("Greetings : %s\n",greet );
	printf("Length of my second name is %d\n",strlen("Shikunzi") );
	 
	printf("I was greeted %s\n", strcat(greet,my_name) );
	printf("Copy the word Hello to Hi, gets %s\n", strcpy(greet,greet2));
	return 0;
}