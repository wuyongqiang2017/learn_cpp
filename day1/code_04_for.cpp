//
// Created by trunk on 5/2/22.
//

namespace day1 {
    int func_for() {
        // for(起始表达式;条件表达式;末尾循环体){循环语句;}
        for (int i = 0; i < 10; i++) {  // 相当于python的range
            std::cout << i << std::endl;
        }
        return 0;
    }

    int func_for_1() {
        // 练习1，输出1到100带7的数字及7的倍数
        for (int i = 1; i < 101; i++) {
            if (i % 7 == 0) {
                std::cout << i << std::endl;
            } else if (i % 10 == 7) {
                std::cout << i << std::endl;
            } else if (i / 10 % 10 == 7) {
                std::cout << i << std::endl;
            }
        }
        return 0;
    }

    int func_for_2() {
        //练习2，嵌套循环
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        return 0;
    }

    int func_for_3() {
        // 乘法口诀表
        for  (int i=1; i<10; i++){
            for (int j=1; j<=i; j++){
                std::cout << j << "*" << i << "=" << j*i << "\t";
            }
            std::cout << std::endl;
        }
        return 0;
    }
}
