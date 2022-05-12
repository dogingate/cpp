/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-12 16:38:45
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-12 16:45:29
 * @FilePath: \cpp\circle.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "circle.h"
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
void Circle::set(Point center, double radius)
{
    m_center = center;
    m_radius = radius;
}
Point Circle::getCenter()
{
    return m_center;
}
double Circle::getRadius()
{
    return m_radius;
}
bool Circle::isInCircle(Point &p)
{
    double dx = (p.getX() - m_center.getX());

    double dy = (p.getY() - m_center.getY());
    double distance = sqrt(dx * dx + dy * dy);
    if (distance < m_radius)
    {
        cout << "is in " << endl;
    }
    else if (distance > m_radius)
    {
        cout << "not in " << endl;
    }
    else
    {
        cout << "is on" << endl;
    }
}