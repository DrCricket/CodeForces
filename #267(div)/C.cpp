#include<cstdio>
#include<iostream>
#include<set>

using namespace std;


int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        i++;
    }
    set<int> s;
    set<int>::iterator pos;
    for(int i=0;i<n-m;i++)
    {
        int j = i+m-1;
        s.insert(arr[j]);
        s.insert(arr[i]);
    }
    int ans=0;
    int b=0;
    for(pos =s.end();pos != s.begin();pos--)
    {
        if(b == k)
        {
            break;
        }
        b++;
        ans = ans+(*pos);
    }
    cout << ans << endl;
    return 0;
}
