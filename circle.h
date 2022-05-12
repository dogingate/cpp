/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-12 16:38:32
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-12 16:50:03
 * @FilePath: \cpp\circle.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

#include "point.h"
class Circle
{
private:
    Point m_center;
    double m_radius;

public:
    void set(Point center, double radius);
    Point getCenter();
    double getRadius();
    bool isInCircle(Point &p);
};