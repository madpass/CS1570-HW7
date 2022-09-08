//Programmer: Madison Passolano    ID: 12560375
//File: head_hw7.cpp               Date: 03/28/2020
//Purpose: where the prototypes and struct are  

#ifndef HEAD_HW7_H
#define HEAD_HW7_H

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/*----------struct-------------------------------*/
struct p
{
  double m_x; 
  double m_y; 
}; 

/*-------prototypes-------------------------------*/
void greeting(); 
//Desc: welcomes the user(willie)
//Pre: none
//Post: outputs a greeting statement to the screen 

double length(double l, const int MAX); 
//Desc: finds the length of a segment 
//Pre: MAX must be a positive number
//Post: assigns a value to l to be returned 

double radians(double r, const double PI);
//Desc: calcs a random # 1-359, turns it to radians 
//Pre: PI must be set to the value of pi (3.14...etc)
//Post: assigns the radian value to r to be returned 

double sin_funct(const double r, const double l, const double x);
//Desc: uses sine to find the x coordinate value (builds off of the previous x value)
//Pre: r must be assigned a value in radians, x must be assigned the previous x value
//Post: a new x coordinate value is returned

double cos_funct(const double r, const double l, const double y); 
//Desc: uses cosine to find the y coordinate value (builds off of the previous y value)
//Pre: r must be assigned a value in respect to radians, y must be assigned the previous y value 
//Post: a new y coordinate value is returned 

void find_lengths(p point[], double lengths[], const int SIZE);
//Desc: using the distance formula, the length from one point to the origin is found 
//Pre: array point[] must be a p (struct) and filled, size must be positive 
//Post: array lengths[] will be filled with the distances for each point 

void bubble_sort(double array[], const int SIZE); 
//Desc: sorts the array by going through and switching values if the next one is higher than the previous one 
//Pre: array[] must be filled, size must be positive 
//Post: array[] is returned sorted lowest to highest value 

double find_avg(double avg, double array[], const int SIZE); 
//Desc: adds up all of the values and divides by number of values to find average
//Pre: avg must be assigned zero before hand, array[] must be filled, size but be the number of terms in the array 
//Post: returns the average value of array[]

double find_med(double median, double array[], const int SIZE); 
//Desc: finds the median in an array
//Pre: array[] must be filled, size must be positive and index size of array 
//Post: returns the value of the median 

void output(double avg, double shortest, double longest, double median); 
//Desc: outputs the values requested and a farewell statement 
//Pre: avg, shortest, longest, and median must be assigned values
//Post: outputs the messages and values to the screen


#endif













