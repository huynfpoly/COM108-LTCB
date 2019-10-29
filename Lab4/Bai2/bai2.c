#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i=0, result=0;
	printf("Chuong trinh xac dinh so nguyen to\n");
	printf("Nhap vao so can xac dinh: ");
	scanf("%d", &n);
	if(n<2){
		result++;
	}
	for(i=2; i<n;i++){
		if(n%i==0){
			result++;
		}
	}
	if(result==0){
		printf("So %d la so nguyen to", n);
	}else{
		printf("So %d khong phai la so nguyen to",n);
	}
	return 0;
}
