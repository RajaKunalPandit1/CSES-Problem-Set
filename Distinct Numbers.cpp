Link: https://cses.fi/problemset/result/2555827/
Output Status:

Submission details
Task:	Distinct Numbers
Sender:	kunal_42
Submission time:	2021-07-22 11:15:04
Language:	C++17
Status:	READY
Result:	ACCEPTED

// Code

#include <bits/stdc++.h>
#define endl "\n"
 
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            res++;
        }
    }
    cout<< res << endl;
    
    
return 0;    
}
