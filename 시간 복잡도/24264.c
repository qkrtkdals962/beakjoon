/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] ¡¿ A[j]; # ÄÚµå1
    return sum;
}
*/
#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	printf("%lld\n%d\n",n*n,2);
	return 0;
}
