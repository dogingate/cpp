/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-20 14:26:48
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-20 14:38:31
 * @FilePath: \cpp\readData.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

using TYPE = double;

//------------------------------------------------

template <typename T>
vector<vector<T>> loadtxt(const string &filename)
{
    vector<vector<T>> data;
    ifstream in(filename);
    for (string line; getline(in, line);)
    {
        stringstream ss(line);
        vector<T> row;
        for (T d; ss >> d;)
            row.push_back(d);
        data.push_back(row);
    }
    return data;
}

//------------------------------------------------

template <typename T>
void print(const vector<vector<T>> &data)
{
    for (auto &row : data)
    {
        for (auto &item : row)
            cout << setw(10) << item << ' ';
        cout << '\n';
    }
}

//======================================================================

int main()
{
    auto data = loadtxt<double>("./data/test.dat");
    print(data);
}