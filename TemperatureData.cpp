
/*
 * TemperatureData.cpp
 *
 *  Created on: Jul 16, 2018
 *      Author: student
 */
#include <iostream>
#include <string>
#include "TemperatureData.h"

using namespace std;

TemperatureData::TemperatureData() {
    id = "000000";
    year = 0;
    month = 0;
    temperature = 0;
} //initialize everything

TemperatureData::TemperatureData(std::string id, int year, int month, double temperature) : id(id), year(year), month(month), temperature(temperature) {
    id = "000000";
    year = 0;
    month = 0;
    temperature = 0;
} //initialize everything


TemperatureData::~TemperatureData() {} // You should not need to implement this

bool TemperatureData::operator<(const TemperatureData& b) {
	// Implement this
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

void TemperatureData::myTest(){
    //test rule of 3
    //test print()
    
}

