/*************************************************************************
	> File Name: 2_3_2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 16时50分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int *p = nullptr;
    int num = 11;
    p = &num;
    cout<<*p<<endl;
    return 0;
}
