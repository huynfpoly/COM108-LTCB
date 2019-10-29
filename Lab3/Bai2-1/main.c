#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soA, soB;
	printf("Chuong trinh giai phuong trinh bac I");
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
	return 0;
}

