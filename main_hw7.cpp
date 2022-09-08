//Programmer: Madison Passolano    ID: 12560375
//File: main_hw7.cpp               Date: 03/28/2020
//Purpose: driver, this is to find where willie lost his belongings

#include "head_hw7.h"

int main()
{
  srand(time(NULL)); 
  //seeds time 

  const double PI = 3.14159265;      //value for pi
  const short SEGMENTS = 50;         //number of segments/points 
  const short WALKS = 100;           //number of walks 
  const short MAX_LEN_OF_WALK = 20;  //max length of the walk 

  short j = 0; 

  double avg=0, median=0;
  double len, rad, x1, y1, shortest, longest; 

  p arr_points[SEGMENTS];      //array filled with the points from one walk 
  p arr_end_points[WALKS];     //array filled with the end points of all walks 
  double arr_lengths[WALKS];   //array filled with the lengths from the origin to the end points 

  greeting(); 

  //this do while fills up the end points array with all the end points   
  do
  {
    arr_points[0].m_x = 0;  //sets first points to zero since they start at origin 
    arr_points[0].m_y = 0;   

    for(int i=1; i<SEGMENTS; i++)
    {
      len = length(len, MAX_LEN_OF_WALK); 
      //finds and sets the length 
      rad = radians(rad, PI);  
      //finds degrees and turns to radians 
      arr_points[i].m_x = sin_funct(rad, len, arr_points[i-1].m_x); //sets the points, uses previous point to build off of 
      arr_points[i].m_y = cos_funct(rad, len, arr_points[i-1].m_y); 
    }

    arr_end_points[j].m_x = arr_points[SEGMENTS-1].m_x; //sets the end points in the end point array 
    arr_end_points[j].m_y = arr_points[SEGMENTS-1].m_y;  

    j++; 

  }while(j!=WALKS); 
 
  find_lengths(arr_end_points, arr_lengths, WALKS); 
  //this finds the lengths   
  bubble_sort(arr_lengths, WALKS); 
  //this sorts the lengths
  avg = find_avg(avg, arr_lengths, WALKS); 
  //finds the average 

  //since the array is already sorted just use the first and last terms 
  shortest = arr_lengths[0]; 
  longest = arr_lengths[WALKS-1];  
  median = find_med(median, arr_lengths, WALKS); 

  //outputs everything needed and closing statement 
  output(avg, shortest, longest, median); 

  return 0; 
}














