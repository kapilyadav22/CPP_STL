#include<iostream>
#include <queue>
using namespace std;

int main(){
    //By default it follows the property of max heap
    priority_queue<int> pq;

    //insertion in pq
    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.push(1);

    //deletion in pq
    pq.pop();

    //top element in pq (maximum element)
    int maxEle = pq.top();

    //check if pq is empty or not
    bool isEmpty = pq.empty();

   //iterating the pq
    // while (!pq.empty()) {
    //     cout <<" "<< pq.top();
    //     pq.pop();
    // }


    //Priority_queue as minheap
    priority_queue<int, vector<int>, greater<int> > minheap;

    minheap.push(8);
    minheap.push(10);
    minheap.push(1);
    minheap.push(4);
    minheap.push(6);
    minheap.push(18);

    minheap.pop();

      while (!minheap.empty()) {
        cout <<" "<<minheap.top();
        minheap.pop();
    }

}