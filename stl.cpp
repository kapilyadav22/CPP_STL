#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector
    //array is collection of similar data type elements
    //int arr[5];
    //a dynamic array - it increases its size dynamically


    //1 d vector
    vector<int>   v1;
    //vector with size
    vector<int> v5(5);
    //vector with size amd initial values
    vector<int> v6(5,22);


  
    
    //insert element from the end
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    
    //delete element from the end
    //  v1.pop_back();
     
    // v1.pop_back();
    // v1.pop_back();

    // //size()
    // cout<<v1.size();

    //delete all the elements from the vector
    //v1.clear();

  //begin()
  //end()
  //  for(auto it = v1.begin();it!=v1.end();it++){
  //   cout<<*it<<endl;
  //  }
  
  for(auto it : v6){
    cout<<it<<endl;
  }

  //copy the values of one vector to another 
  vector<int> v2(v1);
  

  //empty()
  
  //2 d array :
  int arr[3][4];
  //declare 2D vector
  int m, n;
  vector<vector<int>> v8;

  //vector<another vector>> name(numberofrows, initialize of values of inside vector)
  vector<vector<int>> v3(m,vector<int> (n,-1));    
  //m and n are size.3
  v3[0][5] = 6;

  //declare 3D vector
   int x,y,z;
   //vector<inside it another vector<inside it another vector>>

   //vector<same as 2d vector declaration> name(x, declare and initialise the 2d vector);
   vector< vector< vector<int> > >  v4(x , vector< vector<int> > (y, vector<int>(z) ) );

}