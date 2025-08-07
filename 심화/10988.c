#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	char b[101];
	scanf("%s",a);
	int A = strlen(a);
	for(int i = 0; i < A; i++){
		b[i] = a[A-1-i];
		b[A] = '\0';
	}
	if(strcmp(a, b)==0)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
