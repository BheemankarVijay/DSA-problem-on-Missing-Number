#include<iostream>
#include<vector>
using namespace std;

int MissingNum(vector<int>& num) {
     int n=num.size();
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=num[i];
     }
     int x=((n)*(n+1))/2;
     return x-sum;
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

}