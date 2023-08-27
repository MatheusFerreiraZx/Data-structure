#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> indices;

    for (int index = 0; index < nums.size(); index++)
    {
      int complement = target - nums[index];

      if (indices.find(complement) != indices.end())
      {
        return {indices[complement], index};
      }

      indices[nums[index]] = index;
    }

    return {};
  }
};
