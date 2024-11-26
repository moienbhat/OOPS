#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int>& nums, vector<int>& subset, int index, int target) {
    if (target == 0) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
        return;
    }
    if (index >= nums.size() || target < 0) {
        return;
    }
    
    subset.push_back(nums[index]);
    findSubsets(nums, subset, index + 1, target - nums[index]);
    
    subset.pop_back();
    findSubsets(nums, subset, index + 1, target);
}

int main() {
    vector<int> nums = {2, 3, 5};
    int target = 5;
    vector<int> subset;
    
    cout << "Subsets of array that sum up to " << target << " are:" << endl;
    findSubsets(nums, subset, 0, target);
    
    return 0;
}
