//
// Created by trunk on 5/14/22.
//

namespace day1{
    int func_array(){
        // 数组是一块连续的内存空间；数据类型相同；
        // 一维数组
        // 一维数组定义的三种方式
        // 数据类型 数组名[数组长度];
        int arr1[10];
        arr1[0] = 1;
        arr1[1] = 2;
        arr1[9] = 10;
        std::cout << arr1[0] << std::endl;
        std::cout << arr1[1] << std::endl;
        std::cout << arr1[2] << std::endl;
        // 数组类型 数组名[数组长度] = {值1, 值2 ...};
        int arr2[10] = {10,20,30,40};
        for (int i : arr2){
            std::cout << i << std::endl;
        }
        // 数据类型 数组名[] = {值1, 值2 ...};
        int arr3[] = {11, 22, 33, 44};
        for (int i: arr3){
            std::cout << i << std::endl;
        }
        return 0;
    }
}
