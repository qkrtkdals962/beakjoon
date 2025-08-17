#include<stdio.h>
int main(){
	int N, K;
	scanf("%d %d",&N, &K);
	int a[N], b=0;
	for(int i = 1; i <= N; i++){
		if(N % i == 0){
			a[b++] = i;
		}
	}
	if(K <= b)
		printf("%d\n",a[K-1]);
	else
		printf("0\n");
	return 0;
}
