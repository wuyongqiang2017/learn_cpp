//
// Created by trunk on 4/16/22.
//
#include <iostream>

namespace day1 {

    int func() {
        //打印消息
        std::cout << "Hello, World!" << std::endl;

        //变量
        int a = 10;
        std::cout << "a=" << a << std::endl;

        //常量: #define宏常量, const修饰的变量
        std::cout << "一周总共有" << Week << "天" << std::endl;
        const int month = 30;
        std::cout << "一个月有" << month << "天";

        //关键字

        //整形: short(2) int(4) long(4) long long(8)
        //sizeof 求数据类型占用内存大小
        short num1 = 10;
        std::cout << "short占用内存空间为:" << sizeof(num1) << std::endl;

        //实型(浮点型)
        //默认情况下输出一个小数，会显示6位有效数字
        float f1 = 3.1415926; // 默认为双精度
        float d1 = 3.1415926f; // 单精度
        std::cout << "f1=" << f1 << std::endl;
        std::cout << "d1=" << d1 << std::endl;
        std::cout << "float 占用内存空间为:" << sizeof(f1) << std::endl;
        std::cout << "double 占用内存空间为:" << sizeof(d1) << std::endl;
        // 科学技术法
        float f2 = 3e2;
        std::cout << "f2=" << f2 << std::endl;
        return 0;
    }

}