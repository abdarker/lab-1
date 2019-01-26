#include<stdio.h>

int fa( int n){
    if(n<=1){
        return n;

    }
    else
       return n*fa(n-1);


}

int main(){
    int a,b;

    scanf("%d",&a);

    b= fa(a);
    printf("%d",b);


}
