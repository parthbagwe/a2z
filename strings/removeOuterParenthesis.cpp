#include<bits/stdc++.h>
using namespace std;
string main(string s){
    string newStr="";
    int level=0;
    for(char c:s){
        if(c=='('){
            if(level>0){
                newStr=newStr+c;
            }
            level++;
        }
        if(c==')'){
            level--;
            if(level>0){
                newStr=newStr+c;
            }
        }
    }
    return newStr;
}