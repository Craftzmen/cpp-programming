#include <iostream>
#include <vector>

using namespace std;

void calculateWays(vector<int>& nums, int index, int desiredSum, int currentSum, int &resultCount)
{
    int length = nums.size();
    if (currentSum == desiredSum)
    {
        resultCount++;
    }
    if (index == length)
    {
        return;
    }

    for (int i = index; i < length; i++)
    {
        calculateWays(nums, i + 1, desiredSum, currentSum + nums[i], resultCount);
        calculateWays(nums, i + 1, desiredSum, currentSum - nums[i], resultCount);
    }
}

int main() {
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(-6);
    nums.push_back(2);

    int sumTarget1 = 6;
    int sumTarget2 = 4;
    int countForTarget1 = 0;
    int countForTarget2 = 0;

    calculateWays(nums, 0, sumTarget1, 0, countForTarget1);
    calculateWays(nums, 0, sumTarget2, 0, countForTarget2);

    cout << "Given the array: { ";

    for (int num : nums) {
        cout << num << " ";
    }
    cout << "}";

    cout << endl;

    cout << "No of ways to reach target " << sumTarget1 << ": " << countForTarget1 << endl;
    cout << "No of ways to reach target " << sumTarget2 << ": " << countForTarget2 << endl;

    return 0;
}
