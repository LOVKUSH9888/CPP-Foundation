//It is similar to array  {it has indexes but Diff is we dont need to scan entire data for finding the data}
//It is used to store & retrieve data in O(1) time == iNSERTION, DELETITION & SEARCHING
//It is alo called mapping technique
///This can be used in multiple problems such as - ARRAY, LINKED LIST, GRAPH & DP
//# imp = Search Key +  Hash Table + Hash Function
// Hash Table = Data Structure 
// Hash Function = k mod 10 ===== 24/10 = 4 is remainder so we will store 24 at 4th index

///AT the point of collision we used two techniques -1. Chaining(Open Hashing) && 2. Open Addressing (Closed Hashing)
///In chaining = We make Linked List and add the data on same index by making chaining


////Hash MAp = a[key] = Value  ====== We can also use Insert Function ===== a["abc"] = 1 ========= a.insert("abc", 1)
//In case of array = The Value will be always = Int. = We called it Index
//& string can be anytbing = either int , double Or Char.



/////#implementaion of hashmap: Insert-delete-search
//1. Linked-List
//2. Balanced BST = This will better than Linked LIst.



//3.3.2023

/*iN -bUILT STL*/
//1.MAP - O(logN)
//2.Un-Ordered-MAP = O(1)


//Creating HashMap:-
#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //Map-Creation
    unordered_map<int, int> m;  //When key = int & value = int
    unordered_map<string, int> m2; //WHen key = string & value = int

    //Insertion-Method:-
    //1st make pair
    pair<string, int> p = make_pair("Love", 3);
    //Insert
    m2.insert(p);

    //Another method of insertion :-)
    m["Kush"] = 1;


    //Searching-Method::-
    cout<<m2["Love"]<<endl; //This methof will create a new entry by putting 0
    //2nd-way
    cout<<m2.at("Love")<<endl;  //use by at.

    cout<<m2.at("unknown_key")<<endl; //This will give uncaught error


    //Checking - Map - Size
    cout<<m2.size()<<endl;


    //To-Check Presence
    cout<<m2.count("bro")<<endl; //in this it will give 0 as its not present


    //Erase
    m2.erase("Love");
    cout<<m.size()<<endl;


    //Accessing elment = We use Iterators
    unordered_map<string, int>::iterator it = m2.begin();

    //now use while loop to print
    while(it != m2.end()){
        cout<<it->first<<it->second<<endl;
        it++;
    }

    return 0;
}



//LEETCODE 1838 : Frequency of the Most Frequent Element


///HASH_FUNCTION = Hash Code + Comparison Function



///Collision Handling -> 1. Open Hashing/Open Chaining = Put at the same index (Linked-List using Head)
//2. Closed Hashing/Open Addressing = 


//Revision:-
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string, int>  mymap;

    /// insert
    pair<string,int> p("abc",1);
    mymap.insert(p);

    mymap["def"] = 2;  /// like array

    /// find or access
     cout<<mymap["abc"]<<endl;
     cout<<mymap.at("abc")<<endl;

     cout<<"Size "<<mymap.size()<<endl;

     /// cout<<mymap.at("ghi")<<endl;   /// throw exception
     cout<<mymap["ghi"]<<endl;

    cout<<"Size "<<mymap.size()<<endl;


     /// check presence of a key
     if(mymap.count("ghi") > 0){
        cout<<"ghi is present"<<endl;
     }else{
        cout<<"not present"<<endl;
     }


     /// update
     mymap["abc"] = 20;

     /// erase
     mymap.erase("ghi");

     cout<<"Size "<<mymap.size()<<endl;


     /// check presence of a key
     if(mymap.count("ghi") > 0){
        cout<<"ghi is present"<<endl;
     }else{
        cout<<"not present"<<endl;
     }

    return 0;
}



