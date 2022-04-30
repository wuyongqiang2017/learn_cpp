//
// Created by trunk on 4/30/22.
//

//
// Created by trunk on 4/30/22.
//
#include <math.h>

namespace day1 {
    int func_while(){
        //while 循环
        int num = 0;
        while (num < 10){
            std::cout << "num = " << num << std::endl;
            ++num;
        }
        return 0;
    }

    int func_csz(){
        unsigned seed;
        seed = time(0);
        srand(seed);
        int num = rand() % 100 + 1;
        std::cout << "num = " << num << std::endl;
        while (1){
            int cin_num = 0;
            std::cin >> cin_num;
            if (cin_num == num){
                std::cout << "猜对了" << std::endl;
                break;
            } else if (cin_num < num){
                std::cout << "猜小了" << std::endl;
            } else if (cin_num > num){
                std::cout << "猜大了" << std::endl;
            }
        }
        return 0;
    }

    int func_do_while(){
        // do...while循环于while循环的区别
        // do...while会先执行一次循环语句
        int num = 0;
        do{
            std::cout << "num = " << num << std::endl;
            num++;
        }
        while (num<10);
        return 0;
    }

    int func_sxh(){
        // 求3位数字中的水仙花数
        int num = 100;
//        do{
//            int n1 = num / 100;
//            int n2 = (num-n1*100) / 10;
//            int n3 = (num-n1*100 - n2*10);
//            int sum = std::pow(n1,3) + std::pow(n2,3) + std::pow(n3, 3);
//            if (sum == num){
//                std::cout << n1 << n2 << n3 << std::endl;
//            }
//            num++;
//        }
        do{
            int n1 = num / 100;  // 百位
            int n2 = (num / 10) % 10; // 十位
            int n3 = num % 10; // 个位
            int sum = std::pow(n1,3) + std::pow(n2,3) + std::pow(n3, 3);
            if (sum == num){
                std::cout << n1 << n2 << n3 << std::endl;
            }
            num++;
        }
        while (num<1000);
        return 0;
    }
}