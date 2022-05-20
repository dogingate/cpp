/*
 * @Author: vibration007 dogingate@qq.com
 * @Date: 2022-05-20 16:21:45
 * @LastEditors: vibration007 dogingate@qq.com
 * @LastEditTime: 2022-05-20 16:31:45
 * @FilePath: \cpp\eigenex.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include "Eigen/Dense"
using Eigen::MatrixXd;
using Eigen::VectorXd;
int main()
{
    MatrixXd m = MatrixXd::Random(3, 3);
    m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
    std::cout << "m =" << std::endl
              << m << std::endl;
    VectorXd v(3);
    v << 1, 2, 3;
    std::cout << "m * v =" << std::endl
              << m * v << std::endl;
}