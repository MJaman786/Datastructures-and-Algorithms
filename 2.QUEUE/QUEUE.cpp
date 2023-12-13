#include<iostream>
using namespace std;

class QUEUE{
    public:
        int front;
        int rear;
        int *arr;
        int size;
    QUEUE(int size){
        this->size=size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int item){
        if (rear >= size-1){
            cout<<"' Queue is full '"<<endl;
        }else{
            rear++;
            arr[rear]=item;
        }
    }
    void dequeue(){
        if(front == rear){
            cout << "' Queue is empty '" << endl;
        }else{
            front++;
            cout << "Dequeued element: " << arr[front] << endl;
        }
    }
    void print(){
        if (front==rear){
            cout<<"' Queue is empty '"<<endl;
        }else{
            cout<<"Elements of array : ";
            for (int i = front+1; i <= rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int choice,item,size;
    cout<<"Enter QUEUE size : ";
    cin>>size;
    QUEUE queue(size);
    while (1){
        cout<<endl;
        cout<<"--------- Menu ----------"<<endl;
        cout<<"1.EN-QUEUE"<<endl;
        cout<<"2.DE-QUEUE"<<endl;
        cout<<"3.Print"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"Enter item : ";
                cin>>item;
                queue.enqueue(item);
            break;

            case 2:
                queue.dequeue();
            break;

            case 3:
                queue.print();
            break;

            default:
                cout<<"Enter valid option"<<endl;
            break;
        }
    }
    
    return 0;
}
/*
~ g++ QUEUE.cpp -o QUEUE.out
~ ./QUEUE.out

Enter element size : 3

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 1    
Enter item : 1

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 1
Enter item : 2

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 1
Enter item : 3

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 1
Enter item : 4
' Queue is full '

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 3
Elements of array : 1 2 3 

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 2
Dequeued element: 1

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 2
Dequeued element: 2

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 2
Dequeued element: 3

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 2
' Queue is empty '

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 3
' Queue is empty '

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice : 7
Enter valid option

--------- Menu ----------
1.EN-QUEUE
2.DE-QUEUE
3.Print
Enter your choice :   
*/