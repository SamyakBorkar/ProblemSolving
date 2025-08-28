#include<bits/stdc++.h>
using namespace std;

//Push is always from rear and pop if from front 
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;

    return 0;
}