//https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > ans;


        for(int i = 0 ; i < numRows ; i++)
        {
            vector<int> temp;
            temp.push_back(1);
            if(i == 0)
            {
                ans.push_back(temp);
                continue;
            }
            if(i == 1)
            {
                temp.push_back(1);
                ans.push_back(temp);
                continue;
            }
            for(int j = 0 ;  j < i-1 ; j++)
            {
                int a = ans[i - 1][j] + ans[i - 1][j+1] ;
                temp.push_back(a);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }

};