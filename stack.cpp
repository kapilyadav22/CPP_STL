#include<iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    //push elements in stack;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //pop elements in stack
    st.pop();


    //top element in the stack
    st.top();

    //size of stack
    st.size();

    //check if stack is empty or not
    bool isEmpty = st.empty();

  while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}