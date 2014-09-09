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
    char arr[n];
    string s;
    cin >> s;
    if(s.find("0") == string::npos){printf("%d\n",n);}
    else
    {
        if(s[0] == '0')
        {
            printf("1\n");
        }
        else{
                int count=0;
                int k=0;
                while(k != n)
                {
                    if(s[k] == '1'){count++;}
                    else{break;}
                    k++;
                }
                printf("%d\n",count+1);
        }
    }
    return 0;
}
