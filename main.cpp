#include <iostream>

//C++环境中支持C代码,如果没有c支持会编译错误
extern "C"{
#include "main.h"
}

#include <string>
#include <string.h>

//Lsn3
//预处理命令include是文本替换，命名空间类似java的导入import，不替换了
using namespace std;
//定义命名空间
namespace Kog{
    void ko(){
        std::cout << "调用了命名空间Kog的方法" << std::endl;
    }
    namespace Dot{
        void dt(){
            std::cout << "调用了命名空间Dot的方法" << std::endl;
        }
    }
}
using namespace Kog;
using namespace Dot;


int main() {

    std::cout << "Lsn3-------------------" << std::endl;

    //::域作用符,类似java的this,<<相当于+拼接
    std::cout << "Hello" << " World!" << std::endl;


    show();

    std::string str = "阿猫";//在栈中定义的
    //定义命名空间后，可以省略掉std
    string *str2 = new string;//new出来要用指针接收，在堆中申请了内存，需要主动回收
    str2->append("儿");
    delete str2;
    int *arr = new int[20];
    delete[] arr;
    //函数载入栈中，创建的变量占用的栈内存在函数出栈时自动回收
    //new申请的堆内存，用delete回收，malloc动态申请的内存用free()回收并将变量置null

    //定义命名空间,using后才能简写
    Kog::ko();
    ko();

    Kog::Dot::dt();
    Dot::dt();
    dt();

    //字符串操作
    char buffer[20];
    char *p = "npc";
    strcpy(buffer,p);
    strcpy(buffer,"npcc");
    cout << "buffer:" << buffer << endl;
    cout << "buffer:" << buffer << "\n";

    //引用类型,调用函数传入age改变age=10，这里的age不变，因为内存地址变了，传入引用类型age2时，可以改变age，通过操作指针实现
    int age = 9;
    int& age2 = age;

    std::cout << "Lsn4-------------------" << std::endl;

    string s1 = "天行";
    char *s2 = "九歌";
    char s3[] = "电影";

    cout << s1 << "---" <<  s1.size() << "---" << s1.length() << "---" << &s1 << endl;
    cout << s2 << "---" <<  sizeof(s2) << "---" << strlen(s2) << "---" << &s2 << endl;
    cout << s3 << "---" <<  sizeof(s3) << "---" << strlen(s3) << "---" << &s3 << endl;




    //转as的JniApp项目



    return 0;
}