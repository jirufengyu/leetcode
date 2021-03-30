#include<vector>
#include<iostream>
#include<string>
using namespace std;
void vectorinput(vector<int> *s, int n){ //输入数组
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        (*s).push_back(k);
    }
    return ;
}
void vectoroutput(vector<int> *s, int n){ //输出数组
    for(int i=0;i<n;i++){
        cout<<(*s)[i]<<' ';
    }
    return ;
}
bool isreverse(string s){       //判断是否是回文串
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}
bool isreverse(string s, int i, int j){       //判断子串是否是回文串
    int n=j-i+1;
    for(int k=0;k<n/2;k++){
        if(s[i+k]!=s[j-k])
            return false;
    }
    return true;
}