#include <bits/stdc++.h>

using namespace std;

const int MAX=1000;

class Stack{
    private: 
       int s[MAX];
       int top_;

    public:
      Stack(){ top_=-1; }
      int top(){ 
                    if(top_<0)
                        {cout << "stack is empty\n";}
                    else 
                        return s[top_]; 
                }
       int pop(){
          if(top_<0)
          {
            cout << "stack is underflow\n";
          }
          else
          {
            return s[top_--];
          }
        }
       bool push(int x){
            if(top_>=MAX-1)
                {cout << "stack is overflow\n"; return false;}
            else{
                s[++top_]=x;
                cout << x << " pushed into stack\n";
                return true;
                }
       }       
};

class Queue{
    private:
        int Q[MAX];
        int front, back;
    public:
        Queue(){ front=-1; back=-1;}

        bool isFull()
        {
            if(back==MAX-1 && front==0) 
                    return true;
            else
                    return false;
        }
        void enqueue(int q){
            if(isFull())
            {
              cout << "Queue is Full \n";
            }
            else{
                if(front==-1) front =0;
                back++;
                Q[back]=q;
                cout << "element inserted: " << q << "\n";
            }
        }

        bool isEmpty(){
            if(front==-1 && back==-1 ) return true;
             else return  false;
        }
        int dequeue()
        {
            if(isEmpty())
            { 
                cout << "Queue is empty\n";
                return -1;
            }
            else 
            {  auto x=Q[front];
                if(front>=back){ 
                    front=-1;
                    back=-1;
                   }
            else{
                front++;
            }
            cout << "element deleted: " << x <<"\n";
            return x;
           }
        }
};


class Node
{
    public:
        int value;
        Node *next;
};

struct Node_
{
   int num;
   Node_ *next;
};

struct Node_ *head_ = NULL;
void insert_Node(int num_)
{
      struct Node_ *newNode = new Node_;
      newNode->num = num_;
      newNode->next=head_;
      head_=newNode;
}

int main()
{
    insert_Node(13);
    insert_Node(18);
    insert_Node(10);
    insert_Node(9);
    insert_Node(8);
    
    struct Node_ *temp = head_;
    while(temp!=NULL)
    {
        cout << temp->num << " ";
        temp=temp->next;
    }
    cout <<"\n";

    Node* head;
    Node* one=NULL;
    Node* two=NULL;
    Node* three=NULL;

    one =new Node();
    two =new Node();
    three =new Node();
    
    one->value=1;
    two->value=2;
    three->value=3;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    while(head!=NULL)
    {
        cout << head->value << " ";
        head = head->next;
    } cout << endl;

    list<string> List{"Bop","CarL","KHu"};
    for(auto& i:List) {cout << i << " ";} cout << "\n";
    List.pop_back();
    List.push_front("lif");
    auto it=List.begin();
    List.insert(++it, "KIl");
    for(auto& i:List) { transform(List.begin(), List.end(), List.begin(), ::tolower); cout << i << " ";} cout << "\n";
    return 0;
}