#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int count[9] = {0,0,0,0,0,0,0,0,0};
    int count_5=0;
    int count_1=0;
    for(int i=0;i<6;i++)
    {
        int inp;
        cin >> inp;
        count[inp]++;
    }
    int flag=0;
    for(int i=0;i<9;i++)
    {
        if(count[i] != 0){flag++;}
        if(count[i] == 1){count_1 = i;}
        if(count[i] == 5){count_5 = i;}
    }
    if(flag == 1){printf("Elephant");}
    else if(flag == 2)
    {
        if(count[count_5] > count[count_1]){printf("Bear");}
        else{printf("Elephant");}
    }
    else if(flag == 3)
    {
        printf("Bear");
    }
    else{printf("Alien");}

    return 0;
}
