//It is similar to array  {it has indexes but Diff is we dont need to scan entire data for finding the data}
//It is used to store & retrieve data in O(1) time
//It is alo called mapping technique
//# imp = Search Key +  Hash Table + Hash Function
// Hash Table = Data Structure 
// Hash Function = k mod 10 ===== 24/10 = 4 is remainder so we will store 24 at 4th index

///AT the point of collision we used two techniques -1. Chaining(Open Hashing) && 2. Open Addressing(Closed Hashing)
///In chaining = We make Linked List and add the data on same index by making chaining