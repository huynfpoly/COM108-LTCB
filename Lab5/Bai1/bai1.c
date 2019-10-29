#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int timMax(int a, int b, int c){
	int max=a;
	
	if(max<b){
		max = b;
	}
	if(max<c){
		max = c;
	}
	
	return max;
}

int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh so sanh 3 so nguyen             |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int a,b,c,max;
	printf("Nhap vao 3 so can so sanh: ");
	scanf("%d%d%d",&a,&b,&c);
	max = timMax(a,b,c);
	printf("So lon nhat la: %d", max);
	
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	do{
		printf("Ban chon (0,1): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			goto start;
			break;
		}
	}
	return 0;
}
