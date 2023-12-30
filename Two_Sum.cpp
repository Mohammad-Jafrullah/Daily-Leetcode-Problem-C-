#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> hashMap = {};
    for (int i = 0; i < nums.size(); i++)
    {
        int equation = target - nums[i];
        for (int j = 0; j < hashMap.size(); j++)
        {
            if (nums[i] == hashMap[j])
                return {j, i};
        }
        hashMap.push_back(equation);
    }
    return {};
}

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\t";
    }
    return 0;
}
