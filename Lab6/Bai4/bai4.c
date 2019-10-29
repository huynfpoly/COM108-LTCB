#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	printf("++-------------------------------------------------------++\n");
	printf("|         BINH PHUONG CAC PHAN TU TRONG MANG 2 CHIEU       |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int n,m;
	printf("Moi ban nhap vao so hang cua mang: ");
	scanf("%d",&n);
	printf("Moi ban nhap vao so cot cua mang: ");
	scanf("%d",&m);
	int mang[n][m],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Moi ban nhap gia tri cho phan tu mang[%d][%d]: ",i,j);
			scanf("%d",&mang[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Gia tri sau khi binh phuong cua phan tu mang[%d][%d]: %d\n",i,j, mang[i][j]*mang[i][j]);
		}
		printf("\n");
	}
	return 0;
}
