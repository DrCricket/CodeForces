#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int leftval=0,rightval=0;
    int index;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '^'){index=i;break;}
    }
    for(int i=0;i<index;i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            leftval = leftval +((s[i]-48)*(index-i));
        }
    }

    for(int i = index+1;i<s.size();i++)
    {
        if(s[i] >= 48 && s[i] <=57)
        {
            rightval = rightval + ((s[i]-48)*(i-index));
        }
    }

    if(rightval == leftval){printf("balance");}
    else if(rightval < leftval){printf("left");}
    else{printf("right");}
    return 0;
}
