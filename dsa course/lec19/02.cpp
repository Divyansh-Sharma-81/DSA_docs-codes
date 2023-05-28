//vector in stl
//vector is dynamic array so if more elements than the vector ka size are entered then the vecotr makes a copy of double its size to also store newer values and dumps the old vector


#include <iostream>
#include<vector>
using namespace std;
 
int main()
{

    vector<int>v;  //declares vector of size 0 with no initialization values
    vector<int>a(5,1);//declares vector of size 5 and initialization of 1. as no other initalisation done, all elements in it become 1.
    
    cout<<"printing a(5,1)"<<endl;
    for(int j:a){

        cout<<a[j]<<" ";

    }
    cout<<endl;


    //creating a vector with copy of a inside it
    vector<int>last(a);
    cout<<"printing last(a)"<<endl;
    for(int j:last){

        cout<<last[j]<<" ";

    }
    cout<<endl;


    cout<<"capacity: "<<v.capacity()<<endl; 
    //by default capacity is zero

    //push_back is used to enter new element in vector
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl; 

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl; 

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl; 
    //capactity doubles each time. hence at third push its capacity becomes 4

    //size tells nums of elements, while capacity tells max size possible at the time
    cout<<"size: "<<v.size()<<endl;

    //at method
    cout<<"element at 2nd index: "<<v.at(2)<<endl;
    
    //front and back return first and last element pushed into it.
    cout<<"front: "<<v.front()<<" back: "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //popping element
    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear method
    cout<<"before clear size: " <<v.size()<<endl;
    v.clear();
    cout<<"after clear size: " <<v.size()<<endl;

    return 0;
}