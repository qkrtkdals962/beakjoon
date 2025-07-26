#include<stdio.h>
#include<string.h>
int main(){
	int x;
	scanf("%d",&x);
	for(int i = 0; i<x; i++){
		char a[1000];
		scanf("%s",a);
		printf("%c%c\n",a[0],a[strlen(a)-1]);
	}
	return 0;
}
