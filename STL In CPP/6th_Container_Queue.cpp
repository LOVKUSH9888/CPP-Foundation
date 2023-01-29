//QUEUE = FIFO = First in First Out
void explainQueue(){
    queue<int>q;

    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout << q.back(); // prints 9


    //q is { 1, 2, 9}
    cout << q.front();  // this will print 1


    q.pop();
    cout << q.front(); // this ll print = 2


}
