//
// Created by trunk on 5/22/22.
//

namespace day1 {
    struct Student {
        // 成员
        std::string name;
        int age{};
        int score{};
    } s3;

    struct Teacher {
        int id;
        std::string name;
        int age;
        struct Student stu;
    };

    struct Student1 {
        std::string sName;
        int score;
    };

    struct Teacher1 {
        std::string tName;
        struct Student1 sArray[5];
    };


    int func_struct() {
        // 8 结构体
        // 8.1 结构体基本概念
        // 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

        // 8.2 结构体定义和使用
        // 语法：struct 结构体名 {结构体成员列表};

        // 通过结构体创建变量的方式有三种：

        // - struct 结构提名 变量名 = {成员1值, 成员2值}
        // - 定义结构体时顺便创建变量
        // 8.2.1 struct 结构体名 变量名
        struct Student s1;
        s1.name = "wyq";
        s1.age = 18;
        s1.score = 100;
        std::cout << s1.name << s1.age << s1.score << std::endl;
        // 8.2.2 struct 结构体名 变量名 = {...}
        struct Student s2 = {"wyq1", 19, 101};
        std::cout << "sizeof = " << sizeof(s2) << std::endl;
        // 8.2.3 在定义结构体时顺便创建结构体变量
        s3 = {"wyq3", 20, 102};
        std::cout << s3.name << s3.age << s3.score << std::endl;

        // 8.3 结构体数组
        struct Student stuArray[3] = {
                {"长三", 18, 100},
                {"长四", 18, 100},
                {"长五", 18, 100},
        };
        stuArray[1].name = "wyq";

        // 8.4 结构体指针
        // 作用：通过指针访问结构体中的成员
        // 利用操作符 -> 可以通过结构体指针访问结构体属性
        struct Student s5 = {"wyq5", 25, 105};
        // 通过指针指向结构体
        struct Student *p = &s5;
        // 通过指针访问结构体
        p->name = "hhh";
        std::cout << "name = " << s5.name << " age = " << s5.age << " score = " << s5.score << std::endl;

        // 8.5 结构体嵌套结构体
        // Teacher t = {1, "杨老师", 18, {"wyq", 18, 60}};
        Teacher t = {1, "杨老师", 18};
        Student stu = {"wyq", 18, 60};
        t.stu = stu;
        std::cout << "学生姓名：" << t.stu.name << std::endl;
        return 0;
    }

    // 8.6 结构体做函数参数
    // 作用：将结构体作为参数向函数中传递
    // 传递两种方式：
    // - 值传递
    void printStudent(Student stu) {
        stu.age = 28;
        std::cout << "函数内部>> \n\tname: " << stu.name << "\n\tage:" << stu.age << "\n\tscore:" << stu.score << std::endl;
    }

    // - 地址传递
    void printStudent1(Student *stu) {
        stu->age = 28;
        std::cout << "函数内部>> \n\tname: " << stu->name << "\n\tage:" << stu->age << "\n\tscore:" << stu->score
                  << std::endl;
    }

    // 8.7 结构体中const的使用场景
    void printStudent2(const Student *stu) {
        // 使用const修饰指针参数，就可以限制指针瞎修改值
        // stu->age = 28;
        std::cout << "函数内部>> \n\tname: " << stu->name << "\n\tage:" << stu->age << "\n\tscore:" << stu->score
                  << std::endl;
    }

    // 8.8 结构体案例
    // 8.8.1 案例1
    void struct_test(Teacher1 tAarry[], int len){
        for (int i=0;i<len;i++){
            tAarry[i].tName = "t" + std::to_string(i);
            std::cout << "teacher " << tAarry[i].tName << std::endl;
            for (int j=0;j<5;j++){
                tAarry[i].sArray[j] = {"wyq"+std::to_string(j),(int)(random() % 60+40)};
                std::cout << "\tstudent " << "wyq"+std::to_string(j) << " score:" << (int)(random() % 60+40) << std::endl;
            }
        }
    }

    struct Hero{
        std::string name;
        int age;
        std::string sex;
    };

    void struct_test2(Hero heroArray[], int len){
        for (int i=0;i<len;i++){
            for (int j=i+1;j<len;j++){
                if (heroArray[i].age > heroArray[j].age){
                    Hero tmp = heroArray[i];
                    heroArray[i] = heroArray[j];
                    heroArray[j] = tmp;
                }
            }
        }
    }
}