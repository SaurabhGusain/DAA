#include<iostream>
using namespace std;

int main(){
  int t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int key,flag=0,comp=0;
    cin>>key;
    for(int i=0;i<n;i++){
      if(arr[i]==key){
        comp++;
        cout<<"PRESENT "<<comp<<endl;
        flag=1;break;
      }
      comp++;
    }
    if(flag==0)
    cout<<"NOT PRESENT "<<comp<<endl;
  }
}