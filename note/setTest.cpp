// TODO 关联式容器
#pragma once

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main()
{
    // 2.关联式容器：根据标识，决定 添加 或者 获取  Java map set
    set<int> set1 = {1,2,3,4,5};
    set1.insert(777);
    set1.insert(888);
    set1.insert(999);

    set1.insert(1); // 重复的元素添加不进去，因为set不允许添加重复的元素
    set1.insert(2); // 重复的元素添加不进去，因为set不允许添加重复的元素
    set1.insert(3); // 重复的元素添加不进去，因为set不允许添加重复的元素

    // set<string> set1;

    // 删除元素
    // set1.erase(1);

    // 怎么看源码
    // pair<set<int>::iterator, bool> pair1 = set1.insert(4564);

    // 遍历操作
    set<int>::iterator beginResult = set1.begin(); // 指向容器中的第零个元素的意思
    set<int>::iterator endResult = set1.end(); // 指向容器中的末尾元素的下一个元素
    // 用指针 搞出来
    // cout << *beginResult+3 << endl;

    // for 遍历
    for (; beginResult != set1.end() ; beginResult++) {
        // * 取出迭代器里面内存地址所关联对应的具体元素
        cout << "遍历set it:" << *beginResult << endl;
        // printf("%#x\n", &beginResult);
    }

    // TODO 遍历 Vector
    vector<string> vectorStr;
    vectorStr.push_back("11");
    vectorStr.push_back("22");
    vectorStr.push_back("33");
    vectorStr.push_back("44");
    vectorStr.push_back("55");

    vector<string>::iterator it = vectorStr.begin();
    for (; it < vectorStr.end() ; it++) {
        cout << "遍历Vector：" << *it << endl;
    }

    return 0;
}







