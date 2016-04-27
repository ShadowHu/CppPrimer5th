/*************************************************************************
	> File Name: 2_31.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 21时06分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int i = 0;
    const int v2 = 0; int v1 = v2;
    int *p1 = &v1,&r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    r1 = v2;
    p1 = p2;
    p2 = p1;
    p1 = p3;
    p2 = p3;
    return 0;
}
