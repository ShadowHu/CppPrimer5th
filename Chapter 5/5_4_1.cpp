/*************************************************************************
	> File Name: 5_4_1.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月23日 星期六 15时43分07秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int i;
    while(cin>>i)
        v.push_back(i);

    auto beg = v.begin();
    
    cout<<*beg<<endl;
    return 0;
}
