#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int size= n;
    int ind=-1;
    for(int i=size-2; i>=0; i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            ind= i;
            break;
        }
    }
    if(ind==-1)
    {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for(int i=size-1; i>ind; i--)
    {
        if(permutation[i] > permutation[ind])
        {
            swap(permutation[i], permutation[ind]);
            break;
        }
    }

    reverse(permutation.begin()+ind+1, permutation.end());
    return permutation;
}
