#include<bits/stdc++.h>
using namespace std;
//https://youtu.be/hMJAlbJIS7E
vector<string> getpath(int n)
{
    if(n==0)
    {
        vector<string> temp={""};
        return temp;
    }
    else if(n<0)
    {
        vector<string> temp={};
        return temp;
    }
    vector<string> arr;
    vector<string> list1=getpath(n-1);
    vector<string> list2=getpath(n-2);
    vector<string> list3=getpath(n-3);
    int p=list1.size();
    int m=list2.size();
    int o=list3.size();
    for(int i=0;i<p;i++)
    {
        arr.push_back('1'+list1[i]);
    }
    for(int i=0;i<m;i++)
    {
        arr.push_back('2'+list2[i]);
    }
    for(int i=0;i<o;i++)
    {
        arr.push_back('3'+list3[i]);
    }
    return arr;
}
void print(vector<string> arr)//printing a vector
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<",";
    }
}
int main()
{
    vector<string> arr=getpath(4);
    print(arr);
    return 0;
}