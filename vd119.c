#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct strucintcal
	{
	char name[20];
	int numb;
	float amt;
	}xyz; 
	void intcal(struct strucintcal);
	printf(“\nEnter Customer name: “);
	gets(xyz.name);
	printf(“\nEnter Customer number: “);
	scanf(“%d”,&xyz.numb);
	printf(“\nEnter Principal amount: “);
	scanf(“%f”, &xyz.amt);
	intcal(xyz); 
	return 0;
}
