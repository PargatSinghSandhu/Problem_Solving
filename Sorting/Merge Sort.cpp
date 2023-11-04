




void merge(vector<int> &arr, int low, int mid, int high ) 
{
    
    
    vector<int> temp;
    //int index = 0;

    int left = low;
    int  right = mid+1;
    while(left<=mid && right<=high) //transferring elements of two parts of the array into one
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        } 
        else
        {
            temp.push_back(arr[right]);
            right++;
        }  
        
    }
    while(left<=mid) // transferring those leftover element into temp
    {
        temp.push_back(arr[left]);
        left++;
        //index++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
        //index++;
    }

    for(int i = low ; i<=high;i++)
    {
        arr[i] = temp[i-low];
    }

}

void mSort(vector<int> &arr, int low , int high)
{
    if(low>=high) return;
    int mid = (low+high)/2;
    mSort(arr, low, mid);
    mSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector < int > & arr, int n)
{   
    int l = 0, r = n-1;
    mSort(arr, l, r);
}







