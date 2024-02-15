// Sensor.h
// Author: Parker Barrett
//
// Description: Base sensor class

// Includes
#pragma once
#include <iostream>
#include <string>

// SensorModels Namespace
namespace SensorModels
{
    // Sensor Class
    class Sensor
    {
      public:

        // Default Constructor
	Sensor() : name_("None") {};

	// Parameterized Constructor
	Sensor(const std::string &name) :
	    name_(name)
	{
	
	};

	// Destructor
	~Sensor() {};

      protected:

	// Sensor Members
	std::string name_;

    }; // Class Sensor

} // Namespace SensorModels
