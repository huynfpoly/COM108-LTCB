#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	printf("++-------------------------------------------------------++\n");
	printf("|                 SAP XEP MANG GIAM DAN                   |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int n;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int mang[n], i,j;
	printf("\n");
	for(i=0;i<n;i++){
		printf("Moi ban nhap gia tri cho mang[%d]: ",i);
		scanf("%d",&mang[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mang[i]>mang[j]){
				int temp = mang[i];
				mang[i] = mang[j];
				mang[j] = temp;
			}
		}
	}
	printf("\n\nMang sau khi sap xep giam dan\n");
	for(i=0;i<n;i++){
		printf("Vi tri mang[%d] la: %d\n",i,mang[i]);
	}
	return 0;
}
