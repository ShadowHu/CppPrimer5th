/*************************************************************************
	> File Name: 3_44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月19日 星期二 21时57分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int ia[2][3] = {1,2,3,3,2,1};
    using row =int[3];
    
    //version 1
    for(row &i1: ia ){
        for(int j1:i1){
            cout<<j1<<" ";
        }
    }
    cout<<endl;
    
    //version 3
    for(row *i3 = begin(ia);i3 != end(ia);++i3){
        for(int *j3 = begin(*i3);j3 != end(*i3);++j3)
            cout<<*j3<<" ";
    }
    return 0;
}
