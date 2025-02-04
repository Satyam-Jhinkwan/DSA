#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> mp;     // HashMap to store {number, index}

    for (int i=0 ; i<nums.size();i++){
        int complement = target - nums[i];  // find the number needed to make target

        if(mp.find(complement) != mp.end()){
            return {mp[complement],i};  //return indices if compliment is found
        }

        mp[nums[i]] = i;    //store current number and its index
    }

    return {};  //return empty if no solution
}

int main(){ 
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums,target);
    cout<<"Indexes: "<<result[0]<<", "<<result[1]<<endl;

    return 0;
}