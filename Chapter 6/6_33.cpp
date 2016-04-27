/*************************************************************************
	> File Name: 6_33.cpp
	> Author: Shadow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月31日 星期日 17时30分39秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

//递归函数输出vector的内容
vector<int> ivec = {0,1,2,3,4,5};
static auto en = ivec.end();
static auto beg = ivec.begin();

void print(vector<int> vec);

int main(){
    print(ivec);
    return 0;
}

void print(vector<int> vec){
    if(beg != en){
        cout<<*beg<<" ";
        ++beg;
        print(vec);
    }
}
