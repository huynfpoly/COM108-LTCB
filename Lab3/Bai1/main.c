#include <stdio.h>

int main(int argc, char *argv[]) {
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
	return 0;
}
