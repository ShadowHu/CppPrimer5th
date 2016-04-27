/*************************************************************************
	> File Name: 2_36.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月12日 星期二 21时57分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;
    cout<<c<<" "<<d<<endl;
    return 0;
}
