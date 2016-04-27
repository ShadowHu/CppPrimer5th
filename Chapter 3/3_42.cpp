/*************************************************************************
	> File Name: 3_42.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月19日 星期二 13时33分06秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ivec{0,1,2,3,4,5};
    const int sz = ivec.size();
    int a[sz];
    int c = 0;
    for(auto i:ivec){
        a[c] = i;
        cout<<a[c]<<" ";
        ++c;
    }
    return 0;
}
