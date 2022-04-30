//
// Created by trunk on 4/30/22.
//
#include <math.h>

namespace day1 {
    int func_if() {
        int score = 0;
        std::cout << "输入分数:";
        std::cin >> score;
        std::cout << "score = " << score << std::endl;
        if (score > 600) {
            std::cout << "恭喜考上一本" << std::endl;
        } else if (score > 500) {
            std::cout << "恭喜考上二本" << std::endl;
        } else if (score > 400) {
            std::cout << "恭喜考上三本" << std::endl;
        } else {
            std::cout << "不好意思，没有考上" << std::endl;
        }
        return 0;
    }

    int func_snamu(){
        // 三幕运算符
        // 在C++中三幕运算返回的是变量，可以继续赋值
        int a = 0;
        int b = 1;
        int c = 2;
        a = (b > c ? b : c); // 如果b大于c则返回b,如果b小于c则返回c
        std::cout << "a=" << a << std::endl;
        return 0;
    }

    int func_switch(){
        //if 和 switch 区别
        //switch 缺点，判断条件只能是整型或者字符型，不可以是一个区间
        //switch 优点，结构清晰，执行效率高
        int score = 0;
        std::cout << "请打分:";
        std::cin >> score;
        switch (score){
            case 10:
                std::cout << "经典电影" << std::endl;
                break;
            case 9:
                std::cout << "经典电影" << std::endl;
                break;
            default:
                std::cout << "垃圾电影" << std::endl;
                break;
        }
        return 0;
    }
}