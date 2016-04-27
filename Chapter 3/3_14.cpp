/*************************************************************************
	> File Name: 3_14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月15日 星期五 09时55分03秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
//    vector<int> ivec;
//    int i;
    vector<string> svec;
    string s;
    while(cin>>s){
        svec.push_back(s);
    }
/*    for(int j = 0;j != svec.size();j++){
        cout<<svec[j]<<endl;
    }
*/
    for(auto j : svec){
        cout<<j<<endl;
    }
    return 0;
}
