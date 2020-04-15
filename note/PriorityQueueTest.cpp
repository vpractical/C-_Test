// TODO 优先级队列  容器
#pragma once

#include <iostream>
#include <string>

#include <queue> // C++ 容器中提供的
#include <vector>

using namespace std;

// TODO 为了学习，自定义方式
class MyType
{
public:
    int count;

    // 构造函数
    MyType(int count)
    {
        this->count = count;
    }
};

// 模范源码，定义自己的排序规则
struct MyTypeLess
{
    constexpr bool operator()(const MyType& _Left, const MyType& _Right) const
    {
        return (_Left.count > _Right.count);
    }
};

int main()
{
    // 默认采用此类型：less：把最大的值，放在最前面了
    /*priority_queue<int> priorityQueue;
    priorityQueue.push(6);
    priorityQueue.push(9);
    priorityQueue.push(1);

    // 把最前面的元素，给打印出来
    // priorityQueue.top() 默认把最大的放在最前面
    cout << priorityQueue.top() << endl;
    cout << priorityQueue.size() << endl;*/

    // TODO 传统方式
    // 优先级队列priority_queue，基于vector实现的
    // greater：把最小的值，放在最前面了
    // less：把最大的值，放在最前面了
    priority_queue<int, vector<int>, less<int>> priorityQueue2;
    priorityQueue2.push(6);
    priorityQueue2.push(9);
    priorityQueue2.push(1);
    cout << priorityQueue2.top() << endl;

    // TODO 自定义排序方式
    priority_queue<MyType, vector<MyType>, MyTypeLess> priorityQueue3;
    priorityQueue3.push(MyType(1));
    priorityQueue3.push(MyType(87784));
    priorityQueue3.push(MyType(6));
    cout << "priorityQueue3.top()：" << priorityQueue3.top().count << endl;

    return 0; // 贝尔实验室的时候规定，0代表执行
}

