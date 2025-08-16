#include<stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);

    int end = 0, layer = 0;
    while(N > end){
        layer++;
        end += layer;
    }

    int pos = N - (end - layer);

    int num, den;
    if(layer % 2 == 0){
        num = pos;
        den = layer - pos + 1;
    }else{
        num = layer - pos + 1;
        den = pos;
    }

    printf("%d/%d\n", num, den);
    return 0;
}

