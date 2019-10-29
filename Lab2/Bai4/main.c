#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan, ly, hoa, trungBinh;
	printf("Chuong trinh tinh diem trung binh");
	printf("\nMoi ban nhap diem mon Toan: ");
	scanf("%f",&toan);
	
	printf("Moi ban nhap diem mon Ly: ");
	scanf("%f", &ly);
	
	printf("Moi ban nhap diem mon Hoa: ");
	scanf("%f", &hoa);
	
	trungBinh = ((toan * 3) + (ly * 2) + hoa) / 6;
	
	printf("\nDiem trung binh 3 mon = %f", trungBinh);
	return 0;
}
