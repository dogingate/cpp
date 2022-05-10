/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-09 13:15:39
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-10 13:50:31
 * @FilePath: \cpp\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;
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

    for (const string &word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
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
int main()

{
    runStruct();
}
