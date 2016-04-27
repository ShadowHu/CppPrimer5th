/*************************************************************************
	> File Name: 3_20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 09时36分40秒
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
/*    for(int j = 0;j<ivec.size()-1;j++){
        cout<<ivec[j]+ivec[j+1]<<endl;
    }
*/
    int j,k;
    for(j = 0,k = ivec.size()-1; j <= k; j++,k--){
        cout<<ivec[j]+ivec[k]<<endl;
    }
    return 0;
}
