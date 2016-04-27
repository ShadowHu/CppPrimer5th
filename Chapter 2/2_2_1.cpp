/*************************************************************************
	> File Name: 2_2_1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 15时18分53秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    long double ld = 3.1415926536;
//    int a{ld}, b = {ld};
    int c(ld), d = ld;
//    cout<<a<<b<<endl;
    cout<<c<<d<<endl;
    return 0;
}
