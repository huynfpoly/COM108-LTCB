#include <stdio.h>
#include <stdlib.h>

void nhap();
void xuat();


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
 char mssv[50];
 char tenSV[50];
 char nganhHoc[50];
 float diemTB;
};


int main(int argc, char *argv[]) {
	start:
	fflush(stdin);
	int n;
	printf("++-------------------------------------------------------++\n");
	printf("|          CHUONG TRINH LUU THONG TIN SINH VIEN           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	
	printf("So sinh vien can luu: ");
	scanf("%d",&n);
	struct SinhVien sv[n];
	
	nhap(sv,n);
	xuat(sv,n);
	
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


void nhap(struct SinhVien sv[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n==========> SINH VIEN %d <==========\n",i+1);
		printf("MASSV: ");
		gets(sv[i].mssv);
		printf("Ho Ten: ");
		gets(sv[i].tenSV);
		printf("Nganh hoc: ");
		gets(sv[i].nganhHoc);
		printf("Diem TB: ");
		scanf("%f",&sv[i].diemTB);
	}
}

void xuat(struct SinhVien sv[],int n){
	printf("++-------------------------------------------------------++\n");
	printf("|          CHUONG TRINH LUU THONG TIN SINH VIEN           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int i;
	system("cls");
	printf("\n===> THONG TIN SINH VIEN DA LUU <===\n");
	for(i=0;i<n;i++){
		printf("\n==========> SINH VIEN %d <==========\n",i+1);
		printf("MASSV: ");
		puts(sv[i].mssv);
		printf("Ho Ten: ");
		puts(sv[i].tenSV);
		printf("Nganh hoc: ");
		puts(sv[i].nganhHoc);
		printf("Diem TB: %.1f",sv[i].diemTB);
	}
}
