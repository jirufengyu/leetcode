/*
分割回文串
给一个字符串s，把s分割成一些子串，使每个子串都是回文串。返回s所有可能的分割方案
输入：s = "aab"
输出：[["a","a","b"],["aa","b"]]
*/
#include"kit.h"
vector<vector<string>> out;
vector<string> tmp;
void dp(string s,int start,vector<string> tmp){
    if(start>s.length()-1)
    {
        out.push_back(tmp);
        return;
    }
    for(int i=start;i<s.length();i++){
        if(isreverse(s,start,i)){
            tmp.push_back(s.substr(start,i-start+1));
            dp(s,i+1,tmp);
            tmp.pop_back();
        }
    }
}
int main(){
    string s;
    cin>>s;
    dp(s,0,tmp);
    for(int i=0;i<out.size();i++){
        for(int j=0;j<out[i].size();j++){
            cout<<out[i][j]<<' ';
        }
        cout<<endl;
    }
    //cout<<isreverse("w");
}

