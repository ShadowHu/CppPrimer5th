/*************************************************************************
	> File Name: fact.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月25日 星期一 12时55分15秒
 ************************************************************************/

#include<iostream>
#include"6_8.h"
using namespace std;

int fact(int val){
    int pro = 1;
    for(;val >= 1;--val){
        pro *= val;
    }
    return pro;
}
