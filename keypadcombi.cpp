#include<bits/stdc++.h>
using namespace std;
vector<string> list={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string> getKPD(string str)
{
    char index=str[0];//5
    if(str.size()==1)
    {
        vector<string> arr={};
        int n=::list[index-48].size();//size of keystring
        for(int i=0;i<n;i++)
        {
            string temp={};
            temp=::list[index-48][i]+temp;
            arr.push_back(temp);
        }
        return arr;
    }
    //if str=576
    string sub=str.substr(1);//_76
    vector<string> arr_old=getKPD(sub);//got all subsequence
    vector<string> arr_new;
    int n=::list[index-48].size();//size of keystring
    int m=arr_old.size();//total no. of combi till now
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr_new.push_back(::list[index-48][i] + arr_old[j]);
        }
    }
    return arr_new;
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
    string str="678";
    print(getKPD(str));
    return 0;
}