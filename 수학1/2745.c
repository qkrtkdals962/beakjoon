#include<stdio.h>
#include<string.h>
int main(){
	char N[31];
	int B;
	long long int num = 0;
	long long int val=1;
	int len, digit;
	scanf("%s %d",N,&B);
	len = strlen(N);
	for(int i = len-1 ; i >= 0; i--){
		if(N[i] >= '0' && N[i] <= '9'){
			digit = N[i] - '0';
			num = num + val * digit;
			val = val * B;
		}else{
			digit = N[i] - 'A' + 10;
			num = num + val * digit;
			val = val * B;
		}
	}
	printf("%lld\n",num);
	return 0;
}
