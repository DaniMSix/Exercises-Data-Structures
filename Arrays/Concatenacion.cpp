class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int tam = nums.size();

        vector<int> ans(tam * 2);
        int i = 0;
        while (i < nums.size())
        {
            ans[i] = nums[i];
            i++;
        }

        int i2 = 0;
        while (i < tam)
        {
            ans[i] = nums[i2];
            i++;
            i2++;
        }

        return ans;
    }
};