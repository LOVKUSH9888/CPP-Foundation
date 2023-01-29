// Priority Queue = The element having the largest values stays at the top == {10, 8, 5, 2, 1} = here 10 has the higest value amongst all
//Mainly used - push, top & pop
//Time Complexity = Push  & Pop = logn          &&               Top = O(1)

void explainPQ()
{

    //This is Called = MAx. Heap
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // This will print = 10
    pq.pop();         // {8, 5, 2}

    cout << pq.top(); // print = 8





    //Now = Min Heap 
    priority.queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // This will print = 2

}