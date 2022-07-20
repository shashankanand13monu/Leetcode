int merge(vector<int>& nums,int l,int mid,int r)
{
    int cnt=0;
    int j=mid+1;
    for(int i=l;i<=mid;i++)
    {
        while(j<=r and nums[i]> 2LL* nums[j])
            j++;
        cnt= cnt + (j-(mid+1));  
        
    }
    vector<int> temp;
    int left=l;
    int right= mid+1;
    
    while(left<=mid and right<=r)
    {
        if(nums[left]<=nums[right])
        {
            temp.push_back(nums[left++]);
        }
        else
        {
            temp.push_back(nums[right++]);

        }
    }
    
    while(left<=mid)
    {
        temp.push_back(nums[left++]);
    }
    
    while(right<=r)
    {
       temp.push_back(nums[right++]);

    }
    
    for(int i=l;i<=r;i++)
    {
        nums[i]=temp[i-l];
    }
    return cnt;
}

int mergesort(vector<int>& nums,int l,int r)
{
    if(l>=r)
        return 0;
    int mid= (l+r)/2;
    int inv= mergesort(nums,l,mid);
    inv+= mergesort(nums,mid+1,r);
    inv+= merge(nums,l,mid,r);
    return inv;
}

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
        
    }
};