// Remove Duplicates : -
// int array = 1, 2, ,3 ,2 ,1, 5, 4, 1, 3
// return output = vector <int> <1, 2, 3, 5, 4>  //Here all the elemets are same order

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int *a, int n)
{
    vector<int> output;
    unordered_map<int, bool> mymap;

    for (int i = 0; i < n; i++)
    {
        if (mymap.count(a[i]) == 0)
        {
            output.push_back(a[i]);
            mymap[a[i]] = true;
        }
    }
    return output;
}

int main()
{
    int a[] = {1, 5, 2, 4, 4, 3, 3, 6, 7, 1, 1, 2};
    vector<int> output = removeDuplicates(a, 12);

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " " << endl;
    }

    return 0;
}
