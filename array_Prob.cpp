#include<bits/stdc++.h>
using namespace std;
int main () {
    int arr[100];
    int size;
    cin>> size;
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i =0; i< size ;i++ ) {
        cin>> arr[i];
        if (arr[i]>max) {
            max = arr[i];
        }
        return max;
    } 
    for (int i =0; i< size;i++) {
        cin>> arr[i];
        if (arr[i]< min)
            min = arr[i];
        return min;
    }
    cout << max<<endl;
    cout<< min<< endl;
    return 0;
}
