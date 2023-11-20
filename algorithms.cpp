#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {5,4,3,2,1};
    
    int num1 = 5;
    int num2 = 10;
    int maxEle = max(num1, num2);

    cout<<"Maximum of num1 and num2 is "<<maxEle<<endl;

    int minEle = min(num1,num2);
    cout<<"Minimum of num1 and num2 is "<<minEle<<endl;


    //sort the vector
    sort(v.begin(), v.end());

    for(auto it: v){
        cout<<it<<endl;
    }

  
}