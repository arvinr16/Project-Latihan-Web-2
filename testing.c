#include<stdio.h>

int main(){
	
	char huruf[100];
	printf("Hello Kawan\n");
	printf("Masukkan kalimat: ");
    fgets(huruf, sizeof(huruf), stdin);

    printf("Kamu mengetik: %s\n", huruf);
	
	return 0;
}
