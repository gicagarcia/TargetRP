#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
	char str2[100];

    printf("Informe a string: ");
    gets(str1);
	
	strcpy(str2, strrev(str1));
	printf(str2);
}