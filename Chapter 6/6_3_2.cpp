/*************************************************************************
	> File Name: 6_3_2.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月26日 星期二 21时41分13秒
 ************************************************************************/

#include<iostream>
using namespace std;

const string &shorterString(const string &s1,const string &s2){
    return s1.size()<s2.size()? s1:s2;
}

int main(){
    string shortstr = shorterString("hi","world");
    cout<<shortstr<<endl;
    return 0;
}
