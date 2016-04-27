/*************************************************************************
	> File Name: 3_43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月19日 星期二 15时39分50秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int ia[2][3] = {4,5,6,7,8,9};
    //version 1
    for(int (&i1)[3]:ia){
        for(int j1:i1)
            cout<<j1<<" ";
    };
    cout<<endl; 
    
    //version 2
    for(int i2 = 0;i2 < 2;++i2){
        for(int j2 = 0;j2 < 3;++j2)
            cout<<ia[i2][j2]<<" ";
    }
    cout<<endl;
    
    //version 3
    for(int (*i3)[3] = begin(ia);i3 != end(ia);++i3){
        for(int *j3 = begin(*ia); j3 != end(*ia) ;++j3)
            cout<<*j3<<" ";
    }
    
    return 0;
}
