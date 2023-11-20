#include<iostream>
#include <utility>

using namespace std;

int main(){
    pair<int, char> p1;
    p1 = {10,'K'};

    cout<<p1.first<<" "<<p1.second<<" "<<endl;

    pair<int, char> p2(1,'m');


    //another way of creating pair
     pair<string, int> p3;
    p3 = make_pair ("kapil",26);

    //pair of pair
    pair<int,pair<int,char>> p4;
    p4 = {1,{2,'a'}};


    
    //vector with pairs

    vector<pair<int,int>> v;
    v.push_back({5,7});
    v.push_back({9,10});

    for(auto it : v){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it = v.begin();it!=v.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

}