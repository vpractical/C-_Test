#include <iostream>

//C++������֧��C����,���û��c֧�ֻ�������
extern "C"{
#include "main.h"
}

#include <string>
#include <string.h>

//Lsn3
//Ԥ��������include���ı��滻�������ռ�����java�ĵ���import�����滻��
using namespace std;
//���������ռ�
namespace Kog{
    void ko(){
        std::cout << "�����������ռ�Kog�ķ���" << std::endl;
    }
    namespace Dot{
        void dt(){
            std::cout << "�����������ռ�Dot�ķ���" << std::endl;
        }
    }
}
using namespace Kog;
using namespace Dot;


int main() {

    std::cout << "Lsn3-------------------" << std::endl;

    //::�����÷�,����java��this,<<�൱��+ƴ��
    std::cout << "Hello" << " World!" << std::endl;


    show();

    std::string str = "��è";//��ջ�ж����
    //���������ռ�󣬿���ʡ�Ե�std
    string *str2 = new string;//new����Ҫ��ָ����գ��ڶ����������ڴ棬��Ҫ��������
    str2->append("��");
    delete str2;
    int *arr = new int[20];
    delete[] arr;
    //��������ջ�У������ı���ռ�õ�ջ�ڴ��ں�����ջʱ�Զ�����
    //new����Ķ��ڴ棬��delete���գ�malloc��̬������ڴ���free()���ղ���������null

    //���������ռ�,using����ܼ�д
    Kog::ko();
    ko();

    Kog::Dot::dt();
    Dot::dt();
    dt();

    //�ַ�������
    char buffer[20];
    char *p = "npc";
    strcpy(buffer,p);
    strcpy(buffer,"npcc");
    cout << "buffer:" << buffer << endl;
    cout << "buffer:" << buffer << "\n";

    //��������,���ú�������age�ı�age=10�������age���䣬��Ϊ�ڴ��ַ���ˣ�������������age2ʱ�����Ըı�age��ͨ������ָ��ʵ��
    int age = 9;
    int& age2 = age;

    std::cout << "Lsn4-------------------" << std::endl;

    string s1 = "����";
    char *s2 = "�Ÿ�";
    char s3[] = "��Ӱ";

    cout << s1 << "---" <<  s1.size() << "---" << s1.length() << "---" << &s1 << endl;
    cout << s2 << "---" <<  sizeof(s2) << "---" << strlen(s2) << "---" << &s2 << endl;
    cout << s3 << "---" <<  sizeof(s3) << "---" << strlen(s3) << "---" << &s3 << endl;




    //תas��JniApp��Ŀ



    return 0;
}