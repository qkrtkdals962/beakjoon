#include<stdio.h>
int main(){
	int a;
	int b;
	scanf("%d",&a);
	for(int i = 0;i<a;i++){
		scanf("%d",&b);
		int q = 0, d =0, n = 0, p = 0;
		q = b / 25;
		b = b % 25;
		d = b / 10;
		b = b % 10;
		n = b / 5;
		b = b % 5;
		p = b;
		printf("%d %d %d %d\n",q, d, n, p);
	}
	return 0;
}
//q = 0.25 d = 0.1 n = 0.05 p = 0.01
