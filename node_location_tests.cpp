#include<iostream>
#include<string>
#include<vector>
#include<cmath>
 
 

bool thermocouple_1(double x, double y, double z){
	if((pow((x - (-0.000025)),2) + pow((z - (0.000150)),2) <= pow(0.000025,2)) 
		&& (y > 0.000624) 
		&& (y < 0.000626)){
		return true;
	}
	else return false;
}