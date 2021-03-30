/*
将n个整数存放到一维数组中，设计一个时间和空间
两方面都尽可能高效的算法，将(X0,X1,...Xn-1)
变为(Xp,Xp+1,...,Xn-1,X0,X1,...Xp-1)
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> s;
    int k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        s.push_back(k);
    }
    int p;
    cin>>p;
    int t;
    for(int i=0;i<p/2;i++){
        t=s[p-i-1];
        s[p-i-1]=s[i];
        s[i]=t;
    }
    for(int i=0;i<(n-p)/2;i++){
        t=s[n-i-1];
        s[n-i-1]=s[p+i];
        s[p+i]=t;
    }
    for(int i=0;i<n/2;i++){
        t=s[n-i-1];
        s[n-i-1]=s[i];
        s[i]=t;
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}
