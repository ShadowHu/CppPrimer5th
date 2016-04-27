/*************************************************************************
	> File Name: 3_32.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 21时54分36秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
/*    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10] = {};
    for(int i = 0;i < 10;++i){
        b[i] = a[i];
        cout<<b[i]<<" ";
    }
    */
    vector<int> a = {0,1,2,3,4,5,6,7,8,9};
    vector<int> b(a);
    for(auto i : b){
        cout<<i<<" ";
    }
    return 0;
}
