/*************************************************************************
	> File Name: 2_27.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 20时24分45秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int i2 = -1;
    int *const p2 = &i2;
    const int *const p3 = &i2;
    const int *p1 = &i2;
    const int &const r2;
    return 0;
}
