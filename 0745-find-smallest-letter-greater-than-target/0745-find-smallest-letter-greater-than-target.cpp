class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1;
        int ans =0;

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(letters[mid]==target)
            {
                l= mid+1;
            }
            else if(letters[mid]< target)
            {
                l = mid+1;
            }
            else
            {
                r= mid-1;
                ans = mid;
            }
            
        }
        return letters[ans];
        
    }
};