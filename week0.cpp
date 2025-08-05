#include <iostream>
using namespace std;


int main() {
    vector<int>arr;
    int sum=0;
    int n ;
    cin>>n;
    for(int i =0;i<n;i++){
        int val;
        cin>>val;
       arr.push_back(val);
        sum+=val;
    }
  
    int avg= sum/n;
    cout<<avg;
    
    
    return 0;
}

