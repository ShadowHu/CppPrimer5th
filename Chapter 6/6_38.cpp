/*************************************************************************
	> File Name: 6_38.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年09月01日 星期一 17时26分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {2,4,6,8,10};

decltype(odd) &arrPtr(int i){
    return (i%2)? odd:even;    
}

int main(){
    auto beg = begin(arrPtr(4));
    auto en = end(arrPtr(4));

    for(;beg != en;++beg){
        cout<<*beg<<" ";
    }
    return 0;
}
