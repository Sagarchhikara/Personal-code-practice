// Question 136
// class Solution
// {
// public:
//     int singleNumber(//vector<int> &nums)
//     {
//         int ans = 0;
//         for (int val : nums)
//         {
//             ans = ans ^ val;
//         }
//         return ans;
//     }
// };
// // question 169 moores voting algo
// class Solution
// {
// public:
//     int majorityElement(//vector<int> &nums)
//     {
//         int frq = 0, ans = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (frq == 0)
//             {
//                 ans = nums[i];
//             }
//             if (ans == nums[i])
//             {
//                 frq++;
//             }
//             else
//             {
//                 frq--;
//             }
//         }
//         return ans;
//     }
// };
// // question stock selling and buy
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int buy = prices[0];
//         int profit = 0;
//         for (int i = 1; i < prices.size(); i++)
//         {
//             if (prices[i] < buy)
//             {
//                 buy = prices[i];
//             }
//             else if (prices[i] - buy > profit)
//             {
//                 profit = prices[i] - buy;
//             }
//         }
//         return profit;
//     }
// };