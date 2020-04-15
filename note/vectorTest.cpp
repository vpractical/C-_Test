// TODO vector����

#pragma once

#include <iostream>
#include <string>

#include <vector> // // C++ �������ṩ��

using namespace std;

// ��취�����������⣬ ȫ��
vector<string> allName;

void test01()
{
    allName.push_back("1111");
    allName.push_back("2222");
    allName.push_back("3333");

    allName.clear(); // ��� �ڴ�ռ� ����ռ�õ�  ��ô�죿

    // �滻�ķ�ʽ�������������
    vector<string> tempVector; // ������ʱ����Ŀ�ģ�����Ϊ�˽�� �� �滻ȫ����������ȫ��������ռ���ڴ�ռ�
    tempVector.swap(allName); // ��ȫ�ֵ� ȫ���ƶ� ����ʱ == ��ȫ�ֵĸ�������
} // ����һ��ջ  tempVector�������ˣ��ͱ�֤�ˣ�ȫ�ֺ���ʱȫ���������

int main() {

    // C++  ����������Ϊ��������
    // 1.����ʽ������Ԫ�ص������ϵ����Ԫ�ر���û���κι�ϵ������������ӵ�ʱ���µ�˳���µ�����
    // vector    priority_queue
    vector<int> vec01(1); // ����һ��Ԫ�صĿռ�
    vector<string> vec02(100, "������"); // ����100��Ԫ�ؿռ䣬ֵ����=�������ڡ�

    vector<string> vec03;
    // ���Ԫ��
    vec03.push_back("������");
    vec03.push_back("���־�");
    vec03.push_back("ʷ����");
    // ɾ��Ԫ��
    vec03.pop_back(); // ɾ�����µģ������ӵ�Ԫ�أ�ɾ����ʷ���㡱

    // ��ȡԪ��
    string value = vec03.at(0);
    value = vec03[1];
    cout << value << endl;

    // ���Ԫ��
    vec03.clear();
    // vec03.erase(vec03.begin(), vec03.end());

    // �Ƿ������
    if (vec03.empty()) {
        cout << "Ԫ�ر����" << endl;
    } else {
        cout << "Ԫ��û�б����" << endl;
    }

    // �����к����ص�����
    // ��������ռ�õ��ڴ�ռ䣬��ֻ��������
    cout << "��Vector������ռ���ڴ�ռ���:" << vec03.capacity() << endl;

    // ȫ��������ʾ
    test01();

    return 0;
} // main ����ִ����ϣ�������ջ��������ڴ棬ȫ���ͷ�