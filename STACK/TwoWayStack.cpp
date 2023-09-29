#include <iostream>
using namespace std;

class STACK {
public:
  int *arr;
  int size;
  int topL;
  int topR;
  int mid;

  STACK(int size) {
    this->size = size;
    arr = new int[size];
    mid = size / 2;
    topL = -1;
    topR = mid;
  }

  void pushL(int item) {
    if (topL >= mid - 1) {
      cout << "Left-Stack is full" << endl;
    } else {
      topL++;
      arr[topL] = item;
    }
  }

  int popL() {
    if (topL < 0) {
      cout << "Left-Stack is empty" << endl;
      return -1;
    } else {
      int item = arr[topL];
      topL--;
      return item;
    }
  }

  void printL() {
    cout<<"[ ";
    for (int i = 0; i <= topL; i++) {
      cout<<arr[i] << " ]";
    }
    cout<<" ]"<<endl;
  }

  void pushR(int item) {
    if (topR >= size) {
      cout << "Right-Stack is full" << endl;
    } else {
      topR++;
      arr[topR] = item;
    }
  }

  int popR() {
    if (topR <= mid) {
      cout << "Right-Stack is empty" << endl;
      return -1;
    } else {
      int item = arr[topR];
      topR--;
      return item;
    }
  }

  void printR() {
    cout<<"[ ";
    for (int i = mid + 1; i <= topR; i++) {
      cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;
  }

  void print_stack() {
    cout<<"[ ";
    for (int i = 0; i <= topR; i++) {
      cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;
  }
};

int main() {
  int ch, item;
  STACK s(5);
  while (1) {
    cout << "\n--- Two-Stack operations ---" << endl;
    cout << "1. Push  Left   Stack" << endl;
    cout << "2. Pop   Left   Stack" << endl;
    cout << "3. Print Left   Stack" << endl;
    cout << "4. Push  Right  Stack" << endl;
    cout << "5. Pop   Right  Stack" << endl;
    cout << "6. Print Right  Stack" << endl;
    cout << "7. Print both   Stacks"<< endl;
    cout << "8. Quit" << endl;
    cout << "Enter your choice = ";
    cin >> ch;
    switch (ch) {
    case 1:
      cout << "Enter item = ";
      cin >> item;
      s.pushL(item);
      break;

    case 2:
      item = s.popL();
      if (item != -1)
        cout << "Element '" << item << "' popped from Left Stack" << endl;
      break;

    case 3:
      cout << "Elements of Left Stack = ";
      s.printL();
      break;

    case 4:
      cout << "Enter item = ";
      cin >> item;
      s.pushR(item);
      break;

    case 5:
      item = s.popR();
      if (item != -1)
        cout << "Element '" << item << "' popped from Right Stack" << endl;
      break;

    case 6:
      cout << "Elements of Right Stack = ";
      s.printR();
      break;

    case 7:
      cout << "Elements of Both Stacks:" << endl;
      s.print_stack();
      break;

    case 8:
      exit(0);

    default:
      cout << "Enter a valid option" << endl;
      break;
    }
  }
  return 0;
}
/*
--- Two-Stack operations ---
1. Push  Left   Stack       
2. Pop   Left   Stack       
3. Print Left   Stack       
4. Push  Right  Stack       
5. Pop   Right  Stack       
6. Print Right  Stack       
7. Print both   Stacks      
8. Quit
Enter your choice = 1       
Enter item = 1

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 1
Enter item = 2

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 4
Enter item = 3

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 4
Enter item = 5

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 4
Enter item = 6

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 4
Enter item = 7
Right-Stack is full

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 7
Elements of Both Stacks:
[ 1 2 0 3 5 6 ]

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 2
Element '2' popped from Left Stack

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 2
Element '1' popped from Left Stack

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 5
Element '6' popped from Right Stack

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 5
Element '5' popped from Right Stack

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 5
Element '3' popped from Right Stack

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 5
Right-Stack is empty

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice = 7
Elements of Both Stacks:
[  ]

--- Two-Stack operations ---
1. Push  Left   Stack
2. Pop   Left   Stack
3. Print Left   Stack
4. Push  Right  Stack
5. Pop   Right  Stack
6. Print Right  Stack
7. Print both   Stacks
8. Quit
Enter your choice =   
*/