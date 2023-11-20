#include <iostream>
#include <vector> 
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right)
        {
            int middle = left + ((right - left) >> 1);
            if (nums[middle] < target) {
                left = middle + 1;
            }
            else if (nums[middle] > target) {
                right = middle - 1;
            }
            else {
                return middle;
            }        
        }
        return -1;
    }
};

int main() {
    vector<int> nums(5);
    int target;
    cout << "请输入一个5个元素升序整型数组：" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }
    cout << "请输入一个目标值：" << endl;
    cin >> target;
    Solution result;
    cout << "目标值所在的下标为：" << result.search(nums, target) << endl;

    return 0;
}