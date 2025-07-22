#include<stdio.h>
int main(){
	int n=10;
	int a[n];
	for(int i = 0; i<n; i++){
		scanf("%d",&a[i]);
		a[i] = a[i] % 42;
	}
	int count=0;
	for(int i = 0; i < n; i++){
		int isNew = 1;
		for(int j = i+1; j<n;j++){
			if(a[i] == a[j]){
				isNew = 0;
				break;
			}
		}
		if(isNew)
			count++;
	}
	printf("%d",count);
	return 0;
}
