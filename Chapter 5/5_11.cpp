/*************************************************************************
	> File Name: 5_11.cpp
	> Author: Shdow Hu
	> Mail: shadow_hu1441@163.com
	> Created Time: 2014年08月22日 星期五 18时01分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    string s;
    int a = 0,e = 0, i = 0, o = 0, u = 0;
    int spa = 0,tab = 0, ent = 0;
    while(getline(cin,s)){
        for(char item:s){
            switch(item){
                case 'a':
                case 'A':
                    ++a;
                    break;
                case 'e':
                case 'E':
                    ++e;
                    break;
                case 'i':
                case 'I':
                    ++i;
                    break;
                case 'o':
                case 'O':
                    ++o;
                    break;
                case 'u':
                case 'U':
                    ++u;
                    break;
                case ' ':
                    ++spa;
                    break;
                case '\t':
                    ++tab;
                    break;
            }
        }
        ++ent;
    }

    cout<<"a\t"<<a<<endl;
    cout<<"e\t"<<e<<endl;
    cout<<"i\t"<<i<<endl;
    cout<<"o\t"<<o<<endl;
    cout<<"u\t"<<o<<endl;
    cout<<"spa\t"<<spa<<endl;
    cout<<"tab\t"<<tab<<endl;
    cout<<"ent\t"<<ent<<endl;


    return 0;
}
