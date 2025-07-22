#include<stdio.h>
int main(){
	int N, X;
	scanf("%d %d",&N,&X);
	int a[N];
	for(int i = 0; i<N; i++){
		scanf("%d",&a[i]);
	}
	for(int j = 0; j<N; j++){
		if(a[j]<X)
			printf("%d ",a[j]);
	}
	printf("\n");
	return 0;
}
