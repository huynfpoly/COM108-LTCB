#include <stdio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	time_t s;
	time(&s);

	char hoTen[50], MSSV[7];
	int ngSinh, tSinh, nSinh;
	
	int ngay = localtime(&s)->tm_mday, thang = localtime(&s)->tm_mon+1, nam = localtime(&s)->tm_year+1900; // lay ra ngay thang nam hien tai
	
	printf("Chuong tinh tinh tuoi cua ban");
	printf("\nMoi ban nhap ho va ten: ");
	gets(hoTen);
	printf("Moi ban nhap MSSV: ");
	gets(MSSV);
	printf("Moi ban nhap vao ngay sinh (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &ngSinh,&tSinh,&nSinh);
	
	
	int ngayTrongThang[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(ngSinh > ngay){
		ngay = ngay + ngayTrongThang[tSinh - 1];
		thang = thang - 1;
	}
	if(tSinh > thang){
		nam = nam - 1;
		thang = thang + 12;
	}
	int ngTuoi = ngay - ngSinh; 
    int tTuoi = thang - tSinh; 
    int nTuoi = nam - nSinh;
	
	
	printf("\nHo ten: %s", hoTen);
	printf("\nMSSV: %s", MSSV);
	printf("\nNgay sinh: %d/%d/%d", ngSinh, tSinh, nSinh);
	printf("\nHom nay la ngay %d, thang %d, nam %d",ngay,thang,nam);
	printf("\nTuoi cua ban la %d tuoi, %d thang, %d ngay",nTuoi, tTuoi, ngTuoi);
	
    return 0;
}

