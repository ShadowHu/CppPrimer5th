/*************************************************************************
	> File Name: 2_14.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月11日 星期一 15时48分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int i = 100, sum = 0;
    for(int i = 0;i != 10;++i){
        sum += i;
        cout<<sum<<endl;
    }
    cout<<i<<" "<<sum<<endl;
    return 0;
}
