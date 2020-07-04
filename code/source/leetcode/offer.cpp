//
// Created by DCHEN on 2020/6/28.
//

#include "offer.h"

Solution::Solution() {}
Solution::~Solution() {}

int Solution::findReaptNumber(vector<int> &nums) {

    int size = nums.size();

    int *arr = new int[size]();

    int res = 0;

    for (int i = 0; i < size; ++i) {
        if(arr[nums[i]] <= 0){
            arr[nums[i]] += 1;
        } else{
            res = nums[i];
            break;
        }
             
    }

    return res;

}

int Solution::findReaptNumber2(vector<int> &nums) {

    int res = -1;

    int size = nums.size();

    int i = 0;

    while (i < size){

        if (nums[i] == i){
            i++;
            if (i >= size){
                return -1;
            }
        }else if (nums[nums[i]] == nums[i]){
            return nums[i];
        }

        res = nums[nums[i]];
        nums[nums[i]] = nums[i];
        nums[i] = res;
    }

    return -1;

}

bool Solution::findNumberIn2DArray(vector<vector<int>>& matrix, int target) {

    bool flag = false;

    

    return flag;
}