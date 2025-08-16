#include<stdio.h>
int main(){
	int B, index = 0;
	long long int N;
	char num[31];
	scanf("%lld %d",&N, &B);
	while(N>0){
		int r = N % B;
		if(r < 10)
			num[index++] = '0' + r;
		else
			num[index++] = 'A' + (r - 10);
		N = N / B;
	}
	for(int i = index-1; i >= 0; i--){
		printf("%c",num[i]);
	}
	return 0;
}
