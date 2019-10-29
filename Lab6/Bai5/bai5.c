#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhapMang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap vao phan tu cho a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nPhan tu a[%d]: %d",i,a[i]);
	}
}
void TBTong(int a[], int n){
	float tong = 0,tb;
	int i,count=0;
	
	for(i=0;i<n;i++){
		if(a[i]%3==0){
			tong += a[i];
			count++;
		}
	}
	if(count!=0){
		tb = tong / count;
		printf("\nTrung binh tong cac so chia het cho 3 trong mang la: %.2f",tb);
	}
	else
		printf("\nKhong co so nao chia het cho 3");
	
}
void timMaxMin(int a[], int n){
	int i;
	int min=a[0],max=a[0];
	
	for(i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}
	
	printf("\nGia tri lon nhat trong mang la: %d\n",max);
	printf("Gia tri nho nhat trong mang la: %d",min);
}
void tangDan(int a[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\nMang sau khi sap xep giam dan\n");
	xuatMang(a,n);
}
void giamDan(int a[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\nMang sau khi sap xep giam dan\n");
	xuatMang(a,n);
}

void binhPhuong(int n, int m, int a[n][m]){
	printf("\n\n");
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Gia tri sau khi binh phuong cua phan tu mang[%d][%d]: %d\n",i,j, a[i][j]*a[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	menu:
	fflush(stdin); 
	system("cls");
	int menu=-1;
	printf("+++========================================================+++\n");
	printf("|           BAI LAB 6 MON COM108 - LAP TRINH CO BAN          |\n");
	printf("|              Nguoi thuc hien: NGUYEN NGOC HUY              |\n");
	printf("|                       MSSV: PS14009                        |\n");
	printf("+++========================================================+++\n\n\n");
	
	printf("---------------------------[ MENU ]---------------------------\n");
	printf("| <1>   TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3           |\n");
	printf("| <2>   TIM MAX VA MIN                                       |\n"); 
	printf("| <3>   SAP XEP TANG DAN                                     |\n");
	printf("| <4>   SAP XEP GIAM DAN                                     |\n");
	printf("| <5>   BINH PHUONG CAC PHAN TU TRONG MANG                   |\n");
	printf("--------------------------------------------------------------\n");
	printf("| <0>   THOAT KHOI CHUONG TRINH                              |\n");
	printf("--------------------------------------------------------------\n\n");
	
	do{
	printf("Moi ban chon chuong trinh (0,1,2,...): ");
	scanf("%d",&menu);
	}while(menu<0 || menu>5);
	
	switch(menu){
		case 0: exit(0);
		case 1:{
			case1:
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("|        TINH TRUNG BINH TONG CA SO CHIA HET CHO 3        |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n;
			printf("Nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			int a[n];
			nhapMang(a,n);
			TBTong(a,n);
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon (0,1,2): ");
				scanf("%d",&chon);
			}while(chon<0 || chon>2);
			
			switch(chon){
				case 0: exit(0);
				case 1:{
					system("cls");
					goto case1;
					break;
				} 
				case 2:{
					system("cls");
					goto menu;
					break;
				} 
			}
			break;
		}
		case 2:{
			case2:
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("|                     TIM MAX VA MIN                      |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n;
			printf("Nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			int a[n];
			nhapMang(a,n);
			timMaxMin(a,n);
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon (0,1,2): ");
				scanf("%d",&chon);
			}while(chon<0 || chon>2);
			
			switch(chon){
				case 0: exit(0);
				case 1:{
					system("cls");
					goto case2;
					break;
				} 
				case 2:{
					system("cls");
					goto menu;
					break;
				} 
			}
			break;
		}
		case 3:{
			case3:
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("|                 SAP XEP MANG TANG DAN                   |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n;
			printf("Nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			int a[n];
			nhapMang(a,n);
			tangDan(a,n);
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon (0,1,2): ");
				scanf("%d",&chon);
			}while(chon<0 || chon>2);
			
			switch(chon){
				case 0: exit(0);
				case 1:{
					system("cls");
					goto case3;
					break;
				} 
				case 2:{
					system("cls");
					goto menu;
					break;
				} 
			}
			break;
		}
		case 4:{
			case4:
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("|                 SAP XEP MANG GIAM DAN                   |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n;
			printf("Nhap vao so phan tu cua mang: ");
			scanf("%d", &n);
			int a[n];
			nhapMang(a,n);
			giamDan(a,n);
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon (0,1,2): ");
				scanf("%d",&chon);
			}while(chon<0 || chon>2);
			
			switch(chon){
				case 0: exit(0);
				case 1:{
					system("cls");
					goto case4;
					break;
				} 
				case 2:{
					system("cls");
					goto menu;
					break;
				} 
			}
			break;
		}
		case 5:{
			case5:
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("|         BINH PHUONG CAC PHAN TU TRONG MANG 2 CHIEU       |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n,m;
			printf("Moi ban nhap vao so hang cua mang: ");
			scanf("%d",&n);
			printf("Moi ban nhap vao so cot cua mang: ");
			scanf("%d",&m);
			int a[n][m],i,j;
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("Moi ban nhap gia tri cho phan tu a[%d][%d]: ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
			binhPhuong(n,m,a);
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon (0,1,2): ");
				scanf("%d",&chon);
			}while(chon<0 || chon>2);
			
			switch(chon){
				case 0: exit(0);
				case 1:{
					system("cls");
					goto case5;
					break;
				} 
				case 2:{
					system("cls");
					goto menu;
					break;
				} 
			}
			break;
		}
		default:{
			printf("Da xay ra loi, moi ban thu lai !!!");
			break;
		}
	}
	return 0;
}
