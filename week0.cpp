#include <iostream>
using namespace std;


int main() {
    vector<int>arr;
    int sum=0;
    int avg=0;
    for(int i =0;i<arr.size();i++){
        int val;
        cin>>val;
        arr.pushback(val);
        sum+=val;
    }
    avg=sum/arr.size();
    cout<<avg
    return 0;
}
