#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|               SAP XEP 5 CHUOI THEO CHU CAI              |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	char s[5][100];
	int i=0,j=0;
	for(i=0;i<5;i++){
	printf("Xin moi nhap vao chuoi %d: ",i+1);
		gets(s[i]);
	}
	for(i = 0; i < 5; i++){
		for (j = 1; j < 5; j++){
			if (strcmp(s[j - 1], s[j]) > 0) {
			char temp[100]={0};
			strcpy(temp, s[j-1]);
			strcpy(s[j-1], s[j]);
			strcpy(s[j], temp);
			}
		}
	}
	printf("\n!!!!!!!!Cac chuoi sau khi duoc sap xep!!!!!!!!\n\n\a");
	for(i=0;i<5;i++){
		printf("Chuoi %d: %s \n",i+1,s[i]);
	}
	
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0 hoac 1): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>1);
	if(chon==1){
		system("cls");
		goto start;
	}
		
	else
		exit(0);
		
	return 0;
}
