/*************************************************************************
	> File Name: 3_45.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月19日 星期二 19时47分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int ia[2][3] = {0,1,2,3,4,5};

    //version 1
    for(auto &i1:ia){
        for(auto j1:i1)
            cout<<j1<<" ";
    }
    cout<<endl;

    //version 3
    for(auto i3 = begin(ia);i3 != end(ia);++i3){
        for(auto j3 = begin(*i3);j3 != end(*i3);++j3)
            cout<<*j3<<" ";
    }

    return 0;
}
