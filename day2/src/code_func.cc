//
// Created by trunk on 11/19/22.
//
namespace code_func {
// 支持默认值参数
// 默认值参数的右侧只能是默认值参数
// 函数声明与函数实现只能有一个地方有默认值，不然编译时会报错
int func(int a, int b = 10, int c = 10) { return a + b + c; };
}