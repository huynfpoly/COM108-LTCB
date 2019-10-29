#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	printf("++-------------------------------------------------------++\n");
	printf("|        TINH TRUNG BINH TONG CA SO CHIA HET CHO 3        |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int n;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int mang[n], i;
	for(i=0;i<n;i++){
		printf("Moi ban nhap gia tri cho mang thu %d: ",i+1);
		scanf("%d",&mang[i]);
	}
	float tong = 0,tb;
	int count=0;
	
	for(i=0;i<n;i++){
		if(mang[i]%3==0){
			tong += mang[i];
			count++;
		}
	}
	if(count!=0){
		tb = tong / count;
		printf("\nTrung binh tong cac so chia het cho 3 trong mang la: %.2f",tb);
	}else{
		printf("\nKhong co so nao chia het cho 3.",tb);
	}
	return 0;
}
