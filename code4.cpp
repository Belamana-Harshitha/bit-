#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X=0;
    string arr[n];
    for(int i=0;i< n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]== "X++"){
            X++;
        }else if(arr[i]== "++X"){
            ++X;
        }else if(arr[i]== "X--"){
            X--;
        }else if(arr[i] == "--X"){
            --X;
        }
    }
    cout<<X;
    return 0;
}