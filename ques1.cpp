#include<stdio.h>
#include<iostream.h>
using namespace std;  
//function to calculate unique element 
int FindUnique(int matrix[50][50], int m, int n) 
{ 
  int max = 0, flag = 0; 
  for(int i = 0; i < m; i++) 
    for(int j = 0; j < n; j++) 
      // Find maximum element in 
      // a matrix 
      if(max < matrix[i][j]) 
          max = matrix[i][j]; 
  // Take 1-D array of (maximum + 1) size
  int temp[max + 1] = {0}; 
  //counting the number of repetation of number available 
  //by index value as that number
  for(int i = 0 ; i < m; i++) 
    for(int j = 0; j < n; j++)
 temp[matrix[i][j]]++; 

  //print unique element 
  cout<<"Unique numbers are: ";
  for(int i = 1; i <= max; i++) 
    if(temp[i] == 1) 
      cout << i << " "; 
      flag = 1; 

  if(!flag){ 
    cout << " No unique element in the matrix"; 
  } 
} 

// Driver program 
int main() 
{ 
  int matrix[50][50], m, n;

    //taking input for the length of row and column.
    cout<<"Enter the length of the row: ";
    cin>>m;
    cout<<"Enther the length of the column: ";
    cin>>n;


    //input the elements of matrix
    cout<<"\nEnter the lements of matrix:\n ";
    for(int i = 0;i < m;i++)
        for(int j = 0; j < n; j++)
            cin>>matrix[i][j];

  // function that calculate unique element 
  FindUnique(matrix, m, n); 
  return 0; 
     }


