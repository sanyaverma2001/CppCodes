#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v){
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
 int main(){
     int n;
     cout<<"Enter the size of array :";
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++){
         int x;
         cout<<"\n Enter the elements of array : ";
         cin>>x;
         v.push_back(x);



     }
     display(v);
     int x= v[v.size()-1];
     for(int i=v.size()-1;i>0;i--){
         v[i]=v[i-1];
     }
     v[0]=x;
     display(v);
     return 0;
 }