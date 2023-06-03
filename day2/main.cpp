//
// Created by trunk on 7/9/22.
//
#include <iostream>
#include "src/code_reference.cc"
#include "src/code_class.cc"
// 1.值递
void mySwap01(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

// 2.地址传递, 指针是用来接收地址的
void mySwap02(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 3.引用传递
// 用引用传递来替换指针传递(地址传递)，指针传递后，使用完需要程序员自行delete掉
// 指针对象，因为指针的值存储于栈区，需要程序员自行回收
// 引用就是起别名，int a = 10 ; int& a = 10；//别名也叫a
void mySwap03(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// 引用做函数的返回值
//1. 不要返回局部变量的引用
//int& test01(){
//  int a = 10; //局部变量存放在四区中的栈区,返回局部变量的引用，会造成栈溢出
//  return a;
//}

//2. 当函数返回引用时，函数的调用可以作为左值
int& test02(){
  static int a = 10; //静态变量，存放在全局区，全局区上的数据在程序结束后释放
  return a;
}

int main() {
  int a = 10;
  int b = 20;
  mySwap01(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  mySwap02(&a, &b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  mySwap03(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  // 4.引用、取地址都是用的&，要怎么区分
  // 和类型在一起的是引用，和变量在一起的是取址
  int a1 = 1;
  int& b1 = a1; // 引用，在等号的左边
  int *p = &a; // 取址，在等号的右边

//  int& ref = test01(); // 引用
//  std::cout << "ref = " << ref << std::endl;
//  std::cout << "ref = " << ref << std::endl;

  int& ref2 = test02();
  std::cout << "ref2 = " << ref2 << std::endl;
  std::cout << "ref2 = " << ref2 << std::endl;
  test02() = 1000; // 相当于a=1000
  std::cout << "ref2 = " << ref2 << std::endl;

//  code_ref::test();
//  code_class::testCircle();
//  code_class::testStudent();
//  code_class::testPerson();
//  code_class::testP3();
//  code_class::testPFour();
//  code_class::testPFive();
//  code_class::testPSix();
//  code_class::testPSevent();
//  code_class::testPEight();
//  code_class::testNine();
//  code_class::testPten();
//  code_class::testPEleven();
//  code_class::testPTwelve();
//  code_class::testThirteen();
//  code_class::testPFourteen();
//  code_class::testPFifteen();
//  code_class::testPSixteen();
  code_class::testP();

  return 1;
};