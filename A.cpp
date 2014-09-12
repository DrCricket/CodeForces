#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int sol(int n,int m,int a,int b)
{
    if (n <= 0)
    {
        return 0;
    }
    return min(sol(n-1,m,a,b)+a,sol(n-m,m,a,b)+b);
}
int main()
{
    int m,n,a,b;
    cin >> n >> m >> a >> b;
    int solution = sol(n,m,a,b);
    printf("%d",solution);
    return 0;
}
