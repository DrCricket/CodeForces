#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,s;
    cin >> n >> s;
    int flag=0;
    int max = 0;
    while(n!=0)
    {
        int x,y;
        cin >> x >> y;
        if(x < s)
        {   flag=1;
            if(100-y >= max && y != 0)
            {
                max = 100-y;
            }
        }
        if(x == s && y == 0)
        {
            flag = 1;
            if( y >= max){max = 0;}
        }
        n--;
    }

    if(flag == 0)
    {
        printf("-1");
    }
    else{printf("%d",max);}

    return 0;
}
