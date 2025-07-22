#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d",&n,&m);
	int a[n];
	for(int k = 0; k <n; k++)
		a[k] = k+1;
	int i, j;
	for(int k = 0; k<m; k++){
		scanf("%d %d",&i,&j);
		i--; j--;
		for(int x = 0;x<(j-i+1)/2;x++){
			int temp = a[i+x];
			a[i+x] = a[j-x];
			a[j-x] = temp;
		}
	}
	for(int k = 0; k<n; k++)
		printf("%d ",a[k]);
	return 0;
}
