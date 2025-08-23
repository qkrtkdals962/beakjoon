#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int l;
	l = a < b ? b : a;
	l = l < c ? c : l;
	if( a + b + c <= 2 * l)
		printf("%d\n",2 * (a + b + c - l) - 1);
	else
		printf("%d\n",a + b + c);
	return 0;
}
