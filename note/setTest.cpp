// TODO ����ʽ����
#pragma once

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
    // 2.����ʽ���������ݱ�ʶ������ ��� ���� ��ȡ  Java map set
    set<int> set1 = {1,2,3,4,5};
    set1.insert(777);
    set1.insert(888);
    set1.insert(999);

    set1.insert(1); // �ظ���Ԫ����Ӳ���ȥ����Ϊset����������ظ���Ԫ��
    set1.insert(2); // �ظ���Ԫ����Ӳ���ȥ����Ϊset����������ظ���Ԫ��
    set1.insert(3); // �ظ���Ԫ����Ӳ���ȥ����Ϊset����������ظ���Ԫ��

    // set<string> set1;

    // ɾ��Ԫ��
    // set1.erase(1);

    // ��ô��Դ��
    // pair<set<int>::iterator, bool> pair1 = set1.insert(4564);

    // ��������
    set<int>::iterator beginResult = set1.begin(); // ָ�������еĵ����Ԫ�ص���˼
    set<int>::iterator endResult = set1.end(); // ָ�������е�ĩβԪ�ص���һ��Ԫ��
    // ��ָ�� �����
    // cout << *beginResult+3 << endl;

    // for ����
    for (; beginResult != set1.end() ; beginResult++) {
        // * ȡ�������������ڴ��ַ��������Ӧ�ľ���Ԫ��
        cout << "����set it:" << *beginResult << endl;
        // printf("%#x\n", &beginResult);
    }

    // TODO ���� Vector
    vector<string> vectorStr;
    vectorStr.push_back("11");
    vectorStr.push_back("22");
    vectorStr.push_back("33");
    vectorStr.push_back("44");
    vectorStr.push_back("55");

    vector<string>::iterator it = vectorStr.begin();
    for (; it < vectorStr.end() ; it++) {
        cout << "����Vector��" << *it << endl;
    }

    return 0;
}







