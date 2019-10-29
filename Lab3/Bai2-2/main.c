#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soA, soB, soC;
	printf("Chuong trinh giai phuong trinh bac II");
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
	return 0;
}

