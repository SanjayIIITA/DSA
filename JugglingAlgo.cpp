#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int low, int high)
{
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;

    }
}
void RotateLeft(int arr[], int n, int d)
{   //int n = int(arr[]).size();
     reverse(arr, 0, d-1);// reverse target element so After first Reverse { 2, 1, 3, 4,5}
     reverse(arr, d, n-1); //After second Reverse { 2, 1, 5, 4, 3}
     reverse(arr, 0, n-1); //After 3rd reverse { 3, 4, 5, 1, 2}
}

void displayArray(int arr[],int n)
{
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"\n";
}

 int main(){
 int n,d;
  cout<<"Enter size of the Array\n";
  cin>>n;
  int arr[n];
  cout<<"Enter Array elements\n";
  for(int i=0;i<n;i++)
   cin>>arr[i];
  cout<<"Enter the value of k\n";
  cin>>d;
  //displayArray(arr,n);
  RotateLeft(arr,n,d);
  displayArray(arr,n);
  return 0;
 }