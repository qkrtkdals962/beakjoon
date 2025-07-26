#include<stdio.h>
int main(){
	int a, b = 0;
	scanf("%d",&a);
	char c[a+1];
	scanf("%s",c);
	for(int i = 0; i<a; i++){
		int d = c[i] - '0';
		b = b + d;
	}
	printf("%d\n",b);
	return 0;
}
