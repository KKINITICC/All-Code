#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int key,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    int val;
    int mid=(s+e)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        e=mid-1;
        val=binary_search(arr,key,s,e);
    }
    else
    {
        s=mid+1;
        val=binary_search(arr,key,s,e);
    }
    return val;//this is termination call stack as base case is reached 
}
int main()
{
    vector<int> arr={1,3,5,7,9,11,12,15};
    cout<<binary_search(arr,13,0,7);
    return 0;
}