#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soA, soB, tong, hieu;
	printf("Chuong trinh tinh tong, hieu hay so A va B");
	printf("\nMoi ban nhap so A: ");
	scanf("%f",&soA);
	
	printf("Moi ban nhap so B: ");
	scanf("%f", &soB);
	
	tong= soA+soB;
	hieu= soA-soB;
	
	printf("Tong hai so A va B la: %f",tong);
	printf("\nHieu hai so A va B la: %f",hieu);
	return 0;
}
