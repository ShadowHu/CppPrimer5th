/*************************************************************************
	> File Name: 5_17.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月23日 星期六 16时00分14秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> iv1 = {0,1,1,2,3,5,7}, iv2 = {0,1,1,2,3,5,8};
    auto beg1 = iv1.begin(), beg2 = iv2.begin();

    for(beg1,beg2;beg1 != iv1.end() && beg2 != iv2.end();++beg1,++beg2){
        if(*beg1 != *beg2){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}
