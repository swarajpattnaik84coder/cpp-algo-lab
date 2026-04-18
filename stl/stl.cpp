#include<bits/stdc++.h>
using namespace std;


void explain_vector(){
    //works on 0 indexing
    vector<int/*data type*/> vtr/*variable*/={1,4,2,5,3};//uninitalised vector preinitialized with values zero
    vtr.push_back(7);//insert element. acts similar to array
    vtr.emplace_back(9);//faster than push_back
    vtr.pop_back();//removes last element
    //vtr.push_front(8);//does not work in vector
    cout<<"size: "<<vtr.size()<<endl;//size of vector

    //vector printing method 1
    cout<<"front: "<<vtr.front()<<endl;//first element
    cout<<"back: "<<vtr.back()<<endl;//last element
    for(int i=0;i<vtr.size();i++){
        cout<<vtr[i]<<" ";
    }
    cout<<endl;

    //iterator
    vector<int>::iterator itr=vtr.begin();//iterator(pointer) pointing to first element
    vector<int>::iterator itr2=vtr.end();//iterator(pointer) pointing to one position after last element

    //vector printing method 2
    for(vector<int>::iterator i=itr;i<itr2;i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    auto it=vtr.begin();//auto keyword automatically detects the data type and assigns the type of iterator
    auto it2=vtr.end();

    //vector printing method 3
    for(auto i: vtr){
        cout<<i<<" ";
    }
    cout<<endl;

    //reverse iterator
    vector<int>::reverse_iterator ritr1=vtr.rbegin();//reverse iterator pointing to last element
    vector<int>::reverse_iterator ritr2=vtr.rend();//revferse iterator pointing to one position before first element
    //vector printing method using reverse iterator
    for(auto i=vtr.rbegin();i!=vtr.rend();i++){//Reverse iterator reverses the meaning of increment and decrement.
        cout<<*i<<" ";
    }
    cout<<endl;

    //dupicating a vector
    vector<int> duplicate(vtr);//copying vector vtr to duplicate
    for(auto i:duplicate){
        cout<<i<<" ";
    }
    cout<<endl;
    //duplicating range of vector
    vector<int> rngdup(vtr.begin()+2,vtr.end()-1);//copying from index 2 to second last index;
    for(auto i: rngdup){
        cout<<i<<" ";
    }
    cout<<endl;

    //erase function
    vtr.erase(vtr.begin());//erases first element
    for(auto i: vtr){
        cout<<i<<" ";
    }
    cout<<"\n";
    vtr.erase(vtr.begin()+1,vtr.end()-1);//erases from index 1 to second last index
     for(auto i: vtr){
        cout<<i<<" ";
    }
    cout<<"\n";

    //clear function
    vtr.clear();//removes all elements

    //accessing vector element
    cout<<vtr[4]<<"\n";;//does not throw an error if index is out of bounds, prints 4th index value if exists else garbage value
    cout<<vtr.at(4);//throws an error if index is out of bounds, prints 4th index value if exists else error message

    // vector swaping
    vector<int> v1={1,2,3,4};
    vector<int>v2={5,6,7,8};

    v1.swap(v2);//swaps contents of v1 and v2
    for(auto i: v1){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(auto i: v2){
        cout<<i<<" ";
    }
    cout<<"\n";
    v2.swap(v1);//swaps contents of v2 and v1
    for(auto i: v1){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(auto i: v2){
        cout<<i<<" ";
    }
    cout<<"\n";

    //insertion in vector
    for(auto i: vtr){
        cout<<i<<" ";
    }  
    vtr.insert(vtr.begin()+2,10);//insert 10 at index 2, shifts rest of the elements to right. if you want to insert 10 before 2 
    cout<<"\n";
    for(auto i: vtr){
        cout<<i<<" ";
    }  
    cout<<"\n";

}

void explain_list(){
    //list allows to insert at front
    list<int> l={1,2,8,9};//inserts at end
    l.push_front(-1);//inserts at front
    l.push_back(10);//inserts at back
    cout<<"list: ";
    for(auto i: l){
        cout<<i<<" ";
    }
    cout<<"\n";
    //everything similar to vector except accessing element by index is not possible
    cout<<"front: "<<l.front()<<"\n";
    cout<<"back: "<<l.back()<<"\n";

}

void explain_stack(){
    //last in first out(LIFO) data structure
    
    //stack <int> s={1,2,3,4}; std::stack is a container adaptor, not a container itself.
    //It does not support initializer_list.
    stack <int> s;
    s.push(9);//inserts 9 at top
    cout<<"top: "<<s.top()<<"\n";//prints top element
    s.push(0);//inserts 0 at top
    cout<<"top: "<<s.top()<<"\n";//prints top element
    s.pop();//removes top element
    cout<<"top: "<<s.top()<<"\n";//prints top element
    cout<<"size: "<<s.size()<<"\n";//prints size of stack
    cout<<"is empty: "<<s.empty()<<"\n";//prints 0 if not empty else 1

    //stack copying
    stack<int> t = s;   // copy at declaration, copies stack s to new stack t, can be done during initialisation also

    //stack printing
    
    /*for(int i=1;i<=s.size();i++){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<"\n";
    s.size() changes after every pop()
Loop condition becomes invalid*/
    
    while(t.empty()==0){
        cout<<t.top()<<" ";
        t.pop();
    }
    cout<<"\n";



}

void explain_queue(){
    // first in first out(FIFO) data structure

    queue <int> q;
    q.push(5);//inserts 5 at back
    cout<<"front: "<<q.front()<<"\n";//prints front element
    q.push(10);//inserts 10 at back
    q.push(15);//inserts 15 at back
    cout<<"front: "<<q.front()<<"\n";//prints front element
    q.pop();//removes front element
    cout<<"front: "<<q.front()<<"\n";//prints front element
    while(q.empty()==0){
        cout<<q.front()<<" ";
        q.pop();
    }

    // similarly do push,emplace, front, pop, size, swap, empty
}
void explain_priority_queue(){

    //max heap by default
    priority_queue<int> pq;
    pq.push(9);
    pq.push(3);
    pq.push(5);
    while(pq.empty()==0){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    //priority for smallest
    priority_queue <int ,vector<int>, greater<int>> pqm;
    pqm.push(9);
    pqm.push(3);
    pqm.push(5);
    while(pqm.empty()==0){
        cout<<pqm.top()<<" ";
        pqm.pop();
    }

}

void explain_set(){
    //stores unique elements only
    // stores in ascending order

    set <int> st;
//insert / emplace
    st.insert(8);
    st.insert(9);
    st.insert(33);
    st.insert(8);
    st.insert(1);

//find()
    set<int> :: iterator it = st.find(9);//returns an iterator pointing to location storing 9
    cout<<*it<<"\n";

//count
    cout<<st.count(9);//returns 1 if elememnt present else 0

//erase (iterator, element, (it1, it2))
    st.erase(9);//erase 9


    /*set is implemented as a balanced BST,So its iterators are: NOT index-based
    st.erase(st.begin()+1,st.end()-2);
    only for:vector, deque, array

*/

    auto itr=st.begin();
    auto itr2 =st.end();
    itr++;itr++;
    st.erase(itr);
    for(auto i: st){
        cout<<i<<" ";
    }
    cout<<"\n";
    st.erase(itr,itr2);

//lower_bound
//returns an iterator pointting to element greater than equal to given element. given elemnt can be outside set also
    auto itt=st.lower_bound(10);
    cout<<*itt<<"\n";
    if(itt==st.end()){
        cout<<"No element greater than equal to given\n";
    }

//upper bound
//returns an iterator pointting to element greater than given element. given elemnt can be outside set also
auto it=st.upper_bound(10);
if(it!=st.end()){
    cout<<*it<<"\n";}
else{
    cout<<"No element greater than given\n";
}
}
void explain_multiSet(){

    multiset<int> ms;
    //stores duplicate elements also in ascew
    ms.insert(5);
    ms.insert(5);   
    ms.insert(3);
    ms.insert(8);
    ms.erase(5);//erases all occurences of 5
    ms.insert(5);
    ms.insert(5);
    cout<<ms.count(5)<<"\n";//prints number of occurences of 5
        for(auto i: ms){
            cout<<i<<" ";
        }


}

void explain_unordered_set(){

    //stores unique elements only but not sorted. upper and lower bound also not applicable because of unsorted nature

    // it is used for better time complexity 

    unordered_set<int> us;
    us.insert(5);
    us.insert(9);
    us.insert(6);
    us.insert(6);
    us.insert(3);
    us.insert(0);

    for(auto i: us){
        cout<<i<<" ";
    }
    auto it=us.find(6);
    if(it!=us.end()){
        cout<<*it;
    }
    else{
        cout<<"not found";
    }
}

void explain_map(){
    //no duplicates
    map<int,string> mpp;
    //mpp.insert({key,value});
    mpp.insert({1,"one"});
    mpp.insert({2,"two"});
    mpp[3]="three";
    mpp[4]="four";
    //stores according to ascending order of keys ALWAYS
    for(auto i: mpp){
        cout<<"("<<i.first<<","<<i.second<<")"<<"|";
    }
    map<string,int> mp;
    mp["one"]=1;
    mp["two"]=2;
    mp["three"]=3;
    mp["four"]=4;
     for(auto i: mp){
        cout<<"("<<i.first<<","<<i.second<<")"<<"|";
    }
    auto itr=mpp.lower_bound(3);//iterator to key greater than equal to 3
    cout<<"\n"<<itr->first<<"->"<<itr->second<<"\n";
}

void explain_unordered_map(){

    //no duplicaby with no specific order of keys
    unordered_map<int ,string> ump;
    ump[1]="one";
    ump[2]="two";
    ump[3]="three";
    ump[3]="four";
    for(auto i: ump){
        cout<<"("<<i.first<<","<<i.second<<")"<<"|";
    }

    
}

void explain_multimap(){
    //duplicates allowed with ascending order of keys
    multimap<int,string> mmp;
    mmp.insert({1,"rocky"});
    mmp.insert({2,"ffff"});
    mmp.insert({1,"gggg"});
    mmp.insert({-1,"kkkk"});
    for(auto i: mmp){
        cout<<"("<<i.first<<"->"<<i.second<<")"<<"\n";
    }


    auto it = mmp.equal_range(2);//returns pair of iterators pointing to first and last occurence of key 2
    cout<<"Elements with key 2 are: \n";
    for(auto i= it.first;i!=it.second;i++){
        cout<<(*i).first<<","<<(*i).second<<"\n";
    }



}

void explain_sort(){
    vector<int> v={2,34,9,3,6,21,8,4};
    sort(v.begin()+2,v.end()-2);
    for(auto i: v){
        cout<<i<<" ";
    }
}

void explain_accumilate(){
    int arr[]={1,2,5,4,6,7};
    int sum=accumulate(arr+1,arr+4,6);//sums from index 1 to index 3 and adds 6 to the sum
    cout<<sum<<"\n";
}

void explain_count(){
     int arr[]={1,2,0,3,3,4,5,4,6,3,3,7};
     cout<<count(arr,arr+5,3)<<"\n";//counts number of occurences of 3 from index 0 to index 4
     cout<<count(arr,arr+12,3)<<"\n";
     // similar for vecror also

}
void explain_find(){
    int arr[]={1,2,0,3,3,4,5,4,6,3,3,7};
    auto i= find(arr,arr+12,3);//returns pointer to first occurence of 3 else returns arr+12
    if(i!=arr+12){
        cout<<"Element found at index: "<<i - arr<<"\n";
    }
    else{
        cout<<"Element not found\n";
    }
}

void explain_next_permutation(){

    //prints next permutations in sorted order of ascending
    string s="abc";
    do{
        cout<<s<<"\n";
    }while(next_permutation(s.begin(),s.end()));
    string t="bac";
    do{
        cout<<t<<"\n";
    }while(next_permutation(t.begin(),t.end()-1));
}

void explain_prev_permutation(){

    //prints next permutations in sorted order of descending
    string s="cba";
    do{
        cout<<s<<"\n";
    }while(prev_permutation(s.begin(),s.end()));
    string t="bac";
    do{
        cout<<t<<"\n";
    }while(prev_permutation(t.begin(),t.end()-1));
}

void explain_max_min_element(){
    int arr[]={1,5,3,9,0,4,7};
    auto it= max_element(arr,arr+7);//returns pointer to max element
    cout<<"Max element is: "<<*it<<"\n";
   
    auto itr= min_element(arr,arr+7);
    cout<<"Max element in vector is: "<<*itr<<"\n";
}
void explain_reverse(){
    vector<int> v={1,4,2,5,3};
    reverse(v.begin(),v.end());
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void explain_reverse(){
    int arr[]={1,5,3,4,6};
    reverse(arr,arr+3);
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<"\n";
}

bool internal_comparator(int a, int b){
    if (a>b) return 1;
    else return 0;
}
bool internal_comp(pair<int,int>ele1,pair<int,int>ele2){
    if(ele1.first>ele2.first)return 1;
    else if(ele1.first>ele2.first && ele1.second>ele2.second)return 1;
    else{return 0;}
}
/*comparator(a, b)
👉 If it returns true, it means:

“a should come BEFORE b in the final sorted order.”*/
void explain_comparator(){
    vector<int> v={1,4,2,5,3};
    sort(v.begin(),v.end()-2,internal_comparator);//sorts in descending order except last two elements
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
    sort(v.begin()+2,v.end(),internal_comparator);//sorts in ascending order except last two elements. actually no need for ascendig order comparator as it is default
    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<"\n";

    pair<int,int> arr[]={{1,2},{1,1},{2,4}};
sort(arr,arr+3,internal_comp);
for(auto i: arr){
    cout<<i.first<<"->"<<i.second<<"\n";
}}
int main(){

explain_vector();
explain_list();
explain_stack();
explain_queue();
explain_priority_queue();
explain_set();
explain_multiSet();
explain_map();
explain_unordered_map();
explain_multimap();
explain_sort();
explain_accumilate();
explain_count();
explain_find();
explain_next_permutation();
explain_prev_permutation();
explain_comparator();



    return 0;
}