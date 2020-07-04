//
// Created by DCHEN on 2020/7/5.
//

#include "regexcpp.h"

void regexcpp::splitip(std::string ips) {

//    std::string ips("192.68.1.254 102.49.23.013 10.10.10.10 2.2.2.2 8.109.90.30");

    std::string ip = ips;

    std::cout << "原内容为：\n" << ip << std::endl;

// 1. 位数对齐
    ip = std::regex_replace(ip, std::regex("(\\d+)"), "00$1");

    std::cout << "位数对齐后为：\n" << ip << std::endl;

// 2. 有0的去掉
    ip = std::regex_replace(ip, std::regex("0*(\\d{3})"), "$1");

    std::cout << "去掉0后为：\n" << ip << std::endl;

// 3. 取出IP
    std::regex reg("\\s");
    std::sregex_token_iterator pos(ip.begin(), ip.end(), reg, -1);
    decltype(pos) end;

    std::set<std::string> ip_set;
    for (; pos != end; ++pos)
    {
        ip_set.insert(pos->str());
    }

    std::cout << "------\n最终结果：\n";

// 4. 输出排序后的数组
    for (auto elem : ip_set)
    {
        // 5. 去掉多余的0
        std::cout << std::regex_replace(elem,std::regex("0*(\\d+)"), "$1") << std::endl;
    }
}

vector<int> regexcpp::getArray(string str) {

    vector<int> nums;

    std::regex reg(",");

    std::sregex_token_iterator pos(str.begin(),str.end(),reg,-1);

    decltype(pos) end;

    for (; pos != end; ++pos)
    {
        int num ;
        string res= pos->str();
        stringstream ss;
        ss << res;
        ss >> num;

        nums.push_back(num);
    }

    return nums;
}
