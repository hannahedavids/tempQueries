#include "TemperatureDatabase.h"

#include <string>
#include <fstream>
using namespace std;

// Default constructor/destructor. Modify them if you need to.
TemperatureDatabase::TemperatureDatabase() {}
TemperatureDatabase::~TemperatureDatabase() {}

void TemperatureDatabase::loadData(const string& filename) {
	// Implement this function for part 1
    ifstream infile(filename);
    if(!infile.is_open()){
        cout<<"Input file could not be opened." << endl;
        return;
    }
    int thisYear = 2018;
    int i = 0;
    
    while(!infile.eof()){
        std::string location;
        int year,month;
        double tempVal;
        
        infile>>location>>year>>month>>tempVal;
        if((location.length()==(6|7))&&(onlyDigit(location)==true)){
            if(year>1799&&year<=thisYear){
                if(month>0&&month<13){
                    if((tempVal>-51&&tempVal<51)|(tempVal == -99.99)){ 
                        records.insert(location,year,month,tempVal);
                    }
                    else{
                        cout<<"Error: Invalid temperature " << tempVal << endl;
                        //exit(0);
                    }
                }
                else{
                    cout << "Error: Invalid month " << month << endl;
                    //exit(0);
                }
            }
            else{
                cout << "Error: Invalid year " << year << endl;
                //exit(0);
            }
        }
        else{
            cout << "Error: Invalid location " << location << endl;
            //exit(0);
        }
    }
}

/*bool TemperatureDatabase::onlyDigit(std::string loc){
    int length = loc.length()+1;
    char cstr[length];
    std::strcpy(cstr, loc.c_str());
    
    bool notDig = false;
    
    for(int i=0; i<length; i++){
        if(! (((cstr[i] >= '0') && (cstr[i] <= '9')) || cstr[i] == ' ') ){
            notDig = true;
        }
        else {
            notDig = false;
        }
    }
    
    if(notDig == true){
        return false;
    }
    else if (notDig == false){
        return true;
    }
    
    return false;
} */

void TemperatureDatabase::performQuery(const string& filename) {
	// Implement this function for part 2
	//  Leave it blank for part 1
}
