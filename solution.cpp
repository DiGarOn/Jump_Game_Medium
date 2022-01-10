#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int min_len = 1;
        for(int i = nums.size()-2; i >= 0; i--) {
            if(nums[i] >= min_len) min_len = 0;
            min_len++;
        }
        return(nums[0] >= min_len || nums.size() == 1);
        
        
        
    }
} A;

int main() {
    vector<int> nums = {2,3,1,1,4};
    //true
    cout << boolalpha << A.canJump(nums);
}