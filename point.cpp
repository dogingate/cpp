/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-12 16:02:41
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-12 17:43:11
 * @FilePath: \cpp\point.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "point.h"
#include <iostream>
void Point::set(double x, double y)
{
    m_x = x;
    m_y = y;
}
double Point::getX()
{
    return m_x;
}
double Point::getY()
{
    return m_y;
}
Point::Point()
{
    std::cout << "new" << std::endl;
}
Point::~Point()
{
    std::cout << "deleted" << std::endl;
}