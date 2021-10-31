#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int *arr = new int[n];
    for(int i=0;i<n;i++){
      arr[i] = 1;
    }

    for(int i=1;i<n;i++){
      if(a[i] > a[i-1]){
        arr[i] = arr[i-1] + 1;
      }
    }

    for(int i=n-2;i>=0;i--){
      if(a[i] > a[i+1] && arr[i] <= arr[i+1]){
        arr[i] = arr[i+1] + 1;
      }
    }

    int sum = 0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    cout<<sum<<endl;
  }
}