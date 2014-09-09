#include<algorithm>
#include<vector>
#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int inp;
    int count=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&inp);
        if(inp)
        {
            if(!flag){flag=1;count=count+2;}
            else{count++;}
        }
        else{flag=0;}
    }
    if(count != 0)
    {printf("%d\n",count-1);}
    else{printf("0\n");}
    return 0;
}
