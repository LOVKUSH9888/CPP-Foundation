// SET = It stores Everything in  " sorted & Unique "

void explainSet(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    Set will place everthing in a Sorted & Ordered 

    Output of the above operations will be

    {1}
    {1,2}
    {1,2}
    {1,2,4}
    //here the game = {1, 2, 3, 4}



    /Important functions :

    auto it = st.find(3);  // It will find 3 in = {1,2,3,4}

    auto it = st.find(6);

    st.erase(5);

}