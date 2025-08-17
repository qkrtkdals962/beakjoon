#include<stdio.h>
int main(){
	int M, N;
	int total=0, count=0;
	scanf("%d %d",&M,&N);
	int a[N-M+1];
	for(int i = M; i<=N; i++){
		if(i>1){
			if(i == 2 || i == 3){
				a[count++] = i;
				total += i;
			}else if(i>3){
				int flag=1;
				for(int j = 2; j*j<=i; j++){
					if(i%j == 0){
						flag = 0;
						break;
					}
				}
				if(flag){
					a[count++] = i;
					total += i;
				}			
			}
		}
	}
	if(total > 0){
		printf("%d\n",total);
		printf("%d\n",a[0]);
	}else
		printf("-1\n");
	return 0;
}
