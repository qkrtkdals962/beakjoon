#include<stdio.h>
int main(){
	int N;
	long long int n = 2;
	scanf("%d",&N);
	for(int i = 0; i < N;i++){
		n = 2 * n - 1;
	}
	printf("%lld\n",n*n);
	return 0;
}
