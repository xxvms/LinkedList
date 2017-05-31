#include <iostream>
struct link                 // one element of list
{
    int data;               // data item
    link* next;             // pointer to next link
};
class LinkList              // a list of links
{
private:
    link* first;            // pointer to 1st link
public:
    LinkList()              // no arguments constructor
    { first = NULL;}        // no first link
    void addItem(int d);    // add data link item (one link)
    void display();         // display all links
};
void LinkList::addItem(int d) // add data item
{
    link* newLink = new link; // make new link
    newLink->data = d;       // give it data
    newLink->next = first;   // it points to next link
    first = newLink;         // now first points to this
}
void LinkList::display()    // display all links
{
    link* current = first;  // set pointer to first link
    while (current != NULL) // quit on last link
    {
        std::cout << current->data << std::endl;    // print data
        current = current->next;                    // move to next link
    }
}

int main()
{
    LinkList link;          // make linked list
    
    link.addItem(25);       // add 4 items to list
    link.addItem(36);
    link.addItem(49);
    link.addItem(64);
    
    link.display();         // display all links
    
    
    system("pause");
    return 0;
}