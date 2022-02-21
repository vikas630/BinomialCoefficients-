#include<iostream>
using namespace std;
long double factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
double bio(int n,int k){
long double a;
 if(k>n)
        a = 0;
    else if(k==0||n==k)
        a=1;
    else
       a = factorial(n)/(factorial(k)*factorial(n-k)); 
    return a;
}