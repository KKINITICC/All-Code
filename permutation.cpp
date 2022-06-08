//permutation.cpp
#include<bits/stdc++.h>
using namespace std;
//here faith is f("bc") gives all permutation of "bc"
//faith+expectation ===  putting "a" at position i=0->i=size of "bc" in "bc"
vector<string> getpermu(string str)
{   vector<string> arr;
    int n=str.size();
    string a;
    char first=str[0];
    a.push_back(first);
    if(n==1)
    {
        arr.push_back(a);
        return arr;
    }
    string sub=str.substr(1);
    vector<string> list=getpermu(sub);
    int m=list.size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //here modifiiying and restoring our og array
            string b=list[i].insert(j,a);//inserting element at ith pos 
            arr.push_back(b);
            list[i].erase(list[i].begin()+j);//removing element at ith pos 
        }
    }
    return arr;
}

int main()
{
    vector<string>arr=getpermu("abce");
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<'\n';
    }
    cout<<"DOBE";
    return 0;
}