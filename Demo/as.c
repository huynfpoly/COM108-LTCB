#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien{
	char tenSV[100];
	char msSV[50];
	char nganhHoc[50];
	float diemTB;
};
void nhapSV(struct SinhVien sv[], int n){
	int i;
	for (i=0; i<n; i++){
		fflush(stdin);
		printf("\n-MSSV: ");
		gets(sv[i].msSV);
		fflush(stdin);
		printf("\n-Ho va ten SV: ");
		gets(sv[i].tenSV);
		fflush(stdin);
		printf("\n-Nganh hoc: ");
		gets(sv[i].nganhHoc);
		fflush(stdin);
		printf("\n-Diem trung binh: ");
		scanf("%f",&sv[i].diemTB);
		printf("\n-------------------------------------\n");
	}
}
void xuatSV(struct SinhVien sv[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("\n++>Sinh vien thu %d:<++\n",i+1);
		printf("\n  -MSSV: ");
		puts(sv[i].msSV);
		printf("\n  -Ho ten SV: ");
		puts(sv[i].tenSV);
		printf("\n  -Nganh hoc: ");
		puts(sv[i].nganhHoc);
		printf("\n  -Diem trung binh: %.2f", sv[i].diemTB);
		printf("\n====================================\n");
	}
}
void sapxepSVgiam(struct SinhVien sv[], int n){
	int i,j;
	struct SinhVien tam;
	printf("\n---Thong tin SV sap xep giam---\n");
	for ( i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(sv[i].diemTB<sv[j].diemTB){
				tam = sv[i];
				sv[i] = sv[j];
				sv[j] = tam;
				}
			}
		}
	}	
void sapxepSVtang(struct SinhVien sv[], int n){
	int i,j;
	struct SinhVien tam;
	printf("\n---Thong tin SV sap xep tang---\n");
	for ( i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(sv[i].diemTB>sv[j].diemTB){
				tam = sv[i];
				sv[i] = sv[j];
				sv[j] = tam;
				}
			}
		}	
	}
int main(int argc, char *argv[]) {
	int i,n, bai;
	a:
	printf("\n**Nhap so luong sinh vien: ");
	scanf("%d",&n);
	struct SinhVien sv[n];
	printf("\nNhap thong tin sinh vien:\n");
	nhapSV(sv,n);
	printf("\n============================================");
	xuatSV(sv,n);	
	b:	
	printf("\n          Ban co quyen lua chon:          ");
	printf("\n 1. Tiep tuc nhap va sap xep thong tin SV ");
	printf("\n 2. Nhap va sap xep thong tin SV tang     ");
	printf("\n 3. Nhap va sap xep thong tin SV giam     ");
	printf("\n 4. Thoat                                 ");
	scanf("%d",&bai);
	if (bai>4 || bai<0) {
        printf("\nMoi ban chon lai!!\n");
    }else{
		system("cls");
		switch (bai){
		case 1:{
			goto a;
			break;
		}
		case 2:{
			sapxepSVtang(sv,n);
			xuatSV(sv,n);
			goto b;
			break;
		}
		case 3:{
			sapxepSVgiam(sv,n);
			xuatSV(sv,n);
			goto b;
			break;				
		}
		case 4: exit(0);break;	
		}
	}
	return 0;
}
