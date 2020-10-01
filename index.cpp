#include <stdio.h>
#include <conio.h>
int main() {
	// Printing asterisks 'U' with nested loops and conditional statements.
	for(int row=0; row<7; row++) {
		for(int col=0; col<9; col++) {
			if(col==0 || col==7 || row==6) {
				printf(" *");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	// Printing asterisks 'S' with nested loops and conditional statements.
	for(int row=0; row<=6; ++row) {
		for(int col=0; col<9; ++col)
			if(row==0 || (row<=2 && col==0) || row==3 || (row>=4 && col==8) || row==6) {
				printf(" *");
			} else {
				printf("  ");
			}
		printf("\n");
	}
	printf("\n");
	// Printing asterisks 'A' with nested loops and conditional statements.
	for(int row=3; row<9; ++row) {
		for(int col=0; col<9; ++col) {
			if((row+col==8 && row>=4) || (row==col && row>=4) || (row==6 && col>=3 && col<=5)) {
				printf(" *");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	// Printing asterisks 'M' with nested loops and conditional statements.
	for (int row=0; row<7; ++row) {
		for (int col=0; col<9; ++col) {
			if(col==0 || (row==col && row<=4 ) || (row+col==8 && row<=4) || col==8) {
				printf(" *");
			} 
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	// Printing asterisks 'A' with nested loops and conditional statements.
	for(int row=3; row<9; ++row) {
		for(int col=0; col<9; ++col) {
			if((row+col==8 && row>=4)|| (row==col && row>=4)|| (row==6 && col>=3 && col<=5 )) {
				printf(" *");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	getch();
}

