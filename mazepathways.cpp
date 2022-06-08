#include<bits/stdc++.h>
using namespace std;
int mazepathways(int m,int n)
{
    if(m==1 || n==1)//base case
    {
        return 1;
    }
    return mazepathways(m,n-1)+mazepathways(m-1,n);
}
int main()
{
    cout<<mazepathways(3,3);
    return 0;
}