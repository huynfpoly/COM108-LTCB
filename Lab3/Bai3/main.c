#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soDien;
	printf("Chuong trinh tinh tien dien");
	printf("\nNhap vao so dien tieu thu: ");
	scanf("%f",&soDien);
	if(soDien < 0){
		printf("So dien ban nhap khong hop le");
	}
	else if(soDien <= 50){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*1678);
	}
	else if(soDien <= 100){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*1734);
	}
	else if(soDien <= 200){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*2014);
	}
	else if(soDien <= 300){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*2534);
	}
	else if(soDien <= 400){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*2834);
	}
	else if(soDien > 400){
		printf("Tien dien thang nay cua ban la: %.2f", soDien*2927);
	}
	return 0;
}
