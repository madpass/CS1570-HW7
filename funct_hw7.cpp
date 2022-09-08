//Programmer: Madison Passolano    ID: 12560375
//File: funct_hw7.cpp              Date: 03/28/2020
//Purpose: houses the functions, 

#include "head_hw7.h"

//greets the user
void greeting()
{
  cout<<"\n\nWelcome to the dignity finder."<<endl<<endl; 
}

//finds the length using rand()
double length(double l, const int MAX)
{
  do
  {
    l = rand() % MAX;
  }while(l<=0.0); //the length cant be zero, wouldnt make sense 
  return l; 
}

//finds the degrees usign rand() and then converts it to radians 
double radians(double r, const double PI)
{
  int d; 
  d = rand() % 360; 
  r = d * (PI/180); //turning degrees to radians 
  return r; //returns a radian value
}

//the sin and cos functions take the previous value and add the new value onto it
//dont worry about negatives because that gets taken care of 
double sin_funct(const double r, const double l, const double x)
{
  double temp; 
  temp = l * sin(r); 
  temp = temp + x; 
  return temp; 
}

double cos_funct(const double r, const double l, const double y)
{
  double temp; 
  temp = l * cos(r);
  temp = temp + y;  
  return temp; 
}

//find distances using endpoints 
void find_lengths(p point[], double lengths[], const int SIZE)
{
  for(int i=0; i<SIZE; i++)
  {
    lengths[i] = sqrt(pow(point[i].m_x, 2) + pow(point[i].m_y, 2)); 
    //distance formula 
  }
}

//sort the lengths 
void bubble_sort(double array[], const int SIZE)
{
  double temp; 
  for(int j=0; j<SIZE-1; j++)
  {
    for(int i=0; i<SIZE-j-1; i++)
    {
      if(array[i]>array[i+1])
      {
        temp = array[i+1]; 
        array[i+1] = array[i]; 
        array[i] = temp; 
      }
    }
  }
}


//find average distance from end points 
double find_avg(double avg, double array[], const int SIZE)
{
  for(int i=0; i<SIZE; i++)
  {
    avg += array[i]; 
    //adding up all of the values 
  }
  avg = avg/SIZE; 
  return avg; 
}


//find shortest 
double find_med(double median, double array[], const int SIZE)
{
  int num; 
  num = SIZE/2; 
  if(SIZE%2 != 0)  //if size is odd
  {
    num++; 
    median = array[num]; 
  }
  else      //if size is even
  {
    median = (array[num] + array[num-1]) / 2.0; 
  }
  return median; 
}

void output(double avg, double shortest, double longest, double median)
{
  cout<<"The average distance: "<<avg<<endl; 
  cout<<"The shortest distance: "<<shortest<<endl; 
  cout<<"The longest distance: "<<longest<<endl; 
  cout<<"The median distance: "<<median<<endl; 
  cout<<endl; 
  cout<<"Ending program..."<<endl<<endl<<endl; 
}







