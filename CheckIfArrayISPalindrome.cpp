#include <bits/stdc++.h>
using namespace std;

bool check_for_palindrome(int arr[], int n)
{
    // bool ans=true;
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            return false;
        }
    }
    return true;
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
    if (check_for_palindrome(arr, n))
    {
        cout << "\n\t array is palindrome !!!!";
    }
    else
    {
        cout << "\n\t array is not palindrome !!!!";
    }

    return 0;
}