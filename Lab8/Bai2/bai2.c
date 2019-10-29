#include <stdio.h>
#include <stdlib.h>

void nhap();
void xuat();
void sxGiam();
void sxTang();


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
	int n,check=0;
	printf("++-------------------------------------------------------++\n");
	printf("|          CHUONG TRINH LUU THONG TIN SINH VIEN           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	
	printf("So sinh vien can luu: ");
	scanf("%d",&n);
	struct SinhVien sv[n];
	
	nhap(sv,n);
	fflush(stdin);
	sort:
	do{
		printf("\n\nBan muon sap xep:\n(1). Giam dan\n(2). Tang dan:\nBan chon (1,2): ");
		scanf("%d",&check);
	}while(check!=1&&check!=2);
	fflush(stdin);
	if(check==1)
		sxGiam(sv,n);
	else
		sxTang(sv,n);
	fflush(stdin);
	xuat(sv,n);
	
	fflush(stdin);
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 sap xep lai.                                     |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon='\0';
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	if(chon==1){
		system("cls");
		goto start;
	}if(chon==2){
		system("cls");
		goto sort;
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


void sxTang(struct SinhVien sv[],int n){
	int i,j;
	for (i = n-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if(sv[j].diemTB > sv[j+1].diemTB) {
				struct SinhVien temp;
				temp = sv[j];
				sv[j] = sv[j+1];
				sv[j+1] = temp;
			}
		}
	}
}

void sxGiam(struct SinhVien sv[],int n){
	int i,j;
	for (i = n-1; i > 0; i--) {
		for ( j = 0; j < i; j++) {
			if (sv[j].diemTB < sv[j+1].diemTB) {
				struct SinhVien temp;
				temp = sv[j];
				sv[j] = sv[j+1];
				sv[j+1] = temp;
			}
		}
	}
}
