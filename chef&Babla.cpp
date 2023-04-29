#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int>a,b;
    int n;
    cin>>n;
    int s;
    int mx=INT_MAX;
    int mn=INT_MIN;
    for(int i=0;i<n;i++) {
        
        cin>>s;
        
        if(s>=0) {
            a.push_back(s);  
            mx=min(mx,s);
        }
        else {
            b.push_back(s);
            mn=max(mn,s); 
        }
    }
    if(mn==0 || mx==0) {
        cout<<"-1\n";
    }
    else if(mx==INT_MAX) {
        cout<<mn-1<<endl;
    }
    else if (mn==INT_MIN) {
        cout<<abs(mx+1)<<endl;
    }
    else {

        cout<<mx,abs(mn)-1<<endl;
    }
    

}
