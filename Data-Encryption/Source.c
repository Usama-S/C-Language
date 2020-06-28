#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void main(void) {
	char name1[100] = "USAMAS";
	char name2[100] = "ALI";
	char result[100];
	int bitval;

	int bit1[6][8] = {
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
	};


	int bit2[6][8] = {
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
	};

	int resultbit[18][8] = {
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
		(0, 0, 0, 0, 0, 0, 0, 0),
	};

	//for name 1: 

	printf("Name 1 : %s \n\n", name1);

	for (int i = 0; i <= 5; i++) {
		int k = 0;
		int x = name1[i];
		for (int j = 7; j >= 0; j--) {
			bitval = pow(2, j);

			if (x >= bitval) {
				x = x - bitval;
				bit1[i][k] = 1;
			}

			k++;
		}
	}

	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 7; j++) {
			printf("%d", bit1[i][j]);
		}
		printf("\t");
	}

	printf("\n\n");

	//for name 2: 

	printf("Name 2 : %s \n\n", name2);

	for (int i = 0; i <= 2; i++) {
		int k = 0;
		int x = name2[i];
		for (int j = 7; j >= 0; j--) {
			bitval = pow(2, j);

			if (x >= bitval) {
				x = x - bitval;
				bit2[i][k] = 1;
			}

			k++;
		}
	}

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 7; j++) {
			printf("%d", bit2[i][j]);
		}
		printf("\t");
	}


	//for result

	printf("\n\nResult :\n\n");


	for (int i = 0; i <= 5; i++) {
		int l = 0, m = 0;
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 7; k++) {

				resultbit[l][k] = bit1[i][k] ^ bit2[j][k];
				//resultbit[i][j] = bit1[i][j] ^ bit2[i][j];
				printf("%d", resultbit[l][k]);
			}
			l++;

			printf("  ");
		}
	}

	//bits to character conversion

	for (int i = 0; i <= 17; i++) {
		int x = 0;
		int k = 0;
		for (int j = 7; j >= 0; j--) {
			bitval = pow(2, j);

			if (resultbit[i][k] == 1) {
				x = x + bitval;
			}
			k++;
		}

		result[i] = x;
	}

	printf("\n\n");

	for (int i = 0; i <= 17; i++) {
		printf("%c ", result[i]);
	}


	_getch();
}