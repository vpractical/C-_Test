// TODO vector容器

#pragma once

#include <iostream>
#include <string>

#include <vector> // // C++ 容器中提供的

using namespace std;

// 想办法让容器有问题， 全局
vector<string> allName;

void test01()
{
    allName.push_back("1111");
    allName.push_back("2222");
    allName.push_back("3333");

    allName.clear(); // 清空 内存空间 还是占用的  怎么办？

    // 替换的方式：来解决此问题
    vector<string> tempVector; // 定义临时容器目的：就是为了解决 、 替换全局容器，让全局容器不占用内存空间
    tempVector.swap(allName); // 把全局的 全部移动 给临时 == 把全局的给回收了
} // 函数一弹栈  tempVector给回收了，就保证了，全局和临时全部回收完毕

int main() {

    // C++  中容器，分为两种类型
    // 1.序列式容器：元素的排序关系，和元素本身没有任何关系，是我们在添加的时候导致的顺序导致的排序
    // vector    priority_queue
    vector<int> vec01(1); // 声明一个元素的空间
    vector<string> vec02(100, "杜子腾"); // 声明100个元素空间，值都是=“杜子腾”

    vector<string> vec03;
    // 添加元素
    vec03.push_back("杜子腾");
    vec03.push_back("戴乐静");
    vec03.push_back("史珍香");
    // 删除元素
    vec03.pop_back(); // 删除最新的，最后添加的元素，删除“史珍香”

    // 获取元素
    string value = vec03.at(0);
    value = vec03[1];
    cout << value << endl;

    // 清空元素
    vec03.clear();
    // vec03.erase(vec03.begin(), vec03.end());

    // 是否被清空了
    if (vec03.empty()) {
        cout << "元素被清空" << endl;
    } else {
        cout << "元素没有被清空" << endl;
    }

    // 容器有很严重的问题
    // 此容器，占用的内存空间，是只增不减的
    cout << "此Vector容器，占用内存空间是:" << vec03.capacity() << endl;

    // 全局问题演示
    test01();

    return 0;
} // main 方法执行完毕，所有在栈区申请的内存，全部释放