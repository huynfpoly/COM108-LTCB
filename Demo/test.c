#include <stdio.h>


void main(){
	int n,i;
	
	double tong;
	printf("Nhap n: ");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++){
		tong += i;
	}
	
	printf("KQ: %lf", 1/tong);
}
