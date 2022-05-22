//
// Created by trunk on 5/14/22.
//

namespace day1 {
    int func_array() {
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
        int arr2[10] = {10, 20, 30, 40};
        for (int i : arr2) {
            std::cout << i << std::endl;
        }
        // 数据类型 数组名[] = {值1, 值2 ...};
        int arr3[] = {11, 22, 33, 44};
        for (int i: arr3) {
            std::cout << i << std::endl;
        }
        return 0;
    }

    int func_array_test1() {
        // 大小比较
        int arr[] = {300, 350, 200, 400, 50};
        int max_item = arr[0];
        for (int i : arr) {
            if (i > max_item) {
                max_item = i;
            }
        }
        std::cout << "最大值" << max_item << std::endl;
        return 0;
    }

    int func_array_test2() {
        // 数组反转
        int arr[] = {1, 2, 3, 4, 5};
        int start = 0;
        int end = sizeof(arr) / sizeof(arr[0]) - 1;  // 末尾下标
        while (start < end) {
            int tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
        std::cout << "反转结果: ";
        for (int i: arr) {
            std::cout << i;
        }
        std::cout << std::endl;
        return 0;
    }

    int bubble_sorting() {
        // 冒泡排序
        int arr[] = {5, 4, 3, 2, 1, 6};
        int end = sizeof(arr) / sizeof(arr[0]) - 1;
        for (int i = 0; i <= end; i++) {
            for (int j = i + 1; j <= end; j++) {
                if (arr[i] > arr[j]) {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        std::cout << "排序结果：";
        for (int i: arr) {
            std::cout << i;
        }
        std::cout << std::endl;
        return 0;
    }

    int array_two() {
        // 二维数组
        // 四重定义方式
        // 1. 数据类型 数组名[行数][列数]；
        int arr[2][3];  // 这里的两行三列是从1开始计数的
        arr[0][0] = 0;
        arr[0][1] = 1;
        arr[0][2] = 2;
        arr[1][0] = 10;
        arr[1][1] = 12;
        arr[1][2] = 13;
        std::cout << sizeof(arr) << std::endl;
        int row_num = sizeof(arr) / sizeof(arr[0]);
        int line_num = sizeof(arr[0]) / sizeof(arr[0][0]);
        std::cout << "row_num = " << row_num << ", line_num = " << line_num << std::endl;
        for (int i = 0; i < row_num; i++) {
            std::cout << "[";
            for (int j = 0; j < line_num; j++) {
                std::cout << arr[i][j] << ",";
            }
            std::cout << "]" << std::endl;
        }
        // 2. 数据类型 数组名[行数][列数] = { {数据1, 数据2,}, {数据3, 数据4} }
        int arr2[2][3] = {{4, 5, 6},
                          {7, 8, 9}};
        int row_num_2 = sizeof(arr2) / sizeof(arr2[0]);
        int line_num_2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
        std::cout << "row_num_2 = " << row_num_2 << ", line_num_2 = " << line_num_2 << std::endl;
        std::cout << "[";
        for (int i = 0; i < row_num_2; i++) {
            std::cout << "[";
            for (int j = 0; j < line_num_2; j++) {
                std::cout << arr2[i][j] << ",";
            }
            std::cout << "], ";
        }
        std::cout << "]" << std::endl;

        // 3. 数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4}
        int arr3[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        int row_num_3 = sizeof(arr3) / sizeof(arr3[0]);
        int line_num_3 = sizeof(arr3[0]) / sizeof(arr3[0][0]);
        std::cout << "row_num_3 = " << row_num_3 << ", line_num_3 = " << line_num_3 << std::endl;

        std::cout << "[";
        for (int i = 0; i < row_num_3; i++) {
            std::cout << "[";
            for (int j = 0; j < line_num_3; j++) {
                std::cout << arr3[i][j] << ",";
            }
            std::cout << "], ";
        }
        std::cout << "]" << std::endl;

        // 4. 数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4}
        int arr4[][5] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
        int row_num_4 = sizeof(arr4) / sizeof(arr4[0]);
        int line_num_4 = sizeof(arr4[0]) / sizeof(arr4[0][0]);
        std::cout << "row_num_4 = " << row_num_4 << ", line_num_4 = " << line_num_4 << std::endl;
        std::cout << "[";
        for (int i = 0; i < row_num_4; i++) {
            std::cout << "[";
            for (int j = 0; j < line_num_4; j++) {
                std::cout << arr4[i][j] << ", ";
            }
            std::cout << "], ";
        }
        std::cout << "]" << std::endl;

        // 二维数组名称用途
        // 1. 可以查看内存空间大小
        int arr5[2][3] = {{1, 2, 3},
                          {4, 5, 6}};
        std::cout << "arr5占用内存空间大小: " << sizeof(arr5) << std::endl;
        // 2. 获取二为数组的首地址
        std::cout << "arr5的首地址:" << (long) arr5 << std::endl;
        std::cout << "arr5的首行地址:" << (long) arr5[0] << std::endl;
        std::cout << "arr5的首行首个元素地址:" << (long) &arr5[0][0] << std::endl;
        return 0;
    }

    int arry_two_test() {
        int arr[3][3] = {
                {100, 100, 100},
                {90,  50,  70},
                {60,  70,  80},
        };
        std::string students[3] = {"张一", "张二", "张三"};
        int row_num = sizeof(arr) / sizeof(arr[0]);
        int line_num = sizeof(arr[0]) / sizeof(arr[0][0]);
        for (int i = 0; i < row_num; i++) {
            std::cout << students[i] << " 成绩: ";
            int _sum = 0;
            for (int j = 0; j < line_num; j++) {
                _sum += arr[i][j];
            }
            std::cout << _sum << std::endl;
        }
        return 0;
    }
}
