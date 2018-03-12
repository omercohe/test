#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
typedef int* PWSTR;

int main() {
	
	int i = 0;
	PWSTR * str = NULL;
	str = (PWSTR*)malloc(sizeof(PWSTR)*10);
	printf("&str = 0x%x\n", &str);
	printf("str   = %p\n", str);
	for (i = 0; i < 10; i++) {
		str[i] = (PWSTR)malloc(sizeof(int));
		printf("str[i]  = %p\n", (str[i]));
		printf("&str[i] = 0x%x\n",&(str[i]));
		*(str[i]) = i;
		printf("*(str[i]) = %d\n", *(str[i]));		
	}

	for (i = 0; i < 10; i++) {
		free(str[i]);
	}
	free(str);
	return 0;
}
