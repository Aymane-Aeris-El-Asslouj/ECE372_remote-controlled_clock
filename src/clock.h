// Aeris El Asslouj
// October 8, 2022
// Assignment: ECE372A final project
//
// Description: Interface to timer 1 as the clock timer that keeps track of time. 
// It increments the time digits by 1 every minutes including accumulation to 
// high digits and AM/PM changes. Also handles changing of clock time and alarm time 
// through a buffer time. Also handles triggering of alarm.
//----------------------------------------------------------------------//

#ifndef CLOCK_H
#define CLOCK_H

#include <avr/io.h>

// Initializes clock timer (timer 0) which triggers the clock timer interrupt 
// every 4 seconds.
void init_clock();

// Loads time given in input_time_digits and input_am_pm to the buffer. 
// Disables then reenables clock timer during read. Also loads time into reference.
void load_time_to_buffer(char * input_time_digits, char input_am_pm);

// Saves from buffer to the time digits and AM/PM status given in output_time_digits 
// and output_am_pm. Only save time if it is valid and differs from its original value. 
// Disables then reenables clock timer during write. Also resets clock timer counter 
// if the clock time has been changed.
void save_buffer_to_time(char * output_time_digits, char * output_am_pm);

// checks if time buffer has valid time
int buffer_has_valid_time();

// checks if buffer differs from its original value
int buffer_differs_from_refernce();

#endif
