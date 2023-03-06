//https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; ++i)
 {
     cin >> arr[i];
 }
int counter = 0;
int tmp = 0;
    for (int i = 0; i < n ; ++i)
 {
        tmp = arr[i];

     if (arr[i] == arr[i+1])
     {
         tmp = arr[i+1];
     } else if (arr[i] != arr[i+1])
     {
         counter++;
         tmp = arr[i+1];
     }
 }
cout << counter ;

 return 0;
}


