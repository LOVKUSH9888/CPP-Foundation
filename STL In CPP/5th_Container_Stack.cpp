// Stack = LIFO = LAST IN FIRST OUT = main function = push, pop & top 
//Time complexity will br of all the operation = O(1);

void explainStack(){
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {2, 1}

    st.emplace(5); // It is similar to push = {5, 2, 1};

    cout << st.top(); // This will print 5 as it was LAst in above
    st.pop(); // 
    cout << st.top();
    cout << st.size();
    cout<<st.empty();

    stack<int>st1, st1;
    st1.swap(st2);
}
