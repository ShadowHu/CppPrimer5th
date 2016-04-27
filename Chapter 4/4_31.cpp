/*************************************************************************
	> File Name: 4_31.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 18时59分22秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec2(10, 0);  // ten elements initially all 0
    vector<int>::size_type cnt = vec2.size();
    for(vector<int>::size_type ix = 0; 
        ix != vec2.size(); ix++, cnt--){ 
        vec2[ix] = cnt;
        cout<<vec2[ix]<<" ";
        }
    return 0;
}
