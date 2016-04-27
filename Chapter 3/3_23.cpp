/*************************************************************************
	> File Name: 3_23.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 20时11分20秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ivec(10,1);
    for(auto it = ivec.begin();it != ivec.end();++it){
        *it = (*it) * 2;
        cout<<*it<<endl;
    }
    return 0;
    
}
