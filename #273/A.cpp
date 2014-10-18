#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n=5;
    while(n!=0)
    {
        int inp;
        cin >> inp;
        sum = sum + inp;
        n--;
    }
    if(sum%5 == 0){printf("%d",sum/5);}
    else{printf("-1");}
    return 0;
}
