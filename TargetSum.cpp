#include <bits/stdc++.h>
using namespace std;
void display(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, target;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter the element of array : ";
        cin >> arr[i];
    }
    display(arr,n);
    cout << "\n Enter the target element : ";
    cin >> target;
    // Brute-force

    // cout << "\n elements of array with sum == target : \n ";

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             cout << arr[i] << " " << arr[j];
    //             cout << endl;
    //         }
    //     }
    // }

    // optimized 

    sort(arr,arr+n);
    display(arr,n);
    cout<<endl;

    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<<arr[j];
            cout<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else {
            i++;
        }
    }
    return 0;
}