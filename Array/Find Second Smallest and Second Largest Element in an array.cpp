vector<int> getSecondOrderElements(int n, vector<int> a) {
    
    int small = INT_MAX, large = INT_MIN, s_small = INT_MAX, s_large = INT_MIN;

    for(int i=0;i<n;i++)
    {
        small = min(small, a[i]);
        large = max(large, a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]<s_small && a[i]!=small)
        {
            s_small =a[i];
        }
        if(a[i]>s_large && a[i]!=large)
        {
            s_large = a[i];
        }
    }

    return vector<int> {s_large, s_small};

}
