/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-12 16:02:35
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-12 17:49:10
 * @FilePath: \cpp\point.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
class Point
{
private:
    double m_x;
    double m_y;

public:
    void set(double x, double y);
    double getX();
    double getY();
    Point();
    ~Point();
};