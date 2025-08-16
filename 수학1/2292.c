#include<stdio.h>
int main(){
	long long int N;
	scanf("%lld",&N);
	int end = 1, layer = 1; 
	while(N > end){
		end = end + 6 * layer;
		layer++;
	}
	printf("%d\n",layer);
	return 0;
}
