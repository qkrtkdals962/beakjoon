#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n) == 1){
		if(n != -1){
			int a[n];
			int count = 0, total = 0;
			for(int i = 1; i<n; i++){
				if(n % i == 0){
					total += i;
					a[count++] = i;
				}
			}
			if(n == total){
				printf("%d = ",n);
				for(int j = 0; j < count;j++){
					if(j == count-1)
						printf("%d\n",a[j]);
					else
						printf("%d + ",a[j]);
				}
			}else
				printf("%d is NOT perfect.\n",n);
		}else
			break;
	}
	return 0;
}
