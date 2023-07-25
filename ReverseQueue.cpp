#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue( queue<int> &q ){

    stack<int> s;

    //Put the Queue element to stack
    while(!q.empty()){
         int element = q.front();
         q.pop();
         s.push(element);
    }

// put the stack element back to queue
    while(!s.empty()){
        int  element = s.top();
        s.pop();
        q.push(element);

    }
}

void reverseQueueRecursion(queue<int> &q){

    if(!q.empty()){
        return;
    }
    int temp = q.front();
    reverseQueueRecursion(q);

    q.push(temp);
}

int main(){

queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

// reverseQueue(q);
reverseQueueRecursion(q);
cout<<"printing queue ";
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<endl;
return 0;
}


