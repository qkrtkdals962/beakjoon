#include<stdio.h>
int main(){
	int n[31] = {0};
	for(int i = 0; i<28; i++){
		int a;
		scanf("%d",&a);
		n[a] = 1;
	}
	for(int j=1; j<31; j++){
		if(n[j]==0)
			printf("%d\n",j);
	}
	return 0;
}
