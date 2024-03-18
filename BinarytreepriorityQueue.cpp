#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*b;
        *b=*a;
        *a=temp;
}

void heapify(vector<int> &tree, int i)
{
    // start with index 0
    int largest = i; // assumption = largest(max element>child nodes)
    int leftChild = 2*i + 1;
    int rightChild = 2*i + 2;
    //compare lest child
    if(tree[leftChild]>tree[largest] && leftChild<tree.size())
    { largest = leftChild; }
    //compare right child
    if(tree[rightChild]>tree[largest] && leftChild<tree.size())
    { largest = rightChild; }

    if(largest!=i)
    { 
        swap(&tree[i], &tree[largest]);
        heapify(tree, largest);
    }
}

void insert(vector<int> &tree, int newMun)
{
    if(tree.size()==0)
        { tree.push_back(newMun);}
    else{
          tree.push_back(newMun);
          for(int i = tree.size()/2-1; i>=0; i--)
          {
            heapify(tree, i);
          }  
    }
}

void remove(vector<int> &tree, int num)
{
    int i;
    for(i=0; i<tree.size(); i++)
    {
        if(num==tree[i])
        break;
    }
    swap(&tree[i],&tree[tree.size()-1]);
    tree.pop_back();
    for(auto it=tree.size()/2-1; i>=0; i--)
    {
        heapify(tree, it);
    }
}

void Display(vector<int>&tree)
{
    for(int i=0; i<tree.size(); ++i)
      cout <<tree[i] << " ";
    cout <<"\n";
}

int main()
{
    vector<int> heaptree;

    insert(heaptree, 4);
    insert(heaptree, 2);
    insert(heaptree, 4);
    insert(heaptree, 2);
    Display(heaptree);

    remove(heaptree, 2);
    Display(heaptree);
    return 0;
}