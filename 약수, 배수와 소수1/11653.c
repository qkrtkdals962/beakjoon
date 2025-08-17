#include<stdio.h>
int main(){
	long long int N;
	scanf("%lld",&N);
	while(N != 1){
		for(int i = 2;i <= N; i++){
			if(N % i == 0){
				printf("%d\n",i);
				N = N / i;
				break;
			}
		}
	}
	return 0;
}
