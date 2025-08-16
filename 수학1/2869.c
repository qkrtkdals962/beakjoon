#include<stdio.h>
int main(){
	long long int A, B, V;
	scanf("%lld %lld %lld",&A,&B,&V);
	if(V<=A)
		printf("1\n");
	else{
		long long int start = V - A;
		long long int day = (start + (A-B) -1) / (A-B);
		printf("%lld\n",day+1);
	}
	return 0;
}
