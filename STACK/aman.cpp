#include<iostream>
using namespace std;

class stack{
    public:
        int top;
        int size;
        int *arr;
    stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }
    void push(int iteam){
        if (top < size-1)
        {
            top++;
            arr[top]=iteam;
        }
        else{
            cout<<"\n====== Stack Overflow ======"<<endl;
        }
        
    }
    void pop(){
        if (top>-1)
        {
            top--;
            cout<<arr[top+1]<<" = is removed from stack"<<endl;
        }
        else{
            cout<<"\n======= Stack is Empty ======"<<endl;
        }
        
    }
    void print(){

        cout<<"Elements = ";
            for (int i = 0; i <= top; i++)
            {
                cout<<arr[i]<<" ";
            }
        
    }

    void peek(){
        cout<<"-------------------------------\n";
        cout<<"|Top Element of Stack is = "<<arr[top]<<"  |\n";
        cout<<"-------------------------------\n";
    }

};

int main(){

    int ch,iteam;

    stack s(4);
    /*
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    s.push(5);
    s.pop();
    s.peek();
    */
    while (ch!=0)
    {
        cout<<"\n1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Peek\n";
        cout<<"4.Print\n";
        cout<<"Enter your Choice = ";
        cin>>ch;

        switch (ch)
        {
            case 1:
                cout<<"\nEnter element = ";
                cin>>iteam;
                s.push(iteam);
            break;
            case 2:
                s.pop();
            break;
            case 3:
                s.peek();
            break;
            case 4:
                s.print();
            break;

        }

    }
    
    return 0;
}
/*
1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 1

Enter element = 1

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 1

Enter element = 2

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 1

Enter element = 3

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 1

Enter element = 4

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 1

Enter element = 5

====== Stack Overflow ======

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 3
-------------------------------
|Top Element of Stack is = 4  |
-------------------------------

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 4
Elements = 1 2 3 4
1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 2
4 = is removed from stack

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 2
3 = is removed from stack

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 2
2 = is removed from stack

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 2
1 = is removed from stack

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice = 2

======= Stack is Empty ======

1.Push
2.Pop
3.Peek
4.Print
Enter your Choice =
*/