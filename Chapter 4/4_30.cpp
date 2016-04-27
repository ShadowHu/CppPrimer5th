/*************************************************************************
	> File Name: 4_30.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 17时50分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int x = 3,y = 6;
    cout<<sizeof x + y<<endl;
    cout<<(sizeof x) + y<<endl;
    cout<<sizeof (x + y)<<endl;
    return 0;
}
