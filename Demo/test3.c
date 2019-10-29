#include <stdio.h>

void main(){
	int i=0;
	start:
	system("cls");
		if(i!=0){
			printf("===================================\n");
			printf("So thu tu cua ban la => %d.\n",i);
			printf("===================================\n\n");
		}
	;
	printf("Nhan Enter de lay so thu tu.");
	
	char c;
    fflush(stdin);
    c = getchar();
    if (c == '\n'){
    	i++;
		
		goto start;
    }
    else goto start;
}
