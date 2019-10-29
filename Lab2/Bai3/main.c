#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float banKinh, chuVi, dienTich;
	printf("Chuong trinh tinh chu vi, dien tich hinh tron");
	printf("\nMoi ban nhap vao ban kinh cua duong tron: ");
	scanf("%f",&banKinh);
	
	chuVi = banKinh * 2 * 3.14;
	dienTich = banKinh * banKinh * 3.14;
	
	printf("\nChu vi cua hinh tron = %f", chuVi);
	printf("\nDien tich cua hinh tron = %f", dienTich);
	return 0;
}
