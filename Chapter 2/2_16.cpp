/*************************************************************************
	> File Name: 2_16.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 15时59分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int i = 0, &ri = i;
    double d = 0, &r2 = d;
    r2=3.14;
    cout<<r2<<endl;
    return 0;
}
