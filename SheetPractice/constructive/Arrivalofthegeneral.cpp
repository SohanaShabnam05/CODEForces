#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int count = 0;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int ind1 = 0;
    int ind2 = 0;

    int count1 = 0;
    int count2 = 0;

    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(v[i]);
    }

    for(int i=0; i<v.size(); i++)
    {
        if(maxi >= v[i])
        {
            maxi = v[i];
            ind1 = i;
        }
        if(mini <= v[i])
        {
            mini = v[i];
            ind2 = i;
        }
    }

    while(ind1+1 != v.size()-1)
    {
        swap(v[ind1], v[ind1+1]);
        count++;
    }

    while(ind2-1 != 0)
    {
        
    }
    
    return 0;
}