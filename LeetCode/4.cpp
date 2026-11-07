class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> arr = {};
        int size;
        if (nums1.size() >= nums2.size()) size = nums1.size(); else size=nums2.size();
        for (int i=0; i < size; i++)
        {
            if (i < nums1.size())
            {
                arr.push_back(nums1[i]);
            }
            if (i < nums2.size())
            {
                arr.push_back(nums2[i]);
            }
        }
        std::sort(arr.begin(), arr.end());
        
        if (arr.size()%2==0)
        {
            int p = arr.size()/2;
            double ans = (arr[p] + arr[p-1]); 
            return ans/2;

        }
        else
        {
            int p = arr.size()/2;
            double ans = arr[p];
            return ans;
        }
    }
};
