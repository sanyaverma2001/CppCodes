#include<bits/stdc++.h>
using namespace std;
int firstPeak(vector<int>&arr){
    if(arr[0]>arr[1]){return arr[0];}
    for(int i=1;i<arr.size()-1;i++){
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int>arr;
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the element of array : ";
        cin>>x;
        arr.push_back(x);
        cout<<endl;
    }
    int ans=firstPeak(arr);
    cout<<"\n peak element is --> "<<ans;
    return 0;
}