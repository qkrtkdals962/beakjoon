#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i, j, k;
	int a[101] = {0};
	for(int l = 1; l<m+1; l++){
		scanf("%d %d %d", &i, &j, &k);
		for(int x=i; x<=j; x++){
			a[x] = k;
		}	
	}
	for(int o = 1; o<=n	; o++){
		printf("%d ",a[o]);
	}
	return 0;
}
