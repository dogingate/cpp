/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-09 13:15:39
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-09 21:30:21
 * @FilePath: \cpp\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int addArray(int array[], int n);

int main()
{
    // vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string &word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(data) / sizeof(data[0]);
    int sum = addArray(data, size);
    printf("the sum of the array is %d\n", sum);
    return 0;
}

int addArray(int array[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += array[i];
    }
    return sum;
}
