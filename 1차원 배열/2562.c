#include<stdio.h>
int main(){
	int n=9;
	int a[n];
	for(int i = 1; i<= n; i++)
		scanf("%d",&a[i]);
	int max=a[1], num = 1;
	for(int j = 1; j<= n; j++){
		if(max>=a[j])
			max = max;
		else{
			max = a[j];
			num = j;
		}
	}
	printf("%d\n%d\n",max,num);
	return 0;
}
