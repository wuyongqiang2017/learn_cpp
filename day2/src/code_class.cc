//
// Created by trunk on 11/20/22.
//
#include <iostream>
namespace code_class {
const double PI = 3.14;
class Circle {
  // 访问权限
  // 公共权限
public:
  // 属性
  int m_r;
  // 行为
  double calculateZC() { return 2 * PI * m_r; }
};

void testCircle() {
  // 实例化
  Circle c1;
  c1.m_r = 10;
  std::cout << "ZC = " << c1.calculateZC() << std::endl;
}

class Student {
public:
  std::string name;
  int id;

  void showStudent() { std::cout << "name: " << name << std::endl; }
};

void testStudent() {
  Student s1;
  s1.name = "wyq";
  s1.id = 1;
  s1.showStudent();
}

// 封装的第二大作用是控制权限
// 访问权限有以下3种
// 公共权限 public    成员  类内可以访问  类外可以访问
// 保护权限 protected 成员  类内可以访问  类外不可以访问 子类可以访问
// 私有权限 private   成员  类内可以访问  类外不可以访问 子类不可以访问
class Person {
public:
  // 公共权限
  std::string name = "xxx";

protected:
  std::string car;

private:
  std::string password;

public:
  void func() {
    name = "wyq";
    car = "拖拉机";
    password = "123";
  }
};

void testPerson() {
  Person p1;
  p1.func();
  Person p2;
  std::cout << "p2.name = " << p2.name << std::endl;
  std::cout << "p1.name = " << p1.name << std::endl;
}

// struct与class的区别
// struct默认权限为公共
// class 默认权限为私有
class ClassC {
  int a; // 默认是私有权限
};
struct StructC {
  int a; //默认是公共权限
};

//成员属性设置为私有好处
// 1.可以自己控制读写权限
// 2.对于写可以检测数据的有效性
class Ps {
private:
  std::string name;
  int age;
  std::string IDCard;

public:
  std::string GetName() { return name; }
  void SetName(std::string _name) { name = _name; }
};

// 拆分头文件
// 头文件中只写声明，最顶部要写 #pragma once 只加载一次
// 头文件依赖其余类时，include其余类的头文件即可
// 源码中只需要有方法实现，不需要再出现class, 但是要通过namespace指明方法的归属
// 源码中需要 include 对应的头文件

// 对象的初始化与清理
// 构造函数与析构函数
// 构造函数的分类及调用
// 两种分类方式:
// 按参数分类：有参构造和无参构造
// 按类型分为：普通构造与拷贝构造
// 三种调用方式
// 括号法
// 显示法
// 隐式转换法
class P3 {
public:
  int age;
  P3() { std::cout << "P3 无参构造函数调用" << std::endl; }
  P3(int a) {
    age = a;
    std::cout << "P3 有参构造函数调用" << std::endl;
  }
  P3(const P3 &p) {
    age = p.age;
    std::cout << "P3 拷贝构造函数调用" << std::endl;
  }

public:
  ~P3() { std::cout << "P3 析构函数调用" << std::endl; }
};

void testP3() {
  // 括号调用
  P3 p;
  P3 p2(10);
  P3 p3(p2);
  std::cout << "p2.age = " << p2.age << std::endl;
  std::cout << "p3.age = " << p3.age << std::endl;
  // 显示法
  P3 pp1;
  P3 pp2 = P3(10);
  P3 pp3 = P3(pp2);
  // 匿名
  P3(10); // 当前行执行结束对象被销毁
  // 注意：不要用拷贝构造函数初始化逆命对象，因为P3(pp3) == P3 p3,
  // 会出现重定义的异常
  // P3(pp3);

  // 隐式转换法
  P3 ppp3 = 10;
  P3 ppp4 = ppp3;
};

// 拷贝构造函数的调用时机
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
// 2. 值传递的方式给函数参数传值
// 3. 以值方式返回局部对象

class PFour {
public:
  int age;
  PFour() { std::cout << "PFour无参构造" << std::endl; }
  PFour(int _age) {
    age = _age;
    std::cout << "PFour有参构造" << std::endl;
  }
  PFour(const PFour &p) {
    age = p.age;
    std::cout << "PFour拷贝构造" << std::endl;
  }
  ~PFour() { std::cout << "PFour析构函数" << std::endl; }
};

void doWork(PFour p) { // 值传递的本质就是拷一个临时的副本,此时会触发拷贝
  std::cout << p.age << std::endl;
};

PFour doWork2() {
  PFour p1;
  std::cout << (int *)&p1 << std::endl;
  return p1;
}

void testPFour() {
  //  PFour pppp1(20);
  //  PFour pppp2(pppp1);  // 第1种
  //  doWork(pppp1); // 第2种
  PFour pp = doWork2(); //第3种, 为啥这里没有执行拷贝函数
  std::cout << (int *)&pp << std::endl;
};

// 构造函数的调用原则
// 默认情况下，C++编译器至少给一个类添加3个函数
// 1. 默认构造函数(无参，函数体为空)
// 2. 默认析构函数(无参，函数体为空)
// 3.默认拷贝构造函数，对属性进行值拷贝
//构造函数调用规则如下：
//如果用户定义有参数构造函数，C++不在提供默认无参构造，但是会提供默认拷贝构造
//如果用户定义拷贝构造函数，C++不在提供其他构造函数

//深拷贝与浅拷贝
//浅拷贝带来的问题: 堆区的内存重复释放会有异常
class PFive {
public:
  int age;
  int *height;
  PFive() { std::cout << "PFive默认构造函数" << std::endl; }
  PFive(int _age, int _height) {
    age = _age;
    height = new int(_height);
    std::cout << "PFive有参构造函数" << std::endl;
  }
  PFive(const PFive &p) {
    std::cout << "PFive拷贝构造函数的使用" << std::endl;
    age = p.age;
    height = new int(*p.height); // 深拷贝
  }
  ~PFive() {
    std::cout << "析构函数" << std::endl;
    if (height != NULL) { // 不是空指针
      delete height;
      height = NULL;
    }
  }
};

void testPFive() {
  PFive p1(18, 193);
  PFive p2(p1);
  std::cout << "p2的年龄为: " << p2.age << " p2.height" << *p2.height
            << std::endl;
}

// 初始化列表
// C++提供了初始化列表语法，用来初始化属性
class PSix {
public:
  int a;
  int b;
  int c;
  //传统初始化
  //  PSix(int _a, int _b, int _c){
  //    a = _a;
  //    b = _b;
  //    c = _c;
  //  }

  // 列表初始化
  //  PSix() : a(10), b(20), c(30) {}
  PSix(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}
};

void testPSix() {
  //  PSix p(1, 2, 3);
  //  PSix p;
  PSix p(4, 5, 6);
  std::cout << p.a << p.b << p.c << std::endl;
}

// 类对象作为类的成员
// C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
class Phone {
public:
  std::string name;
  Phone(std::string _name) {
    name = _name;
    std::cout << "Phone 构造" << std::endl;
  }
  ~Phone() { std::cout << "Phone 析构" << std::endl; }
};

class PSeven {
public:
  std::string name;
  Phone phone;
  PSeven(std::string name_, std::string pName_) : name(name_), phone(pName_) {
    std::cout << "PSeven 构造" << std::endl;
  }
  ~PSeven() { std::cout << "PSeven 析构" << std::endl; }
};

void testPSevent() {
  // 被引用类的构造函数先与引用类的构造函数
  // 引用类的析构函数先与被引用类的析构函数
  PSeven p("xx", "oo");
  std::cout << p.name << std::endl;
}

/* 4.2.8 静态成员变量
 * 静态成员变量就是在成员变量和成员函数前加上关键字static，称为静态成员
 * 静态成员分为：
 * - 静态成员变量
 *    - 所有对象共享同一份数据，
 *    - 在编译阶段分配内存
 *    - 类内声明，类外初始化
 * - 静态成员函数
 *    - 所有对象共享同一个函数
 *    - 静态成员函数只能访问静态成员变量
 */

class PEight {
public:
  static int a; // 静态成员
  static void func() {
    std::cout << "static func" << std::endl;
    std::cout << "static func a = " << a << std::endl;
  }

private:
  static int b; // 有权限的静态成员变量
};

int PEight::a = 100; // 类内声明，类外初始化
int PEight::b = 1000;

void testPEight() {
  PEight p;
  std::cout << p.a << std::endl;

  PEight p1;
  p1.a = 200; // 更改同一块内存
  std::cout << p.a << std::endl;

  std::cout << PEight::a << std::endl; // 可以通过类访问静态成员变量

  //  std::cout << PEight::b << std::endl; //类外访问不到私有静态成员变量
  p1.func();
  PEight::func();
}

/* 4.3 C++对象模型和this指针
 * 4.3.1 成员变量和成员函数分开存储
 * 在C++中类内的成员变量和成员函数分开存储
 * 只有非静态成员变量才是绑定到对象上的
 * */

class PNine {
  //  int a;
  //  int b;
  float c;
  double d;
  static int e;
};
void testNine() {
  PNine p;
  // 空对象占用内存空间1字节
  // C++ 编译器会给每个空对象分配1个字节的内存，为了空对象的位置
  std::cout << "size of p: " << sizeof(p) << std::endl;
};

/* 4.3.2 this 指针概念
 * C++中成员变量和成员函数是分开存储的
 * 每一个非静态成员函数只有一份函数实例，也就是说多个同类型的对象会共用一块代码
 * this 就是用来区分是哪个对象在调用该成员函数
 * this 指针指向被调用的成员函数所属的对象
 * this 指针用途：
 *  - 当形参和成员变量同名时，可用this指针来区分
 *  - 在类的非静态成员函数中返回对象本身，可以用return *this
 * */

class PTen {
public:
  int age;
  PTen(int age) { this->age = age; }
  PTen(const PTen &p) { age = p.age; }
  PTen &AddAge(const PTen &p) {
    age += p.age;
    return *this;
  }
};

void testPten() {
  PTen p(10);
  std::cout << "p.age = " << p.age << std::endl;

  PTen p1 = p;

  PTen p2(p);

  p1.AddAge(p).AddAge(p);
  std::cout << "p1.age = " << p1.age << std::endl;
}

/* 4.3.3 空指针访问成员函数
 * C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
 * 如果用到this指针，需要加以判断保证代码的健壮性
 * */

class PEleven {
public:
  void showName() { std::cout << "showName func" << std::endl; }
  void showAge() {
    if (this == NULL) {
      return;
    }
    std::cout << "showAge func " << age << std::endl;
  }
  int age;
};

void testPEleven() {
  PEleven *p = NULL;
  p->showName();
  p->showAge();
}

/* 4.3.4 const修饰成员函数
 * 常函数：
 * - 成员函数加const后我们称为常函数
 * - 常函数内不可以修改成员属性
 * - 成员属性声明时加关键字mutable后，在常函数中依然可以修改
 *
 * 常对象：
 * - 声明对象前加const称该对象为常对象
 * - 常对象只能调用常函数
 *
 * this 指针常量
 * 指针常量的const时修饰指针的，指针常量的指向不可以被修改，但是值可以修改
 * 加const后，连值都不可修改了
 * */

class PTwelve {
public:
  void showName() const {
    //    name = "wyq";
    age = 20;
  };
  std::string name;
  mutable int age = 0;
  //  mutable int age;  # 需要先初始化
};

void testPTwelve() {
  //  PTwelve p;
  //  p.showName();

  const PTwelve p1;
  p1.showName();
  std::cout << p1.age << std::endl;
}

/* 友元
 * 在类外访问类中的私有属性
 * 友元的关键字为 friend
 * 友元的三种实现：
 * - 全局函数做友元
 * - 类做友元
 * - 成员函数做友元
 * */

class PThirteen {
  friend void func(PThirteen *p);

private:
  int age;

public:
  std::string name;
  PThirteen(int age) { this->age = age; };
};

void func(PThirteen *p) {
  std::cout << "p.name = " << p->name << std::endl;
  std::cout << "p.age = " << p->age << std::endl;
}

void testThirteen() {
  PThirteen p(18);
  p.name = "wyq";
  func(&p);
}

class PFourteen {
  friend class TestFriend;

private:
  int age;

public:
  std::string name;
  PFourteen(int age) { this->age = age; }
};

class TestFriend {
public:
  void func(PFourteen *p) {
    std::cout << "p.age = " << p->age << std::endl;
    std::cout << "p.name = " << p->name << std::endl;
  }
};

void testPFourteen() {
  PFourteen p(3);
  p.name = "wyq";
  TestFriend f;
  f.func(&p);
}

class TTT;
class PFifteen {
public:
  PFifteen();
  void visit();
  void visit2();
  TTT *ttt;
};
class TTT {
  friend void PFifteen::visit();

public:
  std::string name;
  TTT(std::string name);

private:
  int age;
};

TTT::TTT(std::string name) {
  this->name = name;
  this->age = 20;
}

PFifteen::PFifteen() { ttt = new TTT("wyq"); }

void PFifteen::visit() {
  std::cout << "ttt.name = " << ttt->name << std::endl;
  std::cout << "ttt.age = " << ttt->age << std::endl;
};

void PFifteen::visit2() {
  std::cout << "ttt.name = " << ttt->name << std::endl;
  //  std::cout << "ttt.age = " << ttt->age << std::endl;
};

void testPFifteen() {
  PFifteen p;
  p.visit();
}

// 左移运算符重载
class PSixteen {
  friend std::ostream &operator<<(std::ostream &cout, PSixteen &p);

public:
  // 通常不会利用成员函数重载 << 运算符，因为无法实现 cout
  // 在左侧。只能利用全局函数
  //  void operator<<(){
  //
  //  }
  PSixteen(std::string name, int age) {
    this->name = name;
    this->age = age;
  }

private:
  std::string name;
  int age;
};
std::ostream &operator<<(std::ostream &cout, PSixteen &p) {
  cout << "name=" << p.name << ", age=" << p.age;
  return cout;
}

// 函数调用运算符重载
class MyPrint {
public:
  void operator()(std::string test) { std::cout << test << std::endl; };
};

// 继承

class Base {
public:
  void info() { std::cout << "Base info" << std::endl; };
  int a;

protected:
  int b;

private:
  int c;
};

class A : public Base {
  // public:
  //  void func(){
  //    a = 10;
  //    b = 20;
  //    c = 30;
  //  }
};

// 继承方式
// 公共继承: 继承属性保持原样
// 保护继承: 父类中 public、protected 均变为本类的 protected 级别属性
// 私有继承: 父类中 public、protected 均变为本类的 private 级别属性
// 注意： 父类中的 private 级别属性不能被继承

// 继承中先调用父类的构造函数再调用子类的构造函数，下调用子类析构函数再调用父类构造函数

class Base1 {
public:
  Base1() { this->age = 100; };
  void func() { std::cout << "Base1.FUNC" << std::endl; }
  int age;
};

class A1 : public Base1 {
public:
  A1() { this->age = 200; };
  void func() { std::cout << "A1.FUNC" << std::endl; }
  int age;
};

/*
 * 多态的基本概念
 * 多态分为两类
 *  - 静态多态：函数重载和运算符重载属于静态多态，复用函数名
 *  - 动态多态：派生类和虚函数实现运行时多态
 * 静态多态和动态多态区别
 *  - 静态多态函数地址早绑定 - 编译阶段确定函数地址
 *  - 动态多态函数地址晚绑定 - 运行阶段确定函数地址
 * */

class Animal {
public:
  // 加virtual会地址晚绑定
  virtual void run() { std::cout << "Animal running" << std::endl; };
};

class Cat : public Animal {
public:
  void run() { std::cout << "Cat running" << std::endl; };
};

void testManyT(Animal &animal) { animal.run(); };

void testPSixteen() {
  PSixteen p("wyq", 18);
  std::cout << p << std::endl;

  MyPrint myprint;
  myprint("helloasdfasdf");

  A a;
  //  a.info();
  std::cout << "sizeof a: " << sizeof(a) << std::endl;
  A1 a1;
  Base1 b1;
  std::cout << "a1.age: " << a1.age << std::endl;
  std::cout << "b1.age: " << b1.age << std::endl;
  std::cout << "Base b1.age: " << a1.Base1::age << std::endl;

  a1.func();
  a1.Base1::func();

  Cat cat;
  testManyT(cat);
  Animal animal;
  testManyT(animal);
}

// 利用多态实现抽象类
class AbstractCalculator {
public:
  virtual int getResult() { return 0; };
  int m_Num1;
  int m_Num2;
};

class AddCalculator : public AbstractCalculator {
public:
  int getResult() { return m_Num1 + m_Num2; };
};

class SubCalculator : public AbstractCalculator {
public:
  int getResult() { return m_Num1 - m_Num2; };
};

void testP() {
  AbstractCalculator *abc = new AddCalculator;
  abc->m_Num1 = 10;
  abc->m_Num2 = 10;
  std::cout << "m_Num1 + m_Num2 = " << abc->getResult() << std::endl;
  delete abc;

  abc = new SubCalculator;
  abc->m_Num1 = 100;
  abc->m_Num2 = 50;
  std::cout << "m_Num1 - m_Num2 = " << abc->getResult() << std::endl;
  delete abc;
}

class singleton {
private:
  singleton() {}
  static singleton *p;

public:
  static singleton *instance();
};

singleton *singleton::p = nullptr;

singleton *singleton::instance() {
  if (p == nullptr)
    p = new singleton();
  return p;
}

class Sigaction {
public:
  Sigaction() = default;
  ~Sigaction() = default;
  Sigaction(const Sigaction &) = delete;
  Sigaction &operator=(const Sigaction &) = delete;
  static Sigaction *instance(bool create_if_need = true) {
    static Sigaction *instance = nullptr;
    if (!instance && create_if_need) {
      static std::once_flag flag;
      std::call_once(flag, [&] { instance = new (std::nothrow) Sigaction(); });
    }
    return instance;
  }

  static std::string GetName() { return "singleton"; }
};

}