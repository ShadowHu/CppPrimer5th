/*************************************************************************
> File Name: 5_14.cpp
> Author: Shdow Hu
> Mail: shadow_hu1441@163.com
> Created Time: 2014年08月23日 星期六 14时59分17秒
************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> svec;
    string s;
    int max = 1, cou = 0;
    string cword;

    while(cin>>s)
        svec.push_back(s);
    
    auto beg = svec.begin();
    string now = *beg;
    
    for(beg;beg != svec.end();++beg){
        if(now == *beg){
            ++cou;
            if(cou > max){
                max = cou;
                cword = *beg;
            }
        }else{
            now = *beg;
            cou = 1;
        }
    }
    
    if(max == 1){
        cout<<"no continuous words"<<endl;
    }else{
        cout<<cword<<" "<<max<<endl;
    }
    return 0;
}
