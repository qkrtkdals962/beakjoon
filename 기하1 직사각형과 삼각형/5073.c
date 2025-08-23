#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	while((a>0)&&(b>0)&&(c>0)){
		int l = a;
		l = l < b ? b : l;
		l = l < c ? c : l;
		if( a + b + c <= 2 * l)
			printf("Invalid\n");
		else{
			if((a==b)&&(b==c))
				printf("Equilateral\n");
			else if((a==b)||(b==c)||(c==a))
				printf("Isosceles\n");
			else if((a!=b)&&(b!=c)&&(c!=a))
				printf("Scalene\n");
		}
		scanf("%d %d %d",&a,&b,&c);
	}
	return 0;
}
