#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	fflush(stdin);
	printf("++-------------------------------------------------------++\n");
	printf("|                        DANG NHAP                        |\n");
	printf("++-------------------------------------------------------++\n\n\n");
	char userSys[] = "admin";
	char passSys[] = "12345";
	char user[100];
	char pass[100];
	start:
	printf("Username: ");
	gets(user);
	
	printf("Password: ");
	gets(pass);
	
	if(strcmp(user , userSys)==0&&strcmp(pass , passSys)==0){
		printf("Dang nhap thanh cong!");
	}else{
		system("cls");
		printf("Username hoac Password khong dung! Moi ban nhap lai.\n\a");
		goto start;
	}

	return 0;
}
