#include<bits/stdc++.h>
using namespace std;
bool cmp(string str1,string str2)
{
    int m=str1.size();
    int n=str2.size();
    if(m==n)
    {
        return str1<str2;
    }
    return str1.size()<str2.size();
}
vector<string> fun(string arr)
{
    if(arr.size()==0)
    {
        vector<string> str={""};
        return str;
    }
    vector<string> str;
    char first=arr[0];
    string sub=arr.substr(1);
    vector<string> faith=fun(sub);
    int n=faith.size();
    for(int i=0;i<n;i++)
    {
        str.push_back(first+faith[i]);
        str.push_back(faith[i]);
    }
    return str;

}
int main()
{
    vector<string> arr=fun("abcd");

    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=="\0")
        {
            cout<<"NULL";
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"done";
    return 0;
}