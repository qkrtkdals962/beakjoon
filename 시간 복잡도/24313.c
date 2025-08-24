#include<stdio.h>
int main(){
	int a1, a0;
	int c;
	int n0;
	scanf("%d %d %d %d",&a1, &a0, &c, &n0);
	if(a1*n0+a0<=c*n0){
		if(a1-c<=0)
			printf("1\n");
		else
			printf("0\n");
	}
	else
		printf("0\n");
	return 0;
}
