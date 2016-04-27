/*************************************************************************
	> File Name: 3_25.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 20时31分15秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> grade(11);
    int mark;
    auto zero = grade.begin();
    while(cin>>mark){
        ++(*(zero+mark/10));
    }
    for(zero;zero != grade.end(); ++zero)
        cout<<*zero<<endl;


    return 0;
}
