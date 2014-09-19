#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans=0;
    while(n!=0)
    {
        int a,b;
        cin >> a >> b;
        if((b-a) >= 2){ans++;}
        n--;
    }
    printf("%d",ans);
    return 0;
}
