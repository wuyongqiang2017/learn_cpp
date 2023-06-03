#include <iostream>
#include "day1/code_01_basic.cpp"
#include "day1/code_02_if.cpp"
#include "day1/code_03_while.cpp"
#include "day1/code_04_for.cpp"
#include "day1/code_05_goto.cpp"
#include "day1/code_06_array.cpp"
#include "day1/code_07_func.cpp"
#include "day1/code_08_pointer.cpp"
#include "day1/code_09_struct.cpp"
#include "headers/swap1.h" // 存在问题，需要修改CMakeLists.txt
#include <memory>
#include <vector>

// new
int *func() {
  // new return pointer type
  int *p = new int(10);  // int * a=10
  return p;

}

void swap() {

}

int main() {
//    day1::func();
//    day1::func_if();
//    day1::func_snamu();
//    day1::func_switch();
//    day1::func_while();
//    day1::func_csz();
//    day1::func_do_while();
//    day1::func_sxh();
//    day1::func_for();
//    day1::func_for_1();
//    day1::func_for_2();
//    day1::func_for_3();
//    day1::func_goto();
//    day1::func_array();
//    day1::func_array_test1();
//    day1::func_array_test2();
//    day1::bubble_sorting();
//    day1::array_two();
//    day1::arry_two_test();

  // 函数调用
//    int num1 = 1;
//    int num2 = 2;
//    int sum = day1::add(num1, num2);
//    std::cout << sum << std::endl;
//
//    day1::swap(num1, num2);
//    std::cout << "外部真实值：" << std::endl;
//    std::cout << "\tnum1 = " << num1 << std::endl;
//    std::cout << "\tnum2 = " << num2 << std::endl;

  //1. 创建.h后缀名的头文件
  //2. 创建.cpp后缀名的源文件
  //3. 头文件中写函数的声明
  //4. 在源文件中写函数的定义
//    swap1(num1, num2);
//    day1::pointer();
//    int num1 = 1;
//    int num2 = 2;
//    day1::swap3(&num1, &num2);
//    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

//    int arr[5] = {5,4,3,2,1};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    day1::bubbleSort(arr, len);
//    std::cout << "[";
//    for (int i : arr){
//        std::cout << i << ", ";
//    }
//    std::cout << "]";
//    day1::func_struct();
//    day1::Student stu = {"wyq", 18, 100};
//    day1::printStudent(stu);
//    std::cout << "函数外部>> \n\tname: " << stu.name << "\n\tage:" << stu.age << "\n\tscore:" << stu.score << std::endl;
//    day1::printStudent1(&stu);
//    std::cout << "函数外部>> \n\tname: " << stu.name << "\n\tage:" << stu.age << "\n\tscore:" << stu.score << std::endl;

//    std::srand(time(0));
//    day1::Teacher1 tArray[3] = {};
//    day1::struct_test(tArray, 3);
//    std::cout << tArray[0].tName << tArray[0].sArray[4].sName << std::endl;

//    swap1(5,5);

//    struct day1::Hero heroArray[5] = {
//            {"刘备", 23, "男"},
//            {"关羽", 22, "男"},
//            {"张飞", 20, "男"},
//            {"赵云", 21, "男"},
//            {"貂蝉", 19, "女"},
//    };
//    int heroArrayLen = sizeof(heroArray) / sizeof(heroArray[0]);
//    day1::struct_test2(heroArray, heroArrayLen);
//    for (const day1::Hero & hero: heroArray){
//        std::cout << hero.name << hero.age << hero.sex << std::endl;
//    }
  int *p = func();
  std::cout << *p << std::endl;
  std::cout << *p << std::endl;
  std::cout << *p << std::endl;
  std::cout << *p << std::endl;

// reference
  int a = 10;
  int &b = a;
  int c = 30;
//    int &b = c;
  b = 20;
  std::cout << b << a << std::endl;

// reference args

// shared_ptr
  std::shared_ptr<int> p1;
  //接受命令行参数

  // 创建一个向量存储
  std::vector<int> vec;
  //  int i;
  // 显示vec的原始大小
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  std::cout << vec.empty() << std::endl;

  for (int i : vec){
    std::cout << i << std::endl;
  }

  return 1;
}