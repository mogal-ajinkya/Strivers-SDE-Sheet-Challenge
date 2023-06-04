// https://leetcode.com/problems/set-matrix-zeroes/description/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rs = matrix.size();
        int cs = matrix[0].size();

        set<int> r;
        set<int> c;

        for(int i = 0 ; i < rs ; i++)
        {
            for(int j = 0 ; j < cs ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }

        for(auto it : r)
        {
            for(int i = 0 ; i < cs ;i++)
            {
                matrix[it][i] = 0;
            }
        }
        for(auto it : c)
        {
            for(int i = 0 ; i < rs ;i++)
            {
                matrix[i][it] = 0;
            }
        }

    }
};