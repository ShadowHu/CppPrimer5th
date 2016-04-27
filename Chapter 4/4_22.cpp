/*************************************************************************
	> File Name: 4_22.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月21日 星期四 14时39分10秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    vector<int> marks;
    while(cin>>m){
        marks.push_back(m);
    }
    //version 1
    for(auto i:marks){
        string degree = (i>90)? "high pass":
                            (i>=75)? "low pass":
                                (i>=60)? "pass": "fail";
        cout<<degree<<"|";
    }
    cout<<endl;
    //version 2
    for(auto i:marks){
        if(i>90) cout<<"high pass"<<"|";
        else if(i>=75) cout<<"low pass"<<"|";
        else if(i>=60) cout<<"pass"<<"|";
        else cout<<"fail"<<"|";
    }
    cout<<endl;
    return 0;
}
