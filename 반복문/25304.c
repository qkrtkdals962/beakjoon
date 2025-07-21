#include<stdio.h>
int main(){
	int X, N;
	int c = 0;
	scanf("%d %d",&X, &N);
	for(int i = 0; i<N; i++){
		int a, b;
		scanf("%d %d",&a,&b);
		c = c + (a*b);
	}
	if(X == c)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
