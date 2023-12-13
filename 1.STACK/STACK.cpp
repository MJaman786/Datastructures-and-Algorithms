#include<iostream>
using namespace std;

class STACK{
    public:
        int size;
        int top;
        int *arr;
    STACK(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }

    void push(int item){
        if (top >= size-1){
            cout<<"' Stack Overflow '"<<endl;
        }else{
            top++;
            arr[top]=item;
        }
    }

    void print(){
        cout<<"Elements of stack : ";
        for (int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void pop(){
        if (top == -1){
            cout<<"' Stack Underflow '"<<endl;
        }else{
            cout<<"' "<<arr[top]<<" ' Item poped"<<endl;
            top--;
        }
    }

    void peek(){
        if (top==-1){
            cout<<"' Stack is empty '"<<endl;
        }else{
            cout<<"Topmost element is ' "<<arr[top]<<" '"<<endl;
        }
    }
};

int main(){
    int size,ch,item;
    cout<<"Enter size of stack : ";
    cin>>size;
    STACK stack(size);
    while (1)
    {   
        cout<<endl;
        cout<<"------ Menu ------"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Print"<<endl;
        cout<<"4.Peek"<<endl;
        cout<<"5.End"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
                cout<<"Enter item : ";
                cin>>item;
                stack.push(item);
            break;

            case 2:
                stack.pop();
            break;

            case 3:
                stack.print();
            break;

            case 4:
                stack.peek();    
            break;

            case 5:
                return 0;
            break;

            default:
                cout<<"Enter valid option..";
            break;
        }
    }
    
    return 0;
}
/*
-------- output -----------
~ g++ STACK.cpp -o STACK.out
~ ./STACK.out

Enter size of stack : 3
------ Menu ------  
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 1
Enter item : 1

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 1
Enter item : 2

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 1
Enter item : 3

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 1
Enter item : 4
' Stack Overflow '

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 3
Elements of stack : 3 2 1 

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 4
Topmost element is ' 3 '

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 2
' 3 ' Item poped

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 2
' 2 ' Item poped

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 2
' 1 ' Item poped

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 2
' Stack Underflow '

------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 9
Enter valid option..
------ Menu ------
1.Push
2.Pop
3.Print
4.Peek
5.End
Enter your choice : 5

*/