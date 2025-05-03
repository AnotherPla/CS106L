 #include <iostream>
 #include <math.h>
 #include <vector>
 // note the ampersand!
void shift(std::vector<std::pair<int,int>> &nums) {
    for (auto &[num1,num2] : nums) {
        num1 ++;
        num2 ++;
    }
    for (size_t i = 0; i < nums.size(); i++) {
        nums[i].first++;
        nums[i].second++;
    }
}
int main() {
    std::vector<std::pair<int,int>> nums = {{1,2},{3,4}};
    shift(nums);
 }