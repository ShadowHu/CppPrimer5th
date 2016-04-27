/*************************************************************************
	> File Name: 3_22.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月17日 星期日 11时23分13秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> svec{"hello world!","","how do you do!"};

    for(auto it = svec.begin();
        it != svec.end() && !it->empty();++it){
            for(auto &c : *it){
                c = toupper(c);    
            }
        cout<<*it<<endl;
    }

    return 0;
}
