// TODO ���ȼ�����  ����
#pragma once

#include <iostream>
#include <string>

#include <queue> // C++ �������ṩ��
#include <vector>

using namespace std;

// TODO Ϊ��ѧϰ���Զ��巽ʽ
class MyType
{
public:
    int count;

    // ���캯��
    MyType(int count)
    {
        this->count = count;
    }
};

// ģ��Դ�룬�����Լ����������
struct MyTypeLess
{
    constexpr bool operator()(const MyType& _Left, const MyType& _Right) const
    {
        return (_Left.count > _Right.count);
    }
};

int main()
{
    // Ĭ�ϲ��ô����ͣ�less��������ֵ��������ǰ����
    /*priority_queue<int> priorityQueue;
    priorityQueue.push(6);
    priorityQueue.push(9);
    priorityQueue.push(1);

    // ����ǰ���Ԫ�أ�����ӡ����
    // priorityQueue.top() Ĭ�ϰ����ķ�����ǰ��
    cout << priorityQueue.top() << endl;
    cout << priorityQueue.size() << endl;*/

    // TODO ��ͳ��ʽ
    // ���ȼ�����priority_queue������vectorʵ�ֵ�
    // greater������С��ֵ��������ǰ����
    // less��������ֵ��������ǰ����
    priority_queue<int, vector<int>, less<int>> priorityQueue2;
    priorityQueue2.push(6);
    priorityQueue2.push(9);
    priorityQueue2.push(1);
    cout << priorityQueue2.top() << endl;

    // TODO �Զ�������ʽ
    priority_queue<MyType, vector<MyType>, MyTypeLess> priorityQueue3;
    priorityQueue3.push(MyType(1));
    priorityQueue3.push(MyType(87784));
    priorityQueue3.push(MyType(6));
    cout << "priorityQueue3.top()��" << priorityQueue3.top().count << endl;

    return 0; // ����ʵ���ҵ�ʱ��涨��0����ִ��
}

