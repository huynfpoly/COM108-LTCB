#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mainMenu();
void demChuoi();
void sxChuoiTang();
void sxChuoiGiam();
void xKhoangTrang();
int main(int argc, char *argv[]) {
	dangxuat:
	fflush(stdin);
	int dem=0;
	start:
	printf("++-------------------------------------------------------++\n");
	printf("|                        DANG NHAP                        |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("!!!!!!!!!!         DANG NHAP DE MO MENU         !!!!!!!!\n");
	printf("-----      USERNAME: admin || PASSWORD: 12345     ------\n\n");
	char userSys[] = "admin";
	char passSys[] = "12345";
	char user[100];
	char pass[100];
	
	printf("Username: ");
	gets(user);
	
	printf("Password: ");
	gets(pass);
	if(dem>2){
		printf("\n==> Chuong trinh da thoat do ban dang nhap sai qua nhieu lan!\a");
		getch();
		exit(0);
	}
	if(strcmp(user , userSys)==0 && strcmp(pass , passSys)==0){
		
	system("cls");
		printf("\n=> Dang nhap thanh cong!\n\n");
		fflush(stdin);
		int result;
		result= mainMenu(0);
		if(result==1){
			system("cls");
			printf("\n=> Dang xuat tai khoan thanh cong!\n\n\a");
			goto dangxuat;
		}
	}else{
		system("cls");
		printf("\n=> USERNAME hoac PASSWORD khong dung!\n\n\a");
		dem++;
		goto start;
	}

	return 0;
}



int mainMenu(int result){
	result = 0;
	int menu=-1;
	printf("+++========================================================+++\n");
	printf("|           LAB 7 BAI 4 MON COM108 - LAP TRINH CO BAN         |\n");
	printf("|              Nguoi thuc hien: NGUYEN NGOC HUY              |\n");
	printf("|                       MSSV: PS14009                        |\n");
	printf("+++========================================================+++\n\n\n");
	
	printf("---------------------------[ MENU ]---------------------------\n");
	printf("| <1>   DEM NGUYEN AM, PHU AM, KHOANG TRANG TRONG CHUOI      |\n");
	printf("| <2>   SAP XEP 5 CHUOI THEO CHU CAI TU A-Z                  |\n"); 
	printf("| <3>   SAP XEP 5 CHUOI THEO CHU CAI TU Z-A                  |\n");
	printf("| <4>   XOA KHOANG TRANG TRONG CHUOI                         |\n");
	printf("--------------------------------------------------------------\n");
	printf("| <0>   THOAT KHOI CHUONG TRINH                              |\n");
	printf("| <5>   DANG XUAT                                            |\n");
	printf("--------------------------------------------------------------\n\n");
	
	do{
		printf("Moi ban chon chuong trinh (0,1,2,...): ");
		scanf("%d",&menu);
	}while(menu<0 || menu>5);
	
	switch(menu){
		case 0: exit(0);
		case 1:{
			demChuoi();
			break;
		}
		case 2:{
			sxChuoiTang();
			break;
		}
		case 3:{
			sxChuoiGiam();
			break;
		}
		case 4:{
			xKhoangTrang();
			break;
		}
		case 5:{
			result = 1;
			break;
		}
		default:{
			printf("Da xay ra loi, moi ban thu lai !!!");
			break;
		}
		
	}
	return result;
}


void demChuoi(){
	system("cls");
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
	printf("| Nhan 2 tro ve menu.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			demChuoi();
			break;
		} 
		case 2:{
			system("cls");
			fflush(stdin);
			mainMenu(0);
			break;
		} 
	}
}
void sxChuoiTang(){
	system("cls");
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|            SAP XEP 5 CHUOI THEO CHU CAI TU A-Z          |\n");
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
	printf("\n!!!!!!!!Thu tu cac chuoi sau khi duoc sap xep!!!!!!!!\n\n\a");
	for(i=0;i<5;i++){
		printf("Chuoi %d: %s \n",i+1,s[i]);
	}
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 tro ve menu.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			sxChuoiTang();
			break;
		} 
		case 2:{
			system("cls");
			fflush(stdin);
			mainMenu(0);
			break;
		} 
	}
}
void sxChuoiGiam(){
	system("cls");
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|            SAP XEP 5 CHUOI THEO CHU CAI TU Z-A          |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	char s[5][100];
	int i=0,j=0;
	for(i=0;i<5;i++){
	printf("Xin moi nhap vao chuoi %d: ",i+1);
		gets(s[i]);
	}
	for(i = 0; i < 5; i++){
		for (j = 1; j < 5; j++){
			if (strcmp(s[j - 1], s[j]) < 0) {
			char temp[100]={0};
			strcpy(temp, s[j-1]);
			strcpy(s[j-1], s[j]);
			strcpy(s[j], temp);
			}
		}
	}
	printf("\n!!!!!!!!Thu tu cac chuoi sau khi duoc sap xep!!!!!!!!\n\n\a");
	for(i=0;i<5;i++){
		printf("Chuoi %d: %s \n",i+1,s[i]);
	}
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 tro ve menu.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			sxChuoiGiam();
			break;
		} 
		case 2:{
			system("cls");
			fflush(stdin);
			mainMenu(0);
			break;
		} 
	}
}
void xKhoangTrang(){
	system("cls");
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|               XOA KHOANG TRANG TRONG CHUOI              |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	char s[100];
	int i=0;
	printf("Xin moi nhap vao chuoi :");
	gets(s);
	int j=strlen(s);
	while(s[i]>j){
		if(s[i]==' '){
			strcpy(&s[i],&s[i+1]);
			continue;
		}
		i++;
	}
	printf("\nChuoi sau khi xoa het khoang trang :%s.\n",s);
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 tro ve menu.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			xKhoangTrang();
			break;
		} 
		case 2:{
			system("cls");
			fflush(stdin);
			mainMenu(0);
			break;
		} 
	}
}

