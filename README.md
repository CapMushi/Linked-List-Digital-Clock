Linked List Digital Clock Overview:
This project implements a class-based approach to display and manipulate a digital clock using a linked list structure to represent the digits from 0 to 9. The digitlinkedlist class models each digit using a network of nodes, while the time class provides methods to display and modify the time, such as adding or subtracting minutes and hours (notifies if date changes). Alsocan convert from 24-hr to 12-hr format.

How to Run:
1. Clone the Repository
   git clone https://github.com/CapMushi/Linked-List-Digital.git
   cd Linked-List-Digital

2. Compile the Code
   Use a C++ compiler to compile the code. For example, with g++:
   g++ -o digital_clock q4.cpp
   
4. Run the Executable
   ./digital_clock

Classes
Node
Represents a single element in the digit's linked list.

  class node {
      public:
          node *right;
          node *left;
          node *up;
          node *down;
  
          node() { right = NULL; left = NULL; up = NULL; down = NULL; }
  };
  
digitlinkedlist
  Represents a single digit using a linked list structure of nodes.

Public Members:
  node *tl, *tr, *ml, *mr, *bl, *br;
  node *head;
  
Constructor: 
  digitlinkedlist(int d); - Constructs a digit using nodes.
  
Methods:
  void identifynumber(int d); - Sets up the linked list structure for the digit.
  void display(); - Displays the digit based on its nodes.
  ~digitlinkedlist(); - Destructor to clean up nodes.

Time:
  Represents the time using four digitlinkedlist instances.

Private Members:
  digitlinkedlist *d1, *d2, *d3, *d4;
  int mins, hrs;
  
Constructor:
  time(int time); - Initializes the time based on the given integer.
  
Methods:
  void displaytime(); - Displays the current time.
  void additionofminutes(int n); - Adds minutes to the current time.
  void subtractionofminutes(int n); - Subtracts minutes from the current time.
  void additionofhours(int n); - Adds hours to the current time.
  
Usage:
1. Creating a digitlinkedlist
   digitlinkedlist digit(5);
   digit.display();
This creates and displays the digit 5 using the linked list structure.

2. Creating and displaying time
  time t(1234);
  t.displaytime();
This creates a time object with the time 12:34 and displays it.

3. Modifying the time
   t.additionofminutes(15);
   t.subtractionofminutes(10);
   t.additionofhours(2);
These methods modify the current time by adding or subtracting minutes and hours.

4. Conversion from 24-hr to 12-hr format
  clock.conversionto12hrformat();
Example
Here's an example of creating a time object, displaying it, adding minutes, and displaying the updated time:
  int main() {
      time myTime(1234); // 12:34
      myTime.displaytime();
      
      myTime.additionofminutes(30); // Adds 30 minutes
      myTime.displaytime();
      
      myTime.additionofhours(2); // Adds 2 hours
      myTime.displaytime();
  
      myTime.subtractionofminutes(45); // Subtracts 45 minutes
      myTime.displaytime();
  
      return 0;
  }
  
Notes:
The digitlinkedlist class relies on creating specific node connections for each digit, which are then used by the time class to display and manipulate the time.
The time class handles edge cases like adding or subtracting minutes that result in changing the hour or even the day.
The destructor in digitlinkedlist ensures that all nodes are properly deleted to avoid memory leaks.
