/*** 
 * @Author: aiodf
 * @Date: 2023-05-08 19
 * @LastEditors: aiodf
 * @LastEditTime: 2023-05-08 20
 * @FilePath: \vscodecpp\demo\1.cpp
 * @Description: 
 */

void swa(int a,int b);
#include<iostream>//预处理
#include<string> //引入string
using namespace std;//命名空间
int main()//主函数
{
  int *point_num1;//定义指针变量
  int temp;//定义整型变量
  temp=3;//赋初值
  point_num1=&temp;//将指向的变量temp的地址赋给指针变量
  cout<<*point_num1<<endl;//输出
  return 0; //函数返回值为0；
  
}