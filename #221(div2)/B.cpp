#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n+1];
    for(int i=0;i<n+1;i++){arr[i]=0;}
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        arr[x] = arr[x] - z;
        arr[y] = arr[y] + z;
    }
    int sum=0;
    for(int i=0;i<n+1;i++){if(arr[i]>0){sum=sum+arr[i];}}
    printf("%d",sum);
    return 0;
}
