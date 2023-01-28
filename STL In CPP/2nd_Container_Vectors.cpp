//Vectors are the same as dynamic arrays with the ability to resize

void explainVectors(){
    vector<int> lov;

    lov.push_back(1);
    lov.emplace_back(2); // faster than push back


    vector<pair<int, int>vec;

    lov.push_back({1, 2}); //Bracket difference here with the emplace back
    lov.emplace_back(1, 2 ); 



    #If I wanna create the 5 vector of 20 
    vector<int> lov(5);
    vector<int> lov1(5, 20);   // = {20, 20, 20, 20, 20}


    //Accessing Elements in Vectors



    cout<<lov.[1]<<endl;

    #iterator = points to the memory where elemets exists method of accessing elements in Vectors
    //syntax
    vector<int>::iterator lov1 = lov.begin();
    cout<<*(lov1)<<"";

    vector<int>::iterator lov1 = lov.end();



    #Deletion of the vector elements =use erase
    v.erase(v.begin()+1);


    #insert function now

    v.insert<(v.begin(), 300);



    #Copy function now =Not req as much

    v.insert<(v.begin(),copy.begin(), copy.end());

}