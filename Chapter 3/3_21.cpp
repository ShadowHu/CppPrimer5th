/*************************************************************************
	> File Name: 3_21.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 10时36分09秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
//    vector<int> v1;
//    cout<<*(v1.begin())<<endl;
    
    vector<int> v2(10);
    for(auto i =v2.begin(); i != v2.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;

    vector<int> v3(10,42);
    for(auto i = v3.begin();i != v3.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;

    vector<int> v4{10};
    for(auto i = v4.begin();i != v4.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;

    vector<int> v5{10,42};
    for(auto i = v5.begin();i != v5.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;

    vector<string> v6{10};
    for(auto i = v6.begin();i != v6.end();i++){
        cout<<*i<<endl;
    }
    cout<<endl;

    vector<string> v7{10,"hi"};
    for(auto i = v7.begin();i != v7.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
