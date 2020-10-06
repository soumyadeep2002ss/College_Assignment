#include <iostream>
using namespace std;
int main() {
   int rows, cols, r, c, matrix[10][10];
   cout<<"Enter the number of rows for the matrix: ";
   cin>>rows;
   cout<<"Enter the number of columns for the matrix ";
   cin>>cols;
   cout<<"Please enter the elements for the Matrix: \n";
   for(r = 0; r < rows; r++){
      for(c = 0;c < cols;c++)
	  {
         cin>>matrix[r][c];
      }
   }
   cout<<"\n The Lower Triangular Matrix is: ";
   for(r = 0; r < rows; r++){
      cout<<"\n";
      for(c = 0; c < cols; c++){
      if(r >= c)
	  {
         cout<<" "<<matrix[r][c];
      }
      else{
        cout<<" 0";
      }
   }
}
   return 0;
}
