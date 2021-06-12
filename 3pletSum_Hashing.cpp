#include<bits/stdc++.h>
using namespace std;

bool printTripletSum(int arr[], int n, int sum)
{
    for(int i=0; i<n-2; i++)
    { // Find pair in subarray A[i+1..n-1]
        // with sum equal to sum - A[i]
        //Create a HashMap or set to store unique pairs.
        unordered_set<int> set;
        int curr_sum = sum - arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(set.find(curr_sum-arr[j]) != set.end())
            {
            cout<<"Triplet is : "<<arr[i]<<" "<<arr[j]<<" "<< curr_sum-arr[j]<<" ";
            return true;
            }
            set.insert(arr[j]);
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8 };
    int sum =22;
    int n = sizeof(arr)/ sizeof(arr[0]);
    printTripletSum(arr, n, sum);
    return 0;
}