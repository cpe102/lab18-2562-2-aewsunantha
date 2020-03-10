//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){   
   double AX1,AX2,AY1,AY2;
   
   if(R1->x > R2->x)
   AX1 =R1->x;
   else
   {
	   AX1=R2->x; 
   }
   if(R1->x+R1->w < R2->x+R2->w) 
     AX2 = (R1->x+R1->w);
	 else
	 {
		 AX2 = (R2->x+R2->w); 
	 }
	 

	if(R1->y < R2->y)
    AY1 =R1->y; 

   else{AY1 = R2->y;} 

   if(R1->y-R1->h > R2->y-R2->h) 
     AY2 = R1->y-R1->h;
	 else
	 {
		 AY2 = R2->y-R2->h;
	 } 
	if(R1->x+R1->w < R2->x)return 0;
	else return abs(AX1-AX2)*abs(AY1-AY2);

	
}


int main(){
	double x,y,w,h;
	
	cout << "Please input Rect 1 (x y w h): "; 
	cin>> x >>y>>w>>h;
	Rect R1={x,y,w,h};
	cout << "Please input Rect 2 (x y w h): ";
	cin>> x>>y>>w>>h;
		
		Rect R2={x,y,w,h};

	cout << "Overlap area = "<<  overlap(&R1,&R2);	
	return 0;
}