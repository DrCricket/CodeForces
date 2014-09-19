#include<cstdio>
#include<iostream>

using namespace std;

int NumberOfSetBits(int i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int arr[m+1];
    for(int i=0;i<=m;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=0;
    for(int i=0;i<m;i++)
    {
        int c = arr[i]^arr[m];
        if(NumberOfSetBits(c) <= k){ans++;};
    }
    printf("%d",ans);
    return 0;
}
