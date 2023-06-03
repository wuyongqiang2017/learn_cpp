//
// Created by trunk on 5/22/22.
//

/*
 * 指针的基本概念
 * 指针的作用： 可以通过指针间接访问内存
 * - 内存编号是从0开始记录的，一般用十六进制数字显示
 * - 可以利用指针变量保存地址
 * */

namespace day1 {
    int pointer() {
        int a = 10;
        // 1.指针定义的语法： 数据类型 *指针变量名
        int *p;  // (int *) 要放在一起理解
        // 让指针记录变量a的地址
        p = &a;
        std::cout << "a的地址为：" << &a << std::endl;
        std::cout << "指针p为：" << p << std::endl;
        // 2.使用指针
        // 可以通过解引用的方式来找到指针指向的内存
        // 指针前加 * 代表解引用，找到指针指向的内存中的数据
        // 可以把*的操作里接程取内存地址上的值
        *p = 1000;
        std::cout << "a = " << a << std::endl;
        std::cout << "*p = " << *p << std::endl;

        // 3. 指针所占用内存空间
        // 指针在32位系统下占4个字节
        // 指针在64位系统下占8个字节
        std::cout << "sizeof(int *) = " << sizeof(int *) << std::endl;
        std::cout << "sizeof(p) = " << sizeof(p) << std::endl;
        std::cout << "sizeof(*p) = " << sizeof(*p) << std::endl;  // *p 就不是指针类型了，而是该内存地址上存放的数据类型

        // 4. 空指针和野指针
        // 空指针和野指针都不是我们申请的空间，因此不要访问
        // 空指针: 指针变量指向内存中编号为0的空间
        // 用途: 初始化指针变量
        // 注意: 空指针指向的内存是不可以访问的
//        int *p1 = NULL;
        // 访问空指针报错, 但是测试没有报错
        //0~255之间的内存编号是系统占用的，因此不可以访问
//        std::cout << "*p1 = " << *p1 << std::endl;  // TODO 没有异常,但是执行不下去了
        //野指针: 指针变量指向非法的内存空间
//        int *p2 = (int *)0x1100;
//        std::cout << "*p2 = " << *p2 << std::endl;
//        std::cout << "执行结束" << std::endl;

        // 5. const修饰指针
        int a2 = 10;
        int b2 = 10;
        // 5.1 const修饰指针--常量指针
        // 常量指针特点：指针的指向可以修改，但是指针指向的值不可以改
        const int *p2 = &a2;
        // 修改指针的指向
        p2 = &b2;
        // 修改指针的值, 有异常
        // *p2 = 1000;
        std::cout << "&a2 = " << &a2 << std::endl;
        std::cout << "&b2 = " << &b2 << std::endl;
        std::cout << "p2 = " << p2 << std::endl;
        //5.2 const修饰常量(感觉应该是变量)--指针常量(指针后面跟常量)
        // 指针常量特点：指针的指向不可以改，但是指针指向的值可以改
        int *const p3 = &a2;
        // 修改指针的指向，异常
        // 📛p3 = &b2;
        // 修改指针的值
        *p3 = 1000;
        std::cout << "*p3 = " << *p3 << std::endl;
        // 5.3 const 修饰指针和常量
        const int *const p4 = &a2;
        // 修改指针的指向，异常
        // p4 = &b2;
        // 修改指针的值，异常
        // *p4 = 1000;

        // 6. 指针与数组
        // 6.1 利用指针访问数组中的元素
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::cout << "第一个元素为: " << arr[0] << std::endl;
        int *p6 = arr;
        // int * 代表指针类型，p6 是变量名，p6的值是数组的内存地址，arr 也是内存地址，arr感觉就等价于p6
        // 所以 arr[0] 可以取到值，p6[0]也可以取道值
        // *p6 是获取内存地址上的值，只能拿到一个4字节的元素，因为此数组都是int32类型，其实*p6相当于p6[0], p6++ 相当于 p6[0+1]
        std::cout << "利用指针访问第一个元素: " << *p6 << std::endl;  //
        std::cout << "利用指针访问第一个元素: " << p6[0] << std::endl;  // p6是内存地址，内存地址[] 也是一种取值方式
        p6++; // 向右偏移4个字节, 数组指针指向的是数组的第一个元素的地址，通过指针获取的值也是一个单独的元素，不是一个数组整体
        std::cout << "利用指针访问第二个元素: " << *p6 << std::endl;
        for (int i = 0; i < 10; i++) {
            std::cout << *p6 << std::endl;
            p6++;
        }

        int *arr1 = arr;
        std::cout << "arr1[3] = " << arr1[3] << std::endl;

        return 0;
    }

    // 7. 指针和函数
    // 利用指针作函数参数，可以修改实参的值
    // 值传递，不会改变函数外部的参数
    void swap2(int a, int b) {
        int tmp = a;
        a = b;
        b = tmp;
        std::cout << "a = " << a << ", b = " << b << std::endl;
    }

    // 地址传递, 会改变函数外部的参数
    void swap3(int *a, int *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
        std::cout << "*a = " << *a << ", *b = " << *b << std::endl;;
    }

    // 8. 指针、数组、函数
    // 需求：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//    void bubbleSort(int arr[], int len){
    void bubbleSort(int * arr, int len){
        for (int i=0; i<len ; i++){
            for (int j=i+1; j<len; j++){
                if (arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
}