#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	clrscr();
	printf("Enter the fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("celsius:%f",celsius);
	getch();
	return 0;
}