/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] ¡¿ A[j] ¡¿ A[k]; # ÄÚµå1
    return sum;
}
*/
#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld",&n);
	printf("%lld\n%d\n",(n*(n-1)*(n-2))/6,3);
	return 0;
}
