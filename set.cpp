#include<iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main(){
    set<int> naturalNumbers;
    naturalNumbers = {10,20,30,40,40, 40,40, 40 , 40 };

    // unordered_set<int> s2 = naturalNumbers;
    // unordered_set<int> s3(naturalNumbers);
    // unordered_set<int> s4(naturalNumbers.begin(), naturalNumbers.end());

    //insertion in set
    naturalNumbers.insert(1);
    naturalNumbers.insert(2);
    naturalNumbers.insert(3);
    naturalNumbers.insert(4);
    naturalNumbers.insert(5);
    

    //deletion in sets
    naturalNumbers.erase(4);


    //find a value in set
    if(naturalNumbers.find(2)!=naturalNumbers.end()){
        //2 is available in set
        cout<<"2 is present in set"<<endl;    
    }
    else {
        cout<<"2 is not present in set"<<endl;
    }

    //count
    bool isPresent = naturalNumbers.count(4);
    cout<<isPresent;

    //

    //  for(auto it : naturalNumbers){
    //     cout<<it<<endl;
    //     }

    
    
  
}