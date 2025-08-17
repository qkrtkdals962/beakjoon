#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int count = 0;
	for(int i = 0; i< n; i++){
		int a;
		scanf("%d",&a);
		if(a == 2 || a == 3)
			count++;
		else if(a>3){
			int flag = 1;
			for(int j = 2; j*j<=a; j++){
				if(a%j == 0){
					flag = 0;
					break;
				}
			}
			if(flag)
				count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
