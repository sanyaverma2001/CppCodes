#include<bits/stdc++.h>
using namespace std;

void SwapArray(int *arr,int n){
    for(int i=0;i<n-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
    cout<<"\n\t Array changed !!";
}
void display(int arr[], int n)
{
    cout << endl;
    cout <<"\t";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "\n\t Enter the size of array : ";
    cin >> n;
    if(n==0){
        cout<<"\n\t please enter a valid value of n !!!!";
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n\t Enter the element of array : ";
        cin >> arr[i];
    }
    cout << "\n\t Our Array is : \n ";
    display(arr, n);
    SwapArray(arr,n);
    display(arr,n);
  
    return 0;
}