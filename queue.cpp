#include<iostream>
#include <queue>
using namespace std;

int main(){
  
    queue<int> qu;
    
    //insertion in queue
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    //deletion in queue
    qu.pop();
    qu.pop();
    qu.pop();
    qu.pop();
  
   //find the front of the queue
    int  frontElement = qu.front();

   //check if queue is empty or not
    bool isEmpty = qu.empty();

    //check the size of queue
    int qsize = qu.size();
   
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
        }
}