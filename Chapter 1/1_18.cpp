/*************************************************************************
	> File Name: 1_18.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2014年08月10日 星期日 20时27分36秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int num,cou,nNum;
    if(cin>>num){
        cou = 1;
        while(cin>>nNum){
            if(num == nNum){
                cou++;
            }
            else{
                cout<<num<<" "<<cou<<endl;
                num = nNum;
                cou = 1;
            }
        }
        cout<<num<<" "<<cou<<endl;
    }
    return 0;
}
