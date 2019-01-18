/*
 * studentProfileSystem.h
 *
 *  Created on: Jan 18, 2019
 *      Author: patrick
 */

#ifndef STUDENTPROFILESYSTEM_H_
#define STUDENTPROFILESYSTEM_H_

#include <stdio.h>
#include <strings.h>
#include <stdbool.h>
#include <time.h>

typedef struct Student {

	//
	char* name_full; //made by concatenating user input first, middle, last names
	char* email_address;
	char* major;

	int id; //will be checked for 9 digit input
	int age; //calculated from DOB input
	int phone; //may change format if necessary

	bool is_undergrad; //self-explanatory

	time_t expected_graduation; //may need to change to new data type for better input/calculation functionality

} Student; //Student data structure will encode student profile information

#endif /* STUDENTPROFILESYSTEM_H_ */
