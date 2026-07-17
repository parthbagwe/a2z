#include<bits/stdc++.h>
using namespace std;
bool anograms(string s1, string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    int freq[26]={0};
    for(int i=0; i<s1.size(); i++){
        freq[s1[i]-'A']++;
    }
    for(int i=0; i<s2.size(); i++){
        freq[s2[i]-'A']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }
    }
};