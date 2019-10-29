#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|     DEM NGUYEN AM, PHU AM, KHOANG TRANG TRONG CHUOI     |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	char s[100];
	printf("Xin moi nhap vao chuoi: ");
	gets(s);
	int i=0,m=0,n=0,p=0;
	while(s[i++] != '\0'){
		if(s[i]=='a'||s[i]=='i'||s[i]=='e'||s[i]=='u'||s[i]=='o'||s[i]=='A'||s[i]=='I'||s[i]=='E'||s[i]=='U'||s[i]=='O')
			n++;
		else if(s[i]==' ')
			m++;
		else{
			p++;
		}
	}
	printf("\nChuoi '%s' co chua: %d nguyen am, %d phu am va %d khoang trang.\n", s, n, p,m);
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
	}else{
		exit(0);
	}
	return 0;
}
