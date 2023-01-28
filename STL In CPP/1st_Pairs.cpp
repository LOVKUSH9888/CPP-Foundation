//STL is divided into 4 parts :-)
// Algo, Containers, Functions & Iterators :

Pairs = can be treated as DataTypes - Lies in Utility Library -:-


1. pair<int, int> p = {1, 3}
cout<<p.first<<""<<p.second<<endl;

#nested property of pair for storing more int.
p = {1, {3, 4}}
cout<<p.second.second<<endl;

#pair array declaration
pair<int, int> arr[] = {{1,2}, {2,5}, {5, 1}};
cout<<arr[0].second<<endl;
