/*************************************************************************
	> File Name: 4_21.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 14时35分39秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ivec = {1,2,3,4,5,6,7};
    for(auto &i:ivec){
        (i%2 == 1)? i *= 2: i = i;
        cout<<i<<" ";
    }
    return 0;
}
