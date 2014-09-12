#include<cstdio>
#include<iostream>

using namespace std;
bool wayToSort(int i, int j) { return i > j; }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,wayToSort);
    for(int i=1;i<n;i++)
    {
        arr[i] += arr[i-1];
    }
    for(int j=0;j<)

    return 0;
}
