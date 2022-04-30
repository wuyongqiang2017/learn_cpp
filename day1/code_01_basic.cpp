//
// Created by trunk on 4/16/22.
//
#include <string>

#define Week 7

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
        float f2 = 3e2; //3*10^2
        std::cout << "f2=" << f2 << std::endl;
        float f3 = 3e-2; //3*0.1^2
        std::cout << "f3=" << f3 << std::endl;

        //字符型
        //字符型变量用于显示单个字符, 占用1个字节
        char ch = 'a';
        std::cout << ch << std::endl;
        std::cout << sizeof(ch) << std::endl;
        //字符型变量对应ASCII编码
        std::cout << (int) ch << std::endl;

        //转义字符
        //换行符 \n
        std::cout << "hello\nworld!" << std::endl;

        //字符串
        //C风格字符串 char 变量名[] = "字符串值"
        char str[] = "hello world";//在字符串名后面加中括号
        std::cout << str << std::endl;
        //C++风格 string 变量名 = "字符串值"
        std::string str1 = "hello world";
        std::cout << str1 << std::endl;

        //布尔数据类型
        bool flag = true;
        std::cout << flag << std::endl;
        std::cout << sizeof(flag) << std::endl;

        //数据的输入
        //关键字cin cin >> 变量
        int a1 = 0;
        std::cout << "请给整型变量a1赋值:" << std::ends;
        std::cin >> a1;
        std::cout << "a1=" << a1 << std::endl;
        float ff1 = 3.12f;
        std::cout << "请给浮点型变量f1赋值:" << std::ends;
        std::cin >> ff1;
        std::cout << "ff1=" << ff1 << std::endl;
        char ch1 = 'a';
        std::cout << "请给字符型变量ch1赋值:";
        std::cin >> ch1;
        std::cout << "ch1=" << ch1 << std::endl;
        std::string str2 = "zhangsan";
        std::cout << "请给字符串str2赋值:";
        std::cin >> str2;
        std::cout << "str2 =" << str2 << std::endl;
        bool flag1;
        std::cout << "请给布尔类型flag赋值:";
        std::cin >> flag1;//非数字以外的字符为假，大于0的数字为真
        std::cout << "flag1 =" << flag1 << std::endl;

        //加减乘除
        int aa2 = 10;
        int bb2 = 3;
        std::cout << aa2 + bb2 << std::endl;
        std::cout << aa2 - bb2 << std::endl;
        std::cout << aa2 * bb2 << std::endl;
        std::cout << aa2 / bb2 << std::endl;
        std::cout << aa2 % bb2 << std::endl;
        double dd1 = 0.5;
        double dd2 = 0.22;
        std::cout << dd1 / dd2 << std::endl;
        std::cout << a1 / dd2 << std::endl;
        int a2 = 1;
        std::cout << a2++ << std::endl;
        std::cout << a2 << std::endl;
        std::cout << ++a2 << std::endl;
        // 前置递增
        int a3 = 10;
        a3++;
        std::cout << "a3 = " << a3 << std::endl;
        // 后置递增
        int b3 = 10;
        b3++;
        std::cout << "b3 = " << b3 << std::endl;
        // 前置递增和后置递增的区别
        // 前置递增：先让变量+1，然后再进行表达式运算
        int a4 = 10;
        int b4 = ++a4 * 10;
        std::cout << "a4 = " << a4 << std::endl;
        std::cout << "b4 = " << b4 << std::endl;
        // 后置递增：先进行表达式运算，后让变量+1
        int a5 = 10;
        int b5 = a5++ * 10;
        std::cout << "a5 = " << a5 << std::endl;
        std::cout << "b5 = " << b5 << std::endl;
        // 前置递减
        int a6 = 10;
        int b6 = --a6 + 10;
        std::cout << "a6 = " << a6 << std::endl;
        std::cout << "b6 = " << b6 << std::endl;
        // 后置递减
        int a7 = 10;
        int b7 = a7-- + 10;
        std::cout << "a7 = " << a7 << std::endl;
        std::cout << "b7 = " << b7 << std::endl;

        // 比较运算符
        // == != < >
        int a8 = 10;
        int b8 = 20;
        std::cout << (a8 < b8) << std::endl;  // 加括号是为了提高比较运算的优先级

        // 逻辑运算符
        // ！ && ||
        return 0;
    }

}