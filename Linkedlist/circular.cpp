#include <bits/stdc++.h>
using namespace std;

class Node{
public:
   int val;
   Node* next;
   Node* head;
   Node(int val)
   {
    this -> val = val;
    this -> next = NULL;
   }
};


int main()
{
   Node* one = new Node(1);
   
   one -> next = head;

}