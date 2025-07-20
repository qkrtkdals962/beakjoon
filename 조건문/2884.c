#include<stdio.h>
int main(){
	int H,M;
	scanf("%d %d",&H,&M);
	if(M-45<0){
		if(H-1<0){
			printf("%d %d\n",24+H-1,60+(M-45));
		}
		else
			printf("%d %d\n",H-1,60+(M-45));
	}
	else
		printf("%d %d\n",H,M-45);
	return 0;
}
