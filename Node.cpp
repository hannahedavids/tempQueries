#include <string>
#include "Node.h"

using namespace std;

// Default constructor
Node::Node() {
    next = nullptr;
} // remember to initialize next to nullptr

// Parameterized constructor
Node::Node(string id, int year, int month, double temperature) {
    next = nullptr;
}
// remember to initialize next to nullptr

bool Node::operator<(const Node& b) {
	Node* next;
    // (next < b) 
    
    if(id > b.id){
        return false;
    }
    else if (id< b.id){
        return true;
    }
    else if(id == b.id){
        if(year > b.year){
            return false;
        }
        else if (year < b.year){
            return true;
        }
        else if (year == b.year){
            if (month > b.month){
                return false;
            }
            else if (month < b.month){
                return true;
            }
            else if (month == b.month){
                if (temperature > b.temperature){
                    return false;
                }
                else if (temperature < b.temperature){
                    return true;
                }
                else {
                    return false;
                }
            }
            
        } 
    } 

    return false;
    
}
