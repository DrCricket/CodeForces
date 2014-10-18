#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int nbym = n/m;
    int max = ((n-m)*(n-m+1))/2;
    int min = (( (nbym)*(nbym-1))/2)*(m-1);
    int k =((n- ((m-1)*(nbym)))*(n - ((m-1)*(nbym)) - 1))/2;
    min = min + k;
    printf("%d %d",min,max);
    return 0;
}
