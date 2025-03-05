#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MissingNum(vector<int>&num){
    sort(num.begin(),num.end());
    for(int i=0;i<num.size();i++){
        if(num[i]!=i+1){
            return i+1;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int missing=MissingNum(num);
    cout<<"The missing number is: "<<missing<<endl;
    // The time complexity of this code is O(nlogn) because of the sorting function.
}