//
// Created by trunk on 11/19/22.
//

namespace code_ref {
// 引用的本质：引用的本质在C++内部实现是一个指针常量
void func(int &ref) {
  ref = 100; // ref 是引用，&跟类型放在一起
}

int test() {
  int a = 10;

  // 自动转换为 int*const ref = &a;
  // 指针常量：指针指向不可改，也说明为什么引用不可更改
  int &ref = a;
  ref = 20; // 内部发现ref是引用,自动帮我们转换为: *ref = 20

  std::cout << "a = " << a << std::endl;
  std::cout << "ref = " << ref << std::endl;

  code_ref::func(a);
  std::cout << "a = " << a << std::endl;
  return 0;
}

// 常量引用：
// 作用：常量引用主要来修饰形参，防止误操作
// 在函数形参列表中，可以加const修饰形参，防止形参改变实参
void showValue(const int& v){
  // v+= 10;
  std::cout << v << std::endl;
}
}