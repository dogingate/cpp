/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-09 13:15:39
 * @LastEditors: vibration007 dogingate@qq.com
<<<<<<< HEAD
 * @LastEditTime: 2022-05-11 17:46:48
=======
 * @LastEditTime: 2022-05-09 21:30:21
>>>>>>> edd7d2c02bbed96d94edc6902bcbaf9fc314fc3a
 * @FilePath: \cpp\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <map>
#include <vector>
#include <string>

// using namespace std;
using std::cin;
using std::copy;
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;
void bubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "the " << i << " number is " << arr[i] << endl;
        ;
    }
}
struct Student
{
    string name;
    int age;
    float score;
};

void runString()
{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int addArray(int array[], int n);
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
void runArray()
{
    int arr[] = {4, 3, 6, 9, 1, 2, 11, 8, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printArray(arr, size);
    // int *p = arr;
    // for (int i = 0; i < size; i++)
    // {
    //     // printf("the %d number is %d\n", i, *p);
    //     cout << "the " << i << " number is " << *p << endl;
    //     p += 1;
    // }
}
void runStruct()
{
    struct Student s1;
    struct Student s2 =
        {"sam", 17, 100.0};
    struct Student s3 = {"lily", 17, 100.0};
    s1.name = "john";
    s1.age = 18;
    s1.score = 100.0;
    cout << "name is " << s1.name << "age is " << s1.age << "score is " << s1.score << endl;
    cout << "name is " << s2.name << "age is " << s2.age << "score is " << s2.score << endl;
    struct Student students[3] =
        {
            {"john", 18, 100.0},
            {"sam", 18, 100.0},
            {"lily", 18, 100.0},
        };

    // for (int i = 0; i < 3; i++)
    // {
    //     struct Student person = students[i];
    //     cout << "name is " << person.name << " age is " << person.age << " score is " << person.score << endl;
    // }

    struct Student *p = &students[0];
    cout << "name is " << p->name << " age is " << p->age << " score is " << p->score << endl;
}

/* 这里形参必须是int x[], 写作int[] x产生语法错误
    n次插值Lagrange形式
    x: 插值节点
    y : 插值节点函数值
    len : 插值节点个数
    newX: 所求节点
 */
double
lagrangeInterpolation(double x[], double y[], int len, double newx)
{
    double result = 0; // 这里要记得初始化，否则结果错
    double L;          // lagrange interpolation polyminoal

    for (int j = 0; j < len; j++)
    {
        // every interpolation polyminoal
        L = y[j];
        for (int k = 0; k < len; k++)
        {
            // every term
            if (j == k)
            {
                continue;
            }
            // printf("newx[i]=%lf, x[j]=%lf, x[k]=%lf, \n (newx[i] - x[k]) / (x[j] - x[k])=%lf\n", newx[i], x[j], x[k], (newx[i] - x[k]) / (x[j] - x[k]));
            // printf("L*(newx[i] - x[k]) / (x[j] - x[k])=%lf\n", L*(newx[i] - x[k]) / (x[j] - x[k]));
            L *= (newx - x[k]) / (x[j] - x[k]);
        }
        // printf("result[%d]=%lf\n", i, result[i]);
        result += L;
        // printf("result[%d]=%lf ， iter=%d\n", i, result[i], j);

        // printf("array[%d] is: %lf\n", i, result[i]);
    }
    return result;
}

void runInterp()
{
    double x[] = {0.46, 0.47, 0.48, 0.49};
    int len = sizeof(x) / sizeof(x[0]);
    double y[] = {0.4846555, 0.4937452, 0.5027498, 0.5116683};
    double new_x = 0.472;
    double new_y = lagrangeInterpolation(x, y, len, new_x);
    cout << "new point is (" << new_x << ", " << new_y << ")" << endl;
}
bool fncomp(char lhs, char rhs)
{
    return lhs < rhs;
}

struct classcomp
{
    bool operator()(const char &lhs, const char &rhs) { return lhs < rhs; }
};

template <typename Map>
void printMap(Map &m)
{
    cout << "[";
    for (auto &item : m)
    {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]\n";
}
void runMap()
{
    map<string, int> zd;
    zd["1"] = 10;
    zd["2"] = 60;
    zd["3"] = 30;
    zd["4"] = 90;
    zd["5"] = 50;
    zd.insert(std::pair<string, int>("6", 55));

    map<string, int>::iterator it = zd.begin();

    // for (it; it != zd.end(); it++)
    // {
    //     cout << it->first << ":" << it->second << endl;
    // }
    printMap(zd);
}
int main(int argc, char *argv[])
{
    // runStruct();
    // runInterp();
    runMap();
}