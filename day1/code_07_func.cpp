//
// Created by trunk on 5/22/22.
//

namespace day1 {
    int add(int num1, int num2) {
        int sum = num1 + num2;
        return sum;
    }

    // 值传递
    void swap(int num1, int num2) {
        // 默认是值传递，基础类型(不可变类型)的参数传递与python一致
        // 值传递时，行参和实参时两个东西
        std::cout << "交换前：" << std::endl;
        std::cout << "\tnum1 = " << num1 << std::endl;
        std::cout << "\tnum2 = " << num2 << std::endl;
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
        std::cout << "交换后：" << std::endl;
        std::cout << "\tnum1 = " << num1 << std::endl;
        std::cout << "\tnum2 = " << num2 << std::endl;
    }
};
