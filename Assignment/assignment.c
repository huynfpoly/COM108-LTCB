#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ktSoNguyen();
void timUCLNvaBCNN();
void tinhTienKaraoke();
void tinhTienDien();
void doiTien();
void tinhLai();
void tinhLai2();
void game();
void sxHS();
void tinhPS();
int dangnhap();
int mainMenu();
int main(int argc, char *argv[]) {
	fflush(stdin); 
	system("cls");
	dangnhap(); // GOI HAM DANG NHAP
	return 0;
}
int dangnhap(){
	int result=0;
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|                        DANG NHAP                        |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("!!!!!!!!!!         DANG NHAP DE MO MENU         !!!!!!!!\n");
	printf("-----      USERNAME: admin || PASSWORD: 123     ------\n\n");
	char userSys[] = "admin";
	char passSys[] = "123";
	char user[100];
	char pass[100];
	
	printf("Username: ");
	gets(user);
	
	printf("Password: ");
	gets(pass);

	if(strcmp(user , userSys)==0 && strcmp(pass , passSys)==0){
		
	system("cls");
		printf("\n=> Dang nhap thanh cong!\n\n");
		fflush(stdin);
		if(mainMenu()!=0){ // Neu menu tra ve !=0 la dang xuat
			system("cls");
			printf("\n=> Dang xuat tai khoan thanh cong!\n\n\a");
			dangnhap();
		}
	}else{
		system("cls");
		printf("\n=> USERNAME hoac PASSWORD khong dung!\n\n\a");
		dangnhap();
	}
	return result;
}
int mainMenu(){
	
	fflush(stdin); 
	system("cls");
	int result;
	int menu=-1;
	printf("r2: %d",result);
	printf("+++========================================================+++\n");
	printf("|        BAI ASSIGNMENT MON COM108 - LAP TRINH CO BAN        |\n");
	printf("|              Nguoi thuc hien: NGUYEN NGOC HUY              |\n");
	printf("|                       MSSV: PS14009                        |\n");
	printf("+++========================================================+++\n\n\n");
	
	printf("---------------------------[ MENU ]---------------------------\n");
	printf("| <1>   KIEM TRA SO NGUYEN                                   |\n");
	printf("| <2>   TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO            |\n");
	printf("| <3>   TINH TIEN CHO QUAN KARAOKE                           |\n");
	printf("| <4>   TINH TIEN DIEN                                       |\n");
	printf("| <5>   DOI TIEN                                             |\n");
	printf("| <6>   TINH LAI XUAT NGAN HANG VAY TRA GOP                  |\n");
	printf("| <7>   VAY TIEN MUA XE                                      |\n");
	printf("| <8>   SAP XEP THONG TIN SINH VIEN                          |\n");
	printf("| <9>   GAME FPOLY-LOTT (2/15)                               |\n");
	printf("| <10>  TINH PHAN SO                                         |\n");
	printf("--------------------------------------------------------------\n");
	printf("| <11>  DANG XUAT TAI KHOAN                                  |\n");
	printf("| <0>   THOAT KHOI CHUONG TRINH                              |\n");
	printf("--------------------------------------------------------------\n\n");
	
	do{
	printf("Moi ban chon chuong trinh (0,1,2,...): ");
	scanf("%d",&menu);
	}while(menu<0 || menu>12);
	
	switch(menu){
		case 0: exit(0);
		case 1:{
			system("cls");
			ktSoNguyen();
			mainMenu();
			break;
		}
		case 2:{
			system("cls");
			timUCLNvaBCNN();
			break;
		}
		case 3:{
			system("cls");
			tinhTienKaraoke();
			break;
		}
		case 4:{
			system("cls");
			tinhTienDien();
			break;
		}
		case 5:{
			system("cls");
			doiTien();
			break;
		}
		case 6:{
			system("cls");
			tinhLai();
			break;
		}
		case 7:{
			system("cls");
			tinhLai2();
			break;
		}
		case 8:{
			system("cls");
			sxHS();
			break;
		}
		case 9:{
			system("cls");
			game();
			break;
		}
		case 10:{
			system("cls");
			tinhPS();
			break;
		}
		case 11:{
			return 1;
			break;
		}
		default:{
			printf("Da xay ra loi, moi ban thu lai !!!");
			getch();
			mainMenu();
		}
	}
}
void ktSoNguyen(){
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh kiem tra so nguyen             |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int x, i=0, result=0;
	printf("Nhap vao so nguyen x: ");
	if(scanf("%d", &x) == 1){
        printf("So %d la so nguyen\n",x);
	    if(x<2){
			result++;
		}
		for(i=2; i<x;i++){
			if(x%i==0){
				result++;
			}
		}
		if(result==0){
			printf("So %d la so nguyen to\n", x);
		}else{
			printf("So %d khong phai la so nguyen to\n",x);
		}
		if(x<1){
			printf("So %d khong phai la so chinh phuong\n",x);
		}
		for(i=1;i<=x;i++){
			if(i*i==x){
				printf("So %d la so chinh phuong\n",x);
				break;
			}
			if(i==x){
				printf("So %d khong phai la so chinh phuong\n",x);
				break;
			}
		}
    }
	else{
        printf("Khong phai la so nguyen.\n");
    }
    
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			ktSoNguyen();
			break;
		} 
		case 2:{
			fflush(stdin);
			system("cls");
			break;
		} 
	}
}
void timUCLNvaBCNN(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("| Chuong trinh tim uoc so chung va boi so chung cua 2 so  |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	
	int x,y, UCLN, BCNN, yTam, xTam;
	
	do{
		fflush(stdin); 
		printf("Nhap vao so nguyen duong x: ");
	}while(scanf("%d",&x)!=1 || x<0);
	do{
		fflush(stdin); 
		printf("Nhap vao so nguyen duong y: ");
	}while(scanf("%d",&y)!=1 || y<0);
	xTam = x;
	yTam = y;
	if(x==0 || y==0){
		UCLN = x+y;
	}
	else{
		while(x!=y){
			if(x>y){
				x = x - y;
			}else{
				y = y - x;
			}
		}
	}
	if(x==y){
		UCLN = x;
	}
	if(x==0 && y==0){
		printf("2 so x va y khong co uoc so chung lon nhat\n",UCLN);
		printf("2 so x va y khong co boi so chung nho nhat\n",UCLN);
	}
	else{
		printf("Uoc chung lon nhat cua 2 so x va y la: %d\n",UCLN);
		if(xTam != 0 || yTam !=0)
			BCNN = xTam*yTam/UCLN;
		else
			BCNN = 0;
		printf("Boi chung nho nhat cua 2 so x va y la: %d", BCNN);
			
	}
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			timUCLNvaBCNN();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhTienKaraoke(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|             Chuong trinh tinh tien Karaoke              |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int start=100,end=100;
	printf("!!!!! Quan Karaoke hoat dong tu 12h den 23h !!!!!\n");
	
	do{
		fflush(stdin);
		printf("Nhap vao gio bat dau: ");
	}while(scanf("%d",&start)!=1 || start<12 || start>23);
	
	do{
		
		if(end < start){
			printf("\n!!!!! THOI GIAN KET THUC KHONG THE NHO HON THOI GIAN BAT DAU !!!!!\n");
		}
		if(end > 23){
				printf("\n!!!!! THOI GIAN KET THUC < 24 !!!!!\n");
		}
		fflush(stdin);
		printf("Nhap vao gio ket thuc: ");
	}while(scanf("%d",&end)!=1 || end<12 || end>23 || end<start);
	
	int thoiGian = end - start, tien;
	if(thoiGian <=3){
		tien = thoiGian * 150000;
	}
	else if(thoiGian > 3){
		tien = ((thoiGian - 3) * 150000 * 0.7) + 450000; //((tong thoi gian - 3 gio dau) * 150.000vnd * 0.7(-30%)) + tong tien 3 gio dau (450.000vnd)
	}
	if(start >= 14 && start<=17){
		tien = tien * 0.9;
	}
	printf("So tien can thanh toan la: %d VND", tien);
	
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhTienKaraoke();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhTienDien(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|               Chuong trinh tinh tien dien               |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int dien,tien;

	do{
		fflush(stdin);
		printf("Nhap vao so (kwh) dien da su dung: ");
	}while(scanf("%d",&dien)!=1 || dien<0);
	
	/*
	0 -> 50 = 83.900
	51 -> 100 = 86.700
	101 -> 200 = 201.400
	201 -> 300 = 253.600
	301 -> 400 = 283.400
	*/

	if(dien <= 50){
		tien = dien * 1678;
	}
	else if(dien <= 100){
		tien = 83900 + ((dien-50)*1734);
	}
	else if(dien <= 200){
		tien = 83900 + 86700 + ((dien-100) * 2014);
	}
	else if(dien <= 300){
		tien = 83900 + 86700 + 201400 + ((dien-200) * 2536);
	}
	else if(dien <= 400){
		tien = 83900 + 86700 + 201400 + 253600 + ((dien-300) * 2834);
	}
	else if(dien > 400){
		tien = 83900 + 86700 + 201400 + 253600 + 283400 + ((dien-400) * 2927);
	}
	printf("Tien dien ban phai tra la: %d VND", tien);
	
	
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhTienDien();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void doiTien(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|                  Chuong trinh doi tien                  |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int i,to;
	unsigned long long int tien=0,du=0;
	printf("!!!!! So tien phai chia het cho 1.000 va lon hon 1.000!!!!!\n");
	do{
		printf("Nhap vao so tien ban can doi: ");
	}while(scanf("%llu",&tien)!=1 || tien<1000 );
	printf("%llu\n",tien);
	for(i=0;i<=8;i++){
		if(i==0){
			switch(tien){
				case 500000: i=1;break;
				case 200000: i=2;break;
				case 100000: i=3;break;
				case 50000: i=4;break;
				case 20000: i=5;break;
				case 10000: i=6;break;
				case 5000: i=7;break;
				case 2000: i=8;break;
				default:break;
			}
		}
		if(i==0){
			to=tien/500000;
			if(to!=0){
				printf("%d to 500.000 vnd\n",to);
			}
			tien=tien%500000;
		}
		if(i==1){
			to=tien/200000;
			if(to!=0){
				printf("%d to 200.000 vnd\n",to);
			}
			tien=tien%200000;
		}
		if(i==2){
			to=tien/100000;
			if(to!=0){
				printf("%d to 100.000 vnd\n",to);
			}
			tien=tien%100000;
		}
		if(i==3){
			to=tien/50000;
			if(to!=0){
				printf("%d to 50.000 vnd\n",to);
			}
			tien=tien%50000;
		}
		if(i==4){
			to=tien/20000;
			if(to!=0){
				printf("%d to 20.000 vnd\n",to);
			}
			tien=tien%20000;
		}
		if(i==5){
			to=tien/10000;
			if(to!=0){
				printf("%d to 10.000 vnd\n",to);
			}
			tien=tien%10000;
		}
		if(i==6){
			to=tien/5000;
			if(to!=0){
				printf("%d to 5.000 vnd\n",to);
			}
			tien=tien%5000;
		}
		if(i==7){
			to=tien/2000;
			if(to!=0){
				printf("%d to 2.000 vnd\n",to);
			}
			tien=tien%2000;
		}
		if(i==8){
			to=tien/1000;
			if(to!=0){
				printf("%d to 1.000 vnd\n",to);
			}
			tien=tien%1000;
		}
	}
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			doiTien();
			break;
		} 
		case 2:{
			system("cls");
			fflush(stdin);
			mainMenu();
			break;
		} 
	}
}
void tinhLai(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|    Chuong trinh tinh lai xuat ngan hang vay tra gop      |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int tienGoc,i;
	
	float tienConLai, tienTra,tienLai,tong=0;
	do{
		fflush(stdin);
		printf("Nhap vao so tien ban muon vay: ");
	}while(scanf("%d",&tienGoc)!=1 || tienGoc<0);
	
	tienTra = tienGoc / 12;
	
	for(i=1;i<=12;i++){
		tienLai = 0.05 * tienGoc;
		tienGoc -= tienTra;
		
		printf("So tien ban phai tra o thang %d la: %.0f\n",i,tienTra+tienLai);
		tong+=(tienTra+tienLai);
	}
	printf("\nTong so tien ban can tra trong 12 thang la: %.0f\n",tong);
	
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhLai();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void game(){
	char c;
	do{
	system("cls");
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|                  GAME FPOLY-LOTT (2/15)                 |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	printf("!!!!!!!!!!           Chon 2 so khac nhau         !!!!!!!!!!\n\n");
	printf("!!!!!!!!!!        Chi chon cac so tu 1 - 15      !!!!!!!!!!\n\n");
	int a,b,result=0;
	do{
		fflush(stdin);
		printf("Nhap vao so thu I: ");
	}while(scanf("%d",&a)!=1 ||a<1 || a>15);
	
	do{
		fflush(stdin);
		printf("Nhap vao so thu II: ");
	}while(scanf("%d",&b)!=1 ||b<1 || b>15 || b==a);
	int r1 = rand()%(15-1) + 1;
	int r2 = rand()%(15-1) + 1;
	
	if(a==r1||a==r2){
		result = 1;
		if(b==r1||b==r2){
			result = 2;
		}
	}
	else if(b==r1||b==r2){
		result = 1;
		if(a==r1||a==r2){
		result = 2;
		}
	}
	
	printf("Ket qua so xo la: %d | %d\n",r1,r2);
	if(result == 2){
		printf("Chuc mung ban da trung giai nhat voi 2 so trung voi ket qua!\a");
	}
	if(result == 1){
		printf("Chuc mung ban da trung giai nhi voi 1 so trung voi ket qua!\a");
	}
	if(result == 0){
		printf("Chuc ban may man lan sau!");
	}
	
	printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Nhan phim bat ki de tiep tuc.                           |\n");
	printf("| Nhan 1 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	printf("Ban chon: ");
	c = getch();
	}while(c!='0'&&c!='1');
	if(c=='1'){
		mainMenu();
	}
}
struct SinhVien{
	char ten[100];
	char MASSV[50];
	float diem;
};
void sxHS(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|        Chuong trinh sap xep thong tin sinh vien         |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	
	int n;
	printf("So sinh vien: ");
	scanf("%d",&n);
	struct SinhVien sv[n];
	
	int i,j;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Ten sinh vien: ");
		gets(sv[i].ten);
		fflush(stdin);
		
		printf("MASSV: ");
		gets(sv[i].MASSV);
		fflush(stdin);
		
		printf("Diem: ");
		scanf("%f",&sv[i].diem);
		fflush(stdin);
		
		printf("\n");
	}
	struct SinhVien temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sv[j].diem > sv[j-1].diem){
				temp = sv[j];
				sv[j] = sv[j-1];
				sv[j-1] = temp;
			}
		}
	}
	system("cls");
	printf("\n---------Thong tin sinh vien duoc sap xep theo diem giam dan---------\n");
	for(i=0;i<n;i++){
		printf("Ho ten: ");
		puts(sv[i].ten);
		printf("MASSV: ");
		puts(sv[i].MASSV);
		printf("Diem: ");
		printf("%.0f",sv[i].diem);
		
		if(sv[i].diem>=9){
			printf("\nHoc luc xuat sac");
		}else if(sv[i].diem>=8){
			printf("\nHoc luc gioi");
		}else if(sv[i].diem>=6.5){
			printf("\nHoc luc kha");
		}else if(sv[i].diem>=5){
			printf("\nHoc luc trung binh");
		}else if(sv[i].diem<5){
			printf("\nHoc luc yeu");
		}
		
		printf("\n-------------------------------------\n");
	}
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			sxHS();
			break;
		}
		case 2:{
			fflush(stdin);
			system("cls");
			mainMenu();
			break;
		} 
	}
}
void tinhLai2(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|         Chuong trinh tinh lai xuat vay mua xe           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	int i,j;
	float traTruoc=0, traGop=0, laiSuat = 0.072/12, tienVay = 500000000, tienLai=0, tienTra=0, tong=0,nam,thang,tonglai=0; // 7.2% = 0.072
	
	do{
		fflush(stdin);
		printf("Nhap vao so pham tram vay (toi da la 80 phan tram): ");
	}while(scanf("%f",&traGop)!=1 || traGop<0 || traGop>80);
	
	traTruoc = ((100 - traGop)/100)*500000000;
	tienVay -= traTruoc;
	
	printf("\nSo tien tra truoc la: %.0f VND",traTruoc);
	printf("\nSo tien ban duoc vay la: %.0f VND", tienVay);
	tienTra = tienVay / 24 /12;
	
	for(i=1;i<=24;i++){
		nam = 0;
		printf("\n================== Nam Thu %d =====================",i);
		for(j=1;j<=12;j++){
			tienLai = laiSuat * tienVay;
			tienVay -= tienTra;
			thang = tienTra+tienLai;
			nam += thang;
			tonglai += tienLai;
			printf("\n	So tien can tra o thang %d	: %.0f VND",j, thang);
		}
	tong += nam;
	printf("\n===> Tong tien nam %d can phai tra: %.0f <====",i,nam);
	printf("\n===================================================\n");
	}
	printf("\nTong lai trong 24 nam la: %.0f VND\n",tonglai);
	printf("\nTong so tien goc va lai ban can tra trong 24 nam la: %.0f VND\n",tong);
	
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhLai2();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
struct PhanSo{
	float tu;
	float mau;
};
float UCLNps(float a, float b){
	
	float c='\0';
	a= abs(a);
	b= abs(b);

	if(a==0 || b==0){
		c = a+b;
	}
	else{
		while(a!=b){
			if(a>b){
				a = a - b;
			}else{
				b = b - a;
			}
		}
	}
	if(a==b){
		c = a;
	}
	
	return c;

}
void RutGon(float *a, float *b){
	float c = UCLNps(*a,*b);
	if(*a==0||*b==0){
		*a=*a;
		*b=*b;
	}else{
		*a=*a/c;
		*b=*b/c;
	}
	
}
void tong(struct PhanSo ps[]){
	ps[2].tu = ps[0].tu*ps[1].mau + ps[1].tu*ps[0].mau;
	ps[2].mau = ps[0].mau*ps[1].mau;
	
	RutGon(&ps[2].tu,&ps[2].mau);
	
	printf("\nTong 2 phan so la: %.0f / %.0f",ps[2].tu,ps[2].mau);
}
void hieu(struct PhanSo ps[]){
	ps[3].tu = ps[0].tu*ps[1].mau - ps[1].tu*ps[0].mau;
	ps[3].mau = ps[0].mau*ps[1].mau;
	
	RutGon(&ps[3].tu,&ps[3].mau);
	
	printf("\nHieu 2 phan so la: %.0f / %.0f",ps[3].tu,ps[3].mau);
}
void tich(struct PhanSo ps[]){
	ps[5].tu = ps[0].tu*ps[1].tu;
	ps[5].mau = ps[0].mau*ps[1].mau;
	
	RutGon(&ps[5].tu,&ps[5].mau);
	
	printf("\nTich 2 phan so la: %.0f / %.0f",ps[5].tu,ps[5].mau);
}
void thuong(struct PhanSo ps[]){
	ps[4].tu = ps[0].tu*ps[1].mau;
	ps[4].mau = ps[0].mau*ps[1].tu;
	
	RutGon(&ps[4].tu,&ps[4].mau);
	
	printf("\nThuong 2 phan so la: %.0f / %.0f",ps[4].tu,ps[4].mau);
}
void tinhPS(){
	fflush(stdin); 
	printf("++-------------------------------------------------------++\n");
	printf("|         Chuong trinh tinh lai xuat vay mua xe           |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	
	struct PhanSo ps[5];
	printf("Nhap vao phan so thu 1.");
	printf("\nTu so: ");
	scanf("%f",&ps[0].tu);
	
	do
	{
		printf("Mau so: ");
		scanf("%f",&ps[0].mau);
		if(ps[0].mau==0)
			printf("\nMau phai khac khong\nVui long kiem tra lai\n\n");
	}while(ps[0].mau==0);
	
	
	printf("Nhap vao phan so thu 2.");
	printf("\nTu so: ");
	scanf("%f",&ps[1].tu);
	do{
		printf("Mau so: ");
		scanf("%f",&ps[1].mau);
		if(ps[1].mau==0)
			printf("\nMau phai khac khong\nVui long kiem tra lai\n\n");
	}while(ps[1].mau==0);
	
	
	printf("\nPhan so thu 1: %.0f / %.0f",ps[0].tu,ps[0].mau);
	printf("\nPhan so thu 2: %.0f / %.0f",ps[1].tu,ps[1].mau);
	
	tong(ps);
	hieu(ps);
	tich(ps);
	thuong(ps);
	
	
    printf("\n\n\n++-------------------------------------------------------++\n");
	printf("| Ban co muon tiep tuc ?                                  |\n");
	printf("| Nhan 1 de tiep tuc.                                     |\n");
	printf("| Nhan 2 de quay ve menu.                                 |\n");
	printf("| Nhan 0 de thoat chuong trinh.                           |\n");
	printf("++-------------------------------------------------------++\n");
	int chon;
	fflush(stdin);
	do{
		printf("Ban chon (0,1,2): ");
		scanf("%d",&chon);
	}while(chon<0 || chon>2);
	
	switch(chon){
		case 0: exit(0);
		case 1:{
			system("cls");
			tinhPS();
			break;
		} 
		case 2:{
			system("cls");
			mainMenu();
			break;
		} 
	}
}
