/*************************************************************************
	> File Name: 3_24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 20时21分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ivec;
    int i;
    while(cin>>i){
        ivec.push_back(i);
    }
/*    for(auto it = ivec.begin();it != ivec.end() - 1;++it){
        cout<<*it + *(it+1)<<endl;
    }
*/
    for(auto beg = ivec.begin(),en = ivec.end();beg <= en;++beg,--en){
        cout<<*beg + *(en-1)<<endl;
    }
    return 0;
}
