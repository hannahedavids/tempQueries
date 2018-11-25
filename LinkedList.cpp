#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

// constructor
LinkedList::LinkedList() {
	// Implement this function
}

//destructor 
LinkedList::~LinkedList() {
	// Implement this function
    clear();
}

// copy constructor
LinkedList::LinkedList(const LinkedList& source) {
	// Implement this function
    head = source.getHead();
    tail = source.getTail();
    
}

// copy assignment
LinkedList& LinkedList::operator=(const LinkedList& source) {
	// Implement this function
    /*
    Node* head;
    Node* tail;
    Node* curr = nullptr;
    if(this != &source)
    {
        this->clear();
        if(source.getHead() == nullptr && source.getTail() == nullptr)
        {
            return *this;
        }

        if(source.getTail() == source.getHead())
        {
            head = new Node(source.getHead()->curr);
            tail = head;
            return *this;
        }
        Node* curr_rhs = source.getHead();
        head  = new Node(curr_rhs->curr);
        curr_rhs = curr_rhs->next;
        Node* curr_lhs = head;
        
        while(curr_rhs != nullptr)
        {
            curr_lhs->next = new Node(curr_rhs->curr);
            tail = curr_lhs->next;
            curr_rhs = curr_rhs->next;
            curr_lhs = curr_lhs->next;
        }
    } */ 
    return *this;
}


// insert function
void LinkedList::insert(string location, int year, int month, double temperature) {
	// Implement this function
    Node* node = new Node(location,year,month,temperature);
    Node* current = head;
    Node* previous = new Node(location,year,month,temperature);
    previous = head;
    
    if ((this->head == nullptr) && (this->tail == nullptr)){
        head = node;
        tail = node;
        // end
    } 
    if (node < current){
        node->next = current;
        head=node;
    }
    else if (node > current){
        node->previous = current;
        head=node;
    }

}

// clear function
void LinkedList::clear() {
	// Implement this function
    Node* current = this->head;
    while(current!=nullptr){
        Node* previous = current;
        current = current->next;
        delete previous;
    }
}

//get head
Node* LinkedList::getHead() const {
	// Implement this function it will be used to help grade other functions
    return head;
}

// get tail
Node* LinkedList::getTail() const{
    return tail;
}

// print 
string LinkedList::print() const {
	string outputString;
    Node* curr = new Node();
    //outputString = curr.location + " " + curr.year + " " + curr.month+ " " + curr.temperature;
	// Implement this function
	return outputString;
}

// overloaded output 
ostream& operator<<(ostream& os, const LinkedList& ll) {
	/* Do not modify this function */
	os << ll.print();
	return os;
}
