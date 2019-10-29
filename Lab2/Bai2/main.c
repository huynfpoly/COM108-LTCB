#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float cDai, cRong, cv, dt;
	printf("Chuong trinh tinh chu vi, dien tich hinh chu nhat");
	printf("\nMoi ban nhap vao chieu dai hinh chu nhat: ");
	scanf("%f",&cDai);
	printf("Moi ban nhap vao chieu rong hinh chu nhat: ");
	scanf("%f",&cRong);
	
	cv = (cDai + cRong)*2;
	dt = cDai * cRong;
	
	printf("Chu vi hinh chu nhat la: %f",cv);
	printf("\nDien tich hinh chu nhat la: %f", dt);
	return 0;
}
		
