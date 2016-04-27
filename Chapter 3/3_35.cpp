/*************************************************************************
	> File Name: 3_35.cpp
	> Author: 
	> Mail: 
	> Created Time: 2014年08月18日 星期一 14时43分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int a[9] = {0,1,2,3,4,5,6,7,8};
    int *abeg = begin(a);
    int *aend = end(a);
    for(abeg;abeg != aend;++abeg){
        a[*abeg] = 0;
        cout<<a[*abeg]<<endl;
    }
    return 0;
}
