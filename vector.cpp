#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;
    cout<<"size= "<<vec.size()<<endl;
    vec.push_back(35);
    vec.push_back(56);
    vec.push_back(57);
    vec.push_back(51);
    vec.push_back(50);
    vec.push_back(79);
    
    cout<<"size after push :  "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after pop :  "<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
    
    cout<<"element at front: "<<vec.front()<<endl;
    cout<<"element at back: "<<vec.back()<<endl;
    cout<<"element at position 3: "<<vec.at(3)<<endl;
    cout<<"capacity of the vector: "<<vec.capacity()<<endl;  /*capacity becomes twice 
    when an element is extra added to the vector above the current capacity
    (dynamic allocation of an elemnt in the memory in vector).*/
    return 0;
}
