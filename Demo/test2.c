#include <stdio.h>


void main(){
	int n,i,j;
	printf("So phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("\nGia tri phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("=====================================");
	for(i=0;i<n;i++){
		printf("\nGia tri phan tu a[%d]: %d",i,a[i]);
	}
	int max;
	max = a[0];
	for(i=2;i<n;i++){
		if(max<a[i]) max = a[i-1];
	}
	printf("=====================================\nGia tri lon nhat la: %d",max);
}
