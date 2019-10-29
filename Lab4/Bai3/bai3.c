#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Chuong trinh xac dinh so chinh phuong\n");
	printf("Nhap vao so can xac dinh: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i*i==n){
			printf("So %d la so chinh phuong",n);
			break;
		}
		if(i==n){
			printf("So %d khong phai la so chinh phuong",n);
			break;
		}
	}
	return 0;
}
