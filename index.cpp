#include <stdio.h>
#include <conio.h>
int main() {
	for(int row=0; row<7; row++) {
		for(int col=0; col<9; col++) {
			if(col==0 || col==7) {
				printf(" *");
			} else if(row==6) {
				printf(" *");
			} else {
				printf("  ");
			}

		}
		printf("\n");
	}
	printf("\n");
	for(int row=0; row<=6; ++row) {
		for(int col=0; col<9; ++col)
			if(row==0) {
				printf(" *");
			} else if (row<=2 && col==0) {
				printf(" *");
			} else if (row==3) {
				printf(" *");
			} else if (row>=4 && col==8) {
				printf(" *");
			} else if (row==6) {
				printf(" *");
			} else {
				printf("  ");
			}
		printf("\n");
	}
	printf("\n");
	for(int row=3; row<9; ++row) {
		for(int col=0; col<9; ++col) {
			if(row+col==8 && row>=4) {
				printf(" *");
			} else if(row==col && row>=4) {
				printf(" *");
			} else if(row==6 && col>=3 && col<=5) {
				printf(" *");
			} else {
				printf("  ");
			}

		}
		printf("\n");
	}
	printf("\n");
	for (int row=0; row<7; ++row) {
		for (int col=0; col<9; ++col) {
			if(col==0) {
				printf(" *");
			} else if (row==col && row<=4 ) {
				printf(" *");
			} else if (row+col==8 && row<=4) {
				printf(" *");
			} else if(col==8) {
				printf(" *");
			}

			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	for(int row=3; row<9; ++row) {
		for(int col=0; col<9; ++col) {
			if(row+col==8 && row>=4) {
				printf(" *");
			} else if(row==col && row>=4) {
				printf(" *");
			} else if(row==6 && col>=3 && col<=5 ) {
				printf(" *");
			} else {
				printf("  ");
			}

		}
		printf("\n");
	}
	getch();
}

