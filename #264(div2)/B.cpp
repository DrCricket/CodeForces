#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("date.in","r",stdin);
        freopen("date.out","w",stdout);
    #endif

    int n;
    cin >> n;
    int next,prev=0,sol=0;
    int e = 0;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin >> next;
        e = e + prev-next;
        if(e < 0)
        {
            sol = sol - e;
            e = 0;
        }
        prev = next;
    }
    cout << e << "\n";
    return 0;
}
