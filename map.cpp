#include<iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
//key value pair
  unordered_map<int, string>  umap;
  //TC = O(logn)
  unordered_map<int, string>  umap2  = {{1, "kapil"}, {2,"Rahul"}};

    //TC = O(1)
    //insert values in map
    umap[9] = "Deepak";
    umap[3] = "RJ";
    umap[4] = "Dheeraj";
    umap[5] = "Aman";
    umap[6] = "Priyanshu";

    //find
    if (umap.find(3) != umap.end())
        cout <<"value of 3 is "<<umap[3]<<endl;
    else {
        cout<<"100 is not a valid key"<<endl;
    }

    //count
    bool isPresent =  umap.count(18);

    //erase
        umap.erase(5);

    //iterate
    for(auto it : umap){
        cout<<it.first<<" "<<it.second<<endl;
    }

}