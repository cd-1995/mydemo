//
// Created by DCHEN on 2020/6/28.
//

#ifndef STL_OFFER_H
#define STL_OFFER_H

#include "algorithm.h"

/*
 * leetcode题库
 * https://leetcode-cn.com/problemset/lcof/
 */

class Solution {

public:
    Solution();
    ~Solution();

    /*
     * 数组中的重复数字
     */
    int findReaptNumber(vector<int>& nums);
    int findReaptNumber2(vector<int>& nums);

    /*
     * 二维数组中查找
     */
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target);

};


#endif //STL_OFFER_H
