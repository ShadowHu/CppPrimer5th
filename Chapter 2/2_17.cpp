/*************************************************************************
	> File Name: 2_17.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 16时37分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int i, &ri = i;
    i = 5; ri = 10;
    cout<<i<<" "<<ri<<endl;
    return 0;
}
