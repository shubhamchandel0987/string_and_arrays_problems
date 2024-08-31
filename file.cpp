//leetcode problem no 4

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
       vector<int> ans;
       for(int i=0;i<nums1.size();i++)
       {
        ans.push_back(nums1[i]);
       }
       for(int i=0;i<nums2.size();i++)
       {
        ans.push_back(nums2[i]);
       }
       sort(ans.begin(),ans.end());
       
       int len=ans.size();
       float res;
       int mid;
       if(len%2==0)
       {
            mid=len/2;
            res=float(ans[mid]+ans[mid-1])/2;
       }
       else{
            mid=len/2;
            res=ans[mid];
       }
       return res;
    }

//leetcode problem no 3

int lengthOfLongestSubstring(string s) 
    {
        int start=0;
        int max_len=0;
        vector<int> last_ind(256,-1);
        
        for(int end=0;end<s.size();end++)
        {
            if(last_ind[s[end]]>=start)
            {
               start=last_ind[s[end]]+1;
            }
            last_ind[s[end]]=end;
            max_len=max(max_len,end-start+1);
        }
        return max_len;
    }