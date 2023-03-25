#include<stdio.h>
#include "Average.c"

int main(){
	int a[5] = {100,20,40,20,100};
	double averagee = average(&a[0], 5);
	printf("The Average is: %f",averagee);
	return 0;
}
