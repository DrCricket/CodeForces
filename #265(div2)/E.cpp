#include<algorithm>
#include<vector>
#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    string s,inp;
    cin >> s;
    int n;
    scanf("%d",n);
    while(n!=0)
    {
        cin >> inp;
        int pos = inp.find("-");
        string s1 = inp.substr(0,1);
        string s2 = inp.substr(3,inp.size()-1);
        while ((pos = s.find(s1)) != string::npos)
            {s.replace(pos, s1.length(), s2);}
        n--;
    }
    cout << atoi(s.c_str())%1000000007 << endl;

    return 0;
}
