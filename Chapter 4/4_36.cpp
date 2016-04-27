/*************************************************************************
	> File Name: 4_36.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 21时00分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int i = 2;
    double d = 3.14;

    i *= static_cast<int>(d);
    cout<<i<<endl;
    return 0;
}
