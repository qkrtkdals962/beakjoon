#include<stdio.h>
int main(){
	int ch;
	int prev = ' ';
	int count = 0;
	while((ch=getchar()) != EOF && ch != '\n'){
		if(ch != ' ' && prev == ' ' ){
			count++;
		}
		prev = ch;
	}
	printf("%d\n", count);
	return 0;
}
