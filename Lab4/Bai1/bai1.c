#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int min, max;
	float tong=0, n=0, tb=0;
	printf("Chuong trinh tinh trung binh tong cac so chia het cho 2\n");
	printf("Nhap vao MIN va MAX: ");
	scanf("%d%d", &min ,&max);
	int i=min;
	while(i<=max){
		if(i%2==0){
			tong += i;
			n++;
		}
		i++;
	}
	tb = tong / n;
	printf("Trung binh tong cac so chia het cho 2 la: %.2lf", tb);
	return 0;
}
