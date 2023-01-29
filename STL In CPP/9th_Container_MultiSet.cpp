//Multiset = same as Set & It stores Duplicate elements also

void explainMultiset(){
    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); //it will erase all the 1 

    ms.erase(ms.find(1)); // Only a single 1 is erased

}