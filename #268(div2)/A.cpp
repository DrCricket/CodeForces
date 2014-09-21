#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int flag[n+1];
    for(int i=1;i<=n;i++){flag[i]=0;}

    for(int i=0;i<x;i++)
    {
        int inp;
        cin >> inp;
        flag[inp] = 1;
    }

    int y;
    cin >> y;
    for(int i=0;i<y;i++)
    {
        int inp;
        cin >> inp;
        flag[inp] = 1;
    }
    int fl =0;
    for(int i=1;i<=n;i++){if(flag[i]==0){fl=1;break;}}
    if(!fl){printf("I become the guy.");}
    else{printf("Oh, my keyboard!");}
    return 0;
}
