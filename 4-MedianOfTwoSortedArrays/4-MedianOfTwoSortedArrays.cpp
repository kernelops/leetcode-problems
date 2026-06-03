// Last updated: 6/3/2026, 11:35:03 PM
class Solution {
public:
    void mergeSort(vector<int> &arr, int st, int end)
    {
        if (st<end)
        {
            int mid = st + (end-st)/2;
            mergeSort(arr, st, mid); //left-half
            mergeSort(arr, mid+1, end); //right-half
            merge(arr, st, mid, end);
        }
    }
        
    void merge(vector<int> &arr, int st, int mid, int end)
    {
        vector<int> temp;
        int i=st, j=mid+1;
        while (i<=mid && j<=end)
        {
            if (arr[i] <= arr[j])
                temp.push_back(arr[i++]);
            else
                temp.push_back(arr[j++]);
        }
        while (i<=mid)
            temp.push_back(arr[i++]);
        while (j<=end)
            temp.push_back(arr[j++]);
            
        for (int i=0; i<temp.size(); i++)
            arr[st+i] = temp[i];
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        //Merging 2 vectors
        vector<int> merged;
        merged.reserve(nums1.size() + nums2.size());
        for (int i=0; i<nums1.size(); i++)
            merged.push_back(nums1[i]);
        for (int i=0; i<nums2.size(); i++)
            merged.push_back(nums2[i]);
        
        // Sorting the Merged vector-Merge Sort
        int st=0, end=merged.size()-1;
        
        mergeSort(merged, st, end);
        int n = merged.size();
        if (n % 2 != 0)
            return merged[n / 2];  // Fix: correct index for odd length
        else
            return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    }
};