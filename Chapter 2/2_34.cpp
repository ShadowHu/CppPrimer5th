/*************************************************************************
	> File Name: 2_34.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月12日 星期二 21时41分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int  i = 0;
    const int ci = i;
    auto &g = ci;
    g = 42;
    return 0;
}
