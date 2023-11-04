#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = n-1; i>=0;i--)
    {   
        int didSwap=0;
        for(int j = 0 ; j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }
    }
}
