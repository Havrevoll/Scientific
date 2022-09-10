#ifndef MYVECTOR
#define MYVECTOR
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

class Vector{
private:
     long int size;
     double *data;
     int owner;
public:
     //empty constructor
     Vector(){
          size = 0;
          data = NULL;
          owner = 0;
     }
	
     //only constructor to allocate space for data
     Vector(long int  n){
          size = n;
          data = (double *)malloc(sizeof(double)*n);
          owner = 1;
     }
  
     //*this becomes shadow of Vector v 
     //(copy constructor)
     Vector(const Vector& v){
          size = v.size;
          data = v.data;
          owner = 0;
     }  
     ~Vector(){...}
     void shadow(double *dataptr, long int len){...}
     void shadow(const Vector& v){...}
     void shadow(const Vector& v,  long int i, long int len){...}
     long int getSize() const{...}
     double * getRawData() const{...}
     double& operator()(long int i){...}
     const double& operator()(long int i) const{.}
     Vector& operator=(const Vector& v){...}
     void add(const Vector& v){...}
     void sub(const Vector& v){...}
     void mul(const Vector& v){...}
     void div(const Vector& v){...}
     void scale(const double x){...}
     void add_constant(const double x){...}
     double norm() const{...}
     void output(const char* fname)const{...}
     void input(const char* fname){...}
};

#endif