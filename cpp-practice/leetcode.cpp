// Question 136
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int val : nums)
        {
            ans = ans ^ val;
        }
        return ans;
    }
};
// question 169 moores voting algo
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int frq = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (frq == 0)
            {
                ans = nums[i];
            }
            if (ans == nums[i])
            {
                frq++;
            }
            else
            {
                frq--;
            }
        }
        return ans;
    }
};