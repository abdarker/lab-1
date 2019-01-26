#include<bits/stdc++.h>

int gcd(int a,int b){
    if(b==0){
        return a;
    }
        return gcd(b,a%b);
}

int main(){
    int a,b,lcm,c;
    scanf("%d %d",&a,&b);
    c=gcd(a,b);

    lcm= (a*b)/c;
    printf("\n%d",lcm);
}
