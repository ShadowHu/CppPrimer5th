/*************************************************************************
	> File Name: 3_36.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月18日 星期一 14时49分30秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
/*    int a[5] = {0,1,2,3,4};
    int b[7] = {0,1,2,3,4,5};
    int i;
    if(end(a)-begin(a) != end(b)-begin(b)){
        cout<<"Different"<<endl;
    }
    else{
        for(i = 0;i< end(a)-begin(b) && a[i] == b[i];++i) continue;
        if(i == end(a)-begin(b)){
            cout<<"Same"<<endl;
        }else{
            cout<<"Different"<<endl;
        }
    }*/
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3,4,6};
    if(a != b) cout<<"Different"<<endl;
    else cout<<"Same"<<endl;
    return 0;
}
