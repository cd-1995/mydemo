//
// Created by DCHEN on 2020/7/2.
//

#include "actuator.h"
#include "offer.h"
#include "regexcpp.h"

void actuator::findReaptNumber(string path) {

    Solution slt;
    regexcpp regex;

    YAML::Node config = YAML::LoadFile(path);
    string snum = config["reaptnumber"].as<string>();

    vector<int> nums = regex.getArray(snum);

    int res = slt.findReaptNumber2(nums);

    cout << "重复数字为：" << res << endl;
}

void actuator::findReaptNumber2() {

    Solution slt;

    vector<int> nums = {2, 3, 1, 0, 2, 5, 3};

    int res = slt.findReaptNumber2(nums);

    cout << "重复数字为：" << res << endl;
}

void actuator::splitip(string path) {
    regexcpp regex;
    YAML::Node config = YAML::LoadFile(path);
    string ips = config["ip"].as<string>();
    regex.splitip(ips);
}
