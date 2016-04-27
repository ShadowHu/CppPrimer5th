/*************************************************************************
	> File Name: 5_24.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月24日 星期日 20时55分47秒
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(b == 0)
        throw runtime_error("dominator can't be 0");

    cout<<a/b<<endl;
    return 0;
}
