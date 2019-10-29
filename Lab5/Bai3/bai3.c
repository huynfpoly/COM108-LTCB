#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|                Chuong trinh hoan vi 2 so                |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int a, b;
	printf("Nhap vao 2 so can hoan vi: ");
	scanf("%d%d", &a,&b);
	swap(&a,&b);
	printf("\n2 so sau khi hoan vi: %d %d",a,b);
	
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
