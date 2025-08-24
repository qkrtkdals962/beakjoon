/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] ¡¿ A[j] ¡¿ A[k]; # ÄÚµå1
    return sum;
}
*/
#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	printf("%lld\n%d\n",n*n*n,3);
	return 0;
}
