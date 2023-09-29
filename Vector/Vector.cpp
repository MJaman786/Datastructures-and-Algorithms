#include<iostream>
#include<vector>
#include<unistd.h>
using namespace std;
int main(){
    int done;
    vector<int>my_vector;

                // vector.push_back();
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(1);
        // Before Vector push, capacity = 0
        // After Vector push, capacity = 1
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(2);
        // Before Vector push, capacity = 1
        // After Vector push, capacity = 2
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(3);
        // Before Vector push, capacity = 2
        // After Vector push, capacity = 4  -- it gets doubled up
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity(); 
    my_vector.push_back(4);
        // Before Vector push, capacity = 4
        // After Vector push, capacity = 4
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(5);
        // Before Vector push, capacity = 4
        // After Vector push, capacity = 8  -- it get doubled up
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(6);
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(7);
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(8);
    cout<<"\nAfter Vector push, capacity = "<<my_vector.capacity();
    cout<<"\n ----------------- After pushing next element -----------"; 
    cout<<"\n------the capacity of vector will get doubled -----------\n";
    cout<<"\n and capacity will become 16 ";
    cout<<"\nBefore Vector push, capacity = "<<my_vector.capacity();
    my_vector.push_back(9);
    cout<<"\nAfter Vector push, capacity = "<<my_vector.capacity();
    cout<<"\n Elements of vector [";

    // vector.at();
    for(int i = 0; i < my_vector.size(); i++){
        cout << my_vector.at(i)<<"|";
    }
    cout<<"]";

    //vector.pop_back();
    my_vector.pop_back();
    my_vector.pop_back();
    cout<<"\n Elements of vector [";
    for(int i = 0; i < my_vector.size(); i++){
        cout << my_vector.at(i)<<"|";
    }
    cout<<"]";

    // vector.at(index_number) = number_to_update;

    my_vector.at(0) = 2;
    my_vector.at(2) = 2;
    my_vector.at(3) = 2;
    cout<<"\n Elements of vector after updation [";
    for(int i = 0; i < my_vector.size(); i++){
        cout << my_vector.at(i)<<"|";
    }
    cout<<"]\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<"Done | ";
        sleep(1);
    }
    
    return 0;
}

/*
-------------- output --------------

note : initially capacity of vector is 2 then when vector is full
    it doubles it capcity 
Before Vector push, capacity = 0
Before Vector push, capacity = 1
Before Vector push, capacity = 2--|
Before Vector push, capacity = 4
Before Vector push, capacity = 4---|
Before Vector push, capacity = 8
Before Vector push, capacity = 8
Before Vector push, capacity = 8
After Vector push, capacity = 8----|
 ----------- After pushing next element the capacity of vector will get doubled -----------
 and capacity will become 16
 Before Vector push, capacity = 8
 After Vector push, capacity = 16
 Elements of vector [1|2|3|4|5|6|7|8|9|]
 Elements of vector [1|2|3|4|5|6|7|]
 Elements of vector after updation [2|2|2|2|5|6|7|]
*/