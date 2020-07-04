//
// Created by DCHEN on 2020/7/5.
//

#ifndef ALGORITHM_REGEXCPP_H
#define ALGORITHM_REGEXCPP_H

#include <string>
#include "algorithm.h"

class regexcpp {
public:
    regexcpp() = default;
    ~regexcpp() = default;

    void splitip(std::string ips);

    vector<int> getArray(string str);
};


#endif //ALGORITHM_REGEXCPP_H
