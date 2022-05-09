/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-09 13:15:39
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-09 15:53:06
 * @FilePath: \cpp\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
