#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main() {

	int x, bit, ans, check = -1;

	printf("\n\n\t\tBinary Converter");
	printf("\n\nPlease Enter Your Decimal No. : ");
	scanf_s("%d", &x);

	for (int i = 30; i >= 0; i--) {
		int j = 1;
		ans = pow(2, i);

		if (x >= ans) {
			x = x - ans;
			bit = 1;
			check = i;
		}
		else {
			bit = 0;
		}

		if (check != -1)
			printf(" %d", bit);
		
	}

	printf("\n");
	_getch();
}