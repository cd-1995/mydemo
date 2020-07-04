
#include "controller/actuator.h"
#include <time.h>

#define FILEPATH "C:\\Code\\Project\\Algorithm\\config\\path.yaml"

int main(){

    clock_t  t; //定义时钟变量t
    t = clock();//调用前时间

    actuator act;

    YAML::Node config = YAML::LoadFile(FILEPATH);

    cout << endl << "====================重复数字=======================" << endl << endl;

    act.findReaptNumber(config["lcpath"].as<string>());

    act.findReaptNumber2();

    cout << endl << "====================分割IP========================" << endl << endl;

    act.splitip(config["ippath"].as<string>());    //使用正则表达式分割IP

//    YAML::Node config = YAML::LoadFile("C:\\Code\\Project\\Algorithm\\config\\leetcode.yaml");
//
//    cout << config << endl;

    t = clock() - t;

    cout << endl << "程序执行时间为" << ((float) t)/ CLOCKS_PER_SEC << "s" << endl;

}