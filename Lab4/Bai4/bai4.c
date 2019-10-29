#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int menu=0;
	menu:
	printf("++--------------------------------------------++\n");
	printf("|Chuc nang 1: Tinh trung binh tong             |\n");
	printf("|Chuc nang 2: Tim so nguyen to                 |\n");
	printf("|Chuc nang 3: Tim so chinh phuong              |\n");
	printf("|Chuc nang 4: Thoat khoi chuong trinh          |\n");
	printf("++--------------------------------------------++\n");
	do{
		printf("Xin moi chon chuc nang (1,2,3,4): ");
		scanf("%d", &menu);
	}while(menu<1 || menu >4);
	
	switch(menu){
		case 1:{
			case1:
			system("cls");
			int min, max;
			float tong=0, n=0, tb=0;
			printf("++-------------------------------------------------------++\n");
			printf("| Chuong trinh tinh trung binh tong cac so chia het cho 2 |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			printf("Nhap vao so bat dau va ket thuc (vd: 2 10): ");
			scanf("%d%d", &min ,&max);
			int i=min;
			while(i<=max){
				if(i%2==0){
					tong += i;
					n++;
				}
				i++;
			}
			tb = tong / n;
			system("cls");
			printf("++-------------------------------------------------------++\n");
			printf("| Chuong trinh tinh trung binh tong cac so chia het cho 2 |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			
			printf("Trung binh tong cac so tu %d den %d chia het cho 2 la: %.2lf", min,max, tb);
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon: ");
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
			int n, i=0, result=0;
			printf("++-------------------------------------------------------++\n");
			printf("|            Chuong trinh xac dinh so nguyen to           |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			printf("Nhap vao so can xac dinh: ");
			scanf("%d", &n);
			if(n<2){
				result++;
			}
			for(i=2; i<n;i++){
				if(n%i==0){
					result++;
				}
			}
			if(result==0){
				system("cls");
				printf("++-------------------------------------------------------++\n");
				printf("|            Chuong trinh xac dinh so nguyen to           |\n");
				printf("++-------------------------------------------------------++\n\n\n");
				printf("So %d la so nguyen to", n);
			}else{
				system("cls");
				printf("++-------------------------------------------------------++\n");
				printf("|            Chuong trinh xac dinh so nguyen to           |\n");
				printf("++-------------------------------------------------------++\n\n\n");
				printf("So %d khong phai la so nguyen to",n);
			}
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon: ");
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
			printf("|          Chuong trinh xac dinh so chinh phuong          |\n");
			printf("++-------------------------------------------------------++\n\n\n");
			int n,i;
			printf("Nhap vao so can xac dinh: ");
			scanf("%d",&n);
			
			for(i=1;i<=n;i++){
				if(i*i==n){
					system("cls");
					printf("++-------------------------------------------------------++\n");
					printf("|          Chuong trinh xac dinh so chinh phuong          |\n");
					printf("++-------------------------------------------------------++\n\n\n");
					
					printf("So %d la so chinh phuong",n);
					break;
				}
				if(i==n){
					system("cls");
					printf("++-------------------------------------------------------++\n");
					printf("|          Chuong trinh xac dinh so chinh phuong          |\n");
					printf("++-------------------------------------------------------++\n\n\n");
					
					printf("So %d khong phai la so chinh phuong",n);
					break;
				}
			}
			
			
			
			printf("\n\n\n++-------------------------------------------------------++\n");
			printf("| Ban co muon tiep tuc ?                                  |\n");
			printf("| Nhan 1 de tiep tuc.                                     |\n");
			printf("| Nhan 2 de quay ve menu.                                 |\n");
			printf("| Nhan 0 de thoat chuong trinh.                           |\n");
			printf("++-------------------------------------------------------++\n");
			int chon;
			do{
				printf("Ban chon: ");
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
		case 4: exit(0); break;
	}
	
	return 0;
}
