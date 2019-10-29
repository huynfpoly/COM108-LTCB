#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int stt;
	printf("----------------------------------\n");
	printf("Chao mung ban den voi bai Lab so 3\n");
	printf("----------------------------------\n\n");
	MENU:
	system("cls");
	printf("---------------Menu---------------\n");
	printf("1. Tinh hoc luc sinh vien\n");
	printf("2. Giai phuong trinh bac I\n");
	printf("3. Giai phuong trinh bac II\n");
	printf("4. Tinh tien dien\n");
	printf("0. Thoat chuong trinh\n");
	printf("----------------------------------\n");
	printf("\nHay nhap so thu tu chuong trinh ban muon mo: ");
	scanf("%d",&stt);
	system("cls");
	switch(stt){
		case 0: exit(0);
		case 1: {
			CASE1:
			printf("---------------------------------------\n");
			printf("Chuong trinh tinh hoc luc cua sinh vien\n");
			printf("---------------------------------------\n\n");
			float diem;
			printf("Hay nhap vao diem cua sinh vien: ");
			scanf("%f",&diem);
			
			if(diem >= 9 ){
				printf("Hoc luc cua sinh vien la: Xuat sac");
			}
			else if(diem>=8){
				printf("Hoc luc cua sinh vien la: Gioi");
			}
			else if(diem >=6.5){
				printf("Hoc luc cua sinh vien la: Kha");
			}
			else if(diem >=5){
				printf("Hoc luc cua sinh vien la: Trung binh");
			}
			else if(diem >=3.5){
				printf("Hoc luc cua sinh vien la: Yeu");
			}
			else if(diem >=0){
				printf("Hoc luc cua sinh vien la: Kem");
			}
			else{
				printf("Diem ban nhap khong hop le");
			}
			printf("\n\n---------------------------------------\n");
			printf("1. Tiep tuc tinh\n2. Thoat ra Menu\n0. Thoat chuong trinh\nNhap chuong trinh ban muon chay: ");
			int so;
			scanf("%d",&so);
			switch(so){
				case 1: goto CASE1;
				case 2: goto MENU;
				case 0: exit(0);
				default: printf("STT ban nhap khong hop le");getch();
			}
			goto CASE1;
			getch();
			break;
		}
		case 2: {
			CASE2:
			printf("------------------------------------\n");
			printf("Chuong trinh giai phuong trinh bac I\n");
			printf("------------------------------------\n\n");
			float soA, soB;
			printf("\nNhap vao 2 so A va B: ");
			scanf("%d%d",&soA, &soB);
			
			if(soA==0){
				if(soB==0){
					printf("\nPhuong trinh co vo so nghiem");
				}
				else if(soB!=0){
					printf("\nPhuong trinh vo nghiem");
				}
			}
			else{
				printf("\nPhuong trinh co nghiem x=%f",-soB/soA);
			}
			printf("\n\n---------------------------------------\n");
			printf("1. Tiep tuc tinh\n2. Thoat ra Menu\n0. Thoat chuong trinh\nNhap chuong trinh ban muon chay: ");
			int so;
			scanf("%d",&so);
			switch(so){
				case 1: goto CASE2;
				case 2: goto MENU;
				case 0: exit(0);
				default: printf("STT ban nhap khong hop le");getch();
			}
			goto CASE4;
			getch();
			break;
		}
		case 3: {
			CASE3:
			printf("-------------------------------------\n");
			printf("Chuong trinh tinh phuong trinh bac II\n");
			printf("-------------------------------------\n\n");
			float soA, soB, soC;
			printf("\nNhap vao 3 so A B va C: ");
			scanf("%f%f%f",&soA, &soB, &soC);
			if(soA==0){
				if(soB==0){
					if(soC==0){
						printf("\nPhuong trinh co vo so nghiem");
					}
					else if(soC!=0){
						printf("\nPhuong trinh vo nghiem");
					}
				}
				else{
					printf("\nPhuong trinh co nghiem x=%f",-soC/soB);
				}
			}
			else{
				float delta =(soB*soB) - (4*soA*soC);
				if(delta < 0){
					printf("\nPhuong trinh vo nghiem");
				}
				else if(delta == 0){
					printf("\nPhuong trinh co nghiem kep x=%f", -soB/(2*soA));
				}
				else if(delta > 0){
					printf("\nPhuong trinh co 2 nghiem phan biet:\nx1=%f\nx2=%f", (-soB + sqrt(delta))/(2*soA),(-soB - sqrt(delta))/(2*soA));
				}
			}
			printf("\n\n---------------------------------------\n");
			printf("1. Tiep tuc tinh\n2. Thoat ra Menu\n0. Thoat chuong trinh\nNhap chuong trinh ban muon chay: ");
			int so;
			scanf("%d",&so);
			switch(so){
				case 1: goto CASE3;
				case 2: goto MENU;
				case 0: exit(0);
				default: printf("STT ban nhap khong hop le");getch();
			}
			goto CASE4;
			getch();
			break;
		}
		case 4: {
			CASE4:
			system("cls");
			printf("------------------------------------\n");
			printf("Chuong trinh tinh tien dien phai tra\n");
			printf("------------------------------------\n\n");
			float soDien;
			printf("\nNhap vao so dien tieu thu: ");
			scanf("%f",&soDien);
			if(soDien < 0){
				printf("So dien ban nhap khong hop le");
			}
			else if(soDien <= 50){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*1678);
			}
			else if(soDien <= 100){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*1734);
			}
			else if(soDien <= 200){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*2014);
			}
			else if(soDien <= 300){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*2534);
			}
			else if(soDien <= 400){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*2834);
			}
			else if(soDien > 400){
				printf("Tien dien thang nay cua ban la: %.2f", soDien*2927);
			}
			printf("\n\n---------------------------------------\n");
			printf("1. Tiep tuc tinh\n2. Thoat ra Menu\n0. Thoat chuong trinh\nNhap chuong trinh ban muon chay: ");
			int so;
			scanf("%d",&so);
			switch(so){
				case 1: goto CASE4;
				case 2: goto MENU;
				case 0: exit(0);
				default: printf("STT ban nhap khong hop le");getch();
			}
			goto CASE4;
			getch();
			break;
		}
		default: printf("STT ban nhap khong hop le");getch();
	}
	system("cls");
	goto MENU;
	return 0;
}
