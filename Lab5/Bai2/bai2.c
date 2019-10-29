#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int checkYear(int y){
	int result=0;
	if(y % 400 == 0){
		result = 1;
	}	
	if(y % 4 == 0 && y % 100 != 0){
		result = 1;
	}
	return result;
}
int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh kiem tra nam nhuan             |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int y;
	printf("Nhap vao nam can kiem tra: ");
	scanf("%d",&y);
	if(checkYear(y)){
		printf("Nam %d la nam nhuan.",y);
	}else{
		printf("Nam %d khong phai la nam nhuan.",y);
	}
	
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
