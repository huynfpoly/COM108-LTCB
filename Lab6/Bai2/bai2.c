#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	printf("++-------------------------------------------------------++\n");
	printf("|                     TIM MAX VA MIN                      |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int n;
	printf("Moi ban nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int mang[n], i;
	for(i=0;i<n;i++){
		printf("Moi ban nhap gia tri cho mang thu %d: ",i+1);
		scanf("%d",&mang[i]);
	}
	int min=mang[0],max=mang[0];
	
	for(i=0;i<n;i++){
		if(mang[i]>max){
			max = mang[i];
		}
		if(mang[i]<min){
			min = mang[i];
		}
	}
	
	printf("\nGia tri lon nhat trong mang la: %d\n",max);
	printf("Gia tri nho nhat trong mang la: %d",min);
	return 0;
}
