#include <iostream>

#define MAX 1000

struct Person {
    std::string m_Name;
    int m_Sex;
    int m_Age;
    std::string m_Phone;
    std::string m_Addr;
};

struct Addressbooks {
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu() {
    std::cout << "\t1、添加联系人" << std::endl;
    std::cout << "\t2、显示联系人" << std::endl;
    std::cout << "\t3、删除联系人" << std::endl;
    std::cout << "\t4、查找联系人" << std::endl;
    std::cout << "\t5、修改联系人" << std::endl;
    std::cout << "\t6、清空联系人" << std::endl;
    std::cout << "\t0、退出通讯录" << std::endl;
}

void showPerson(Addressbooks *abs) {
    if (abs->m_Size == 0) {
        std::cout << "current record is empty" << std::endl;
        return;
    }
    std::cout << "name|"
              << "sex|"
              << "age|"
              << "phone|"
              << "addr" << std::endl;
    for (int i = 0; i < abs->m_Size; i++) {
        std::cout << abs->personArray[i].m_Name << "|";
        std::cout << (abs->personArray[i].m_Sex == 1 ? "man" : "woman") << "|";
        std::cout << abs->personArray[i].m_Age << "|";
        std::cout << abs->personArray[i].m_Phone << "|";
        std::cout << abs->personArray[i].m_Addr;
        std::cout << std::endl;
    }
}

void addPerson(Addressbooks *abs) {
    if (abs->m_Size >= MAX) {
        std::cout << "size over error" << std::endl;
        return;
    } else {
        std::string name;
        std::cout << "name>>:";  // todo if str while loopforever error
        std::cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        std::cout << "sex:" << std::endl;
        std::cout << "\t1--man" << std::endl;
        std::cout << "\t2--woman" << std::endl;
        int sex = 0;
        while (true) {
            std::cout << "sex>>:";  // zhe li shu cuo hou hui jin ru si xun huan
            std::cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            std::cout << sex << "   input error, pls again." << std::endl;
        }

        std::cout << "age>>:";
        int age = 0;
        std::cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        std::cout << "phone num>>:";
        std::string phone;
        std::cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        std::cout << "addr>>:";
        std::string addr;
        std::cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        abs->m_Size++;

//        std::cout << "add successful!!" << std::endl;
//        std::cout << "input any word go on";
//        std::cin.get();
//        std::system("clear");
    }
}

int isExist(Addressbooks *abs, std::string name) {
    for (int i = 0; i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            return i;
        }
    }
    return -1;
}

void deletePerson(Addressbooks *abs) {
    std::cout << "pls input delete persion name:";
    std::string name;
    std::cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1) {
        return;
    }
    for (int i = ret; i < abs->m_Size; i++) {
        abs->personArray[i] = abs->personArray[i + 1];
    }
    abs->m_Size--;
    std::cout << "delete success" << std::endl;
}

void findPersion(Addressbooks *abs) {
    std::cout << "pls input need find person nanme";
    std::string name;
    std::cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1) {
        std::cout << "not found!" << std::endl;
        return;
    }
    std::cout << "name: " << abs->personArray[ret].m_Name << "\t";
    std::cout << "age: " << abs->personArray[ret].m_Age << "\t";
    std::cout << "sex: " << abs->personArray[ret].m_Sex << "\t";
    std::cout << "addr: " << abs->personArray[ret].m_Addr << std::endl;
}

void modifyPerson(Addressbooks *abs) {
    std::cout << "pls input need modify person name";
    std::string name;
    std::cin >> name;
    int ret = isExist(abs, name);
    if (ret == -1) {
        std::cout << "not found!" << std::endl;
        return;
    }
    std::cout << "start modify " << abs->personArray[ret].m_Name;
    Person *person = &abs->personArray[ret];
    std::cout << "pls input name: ";
    std::string _name;
    std::cin >> _name;
    person->m_Name = _name;
    std::cout << "pls input sex:";
    int _sex;
    std::cin >> _sex;
    person->m_Sex = _sex;
    std::cout << "pls input age";
    int _age;
    std::cin >> _age;
    person->m_Age = _age;
}

void cleanPerson(Addressbooks *abs) {
    abs->m_Size = 0;
    std::cout << "clean success!" << std::endl;
}

int main() {
    Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true) {
        showMenu();
        std::cout << "input select>>:";
        std::cin >> select;
        switch (select) {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                showPerson(&abs);
                break;
            case 3:
                deletePerson(&abs);
                break;
            case 4:
                findPersion(&abs);
                break;
            case 5:
                modifyPerson(&abs);
                break;
            case 6:
                cleanPerson(&abs);
                break;
            case 0:
                std::cout << "欢迎下次使用" << std::endl;
                return 0;
            default:
                break;
        }
    }

    return 0;
}