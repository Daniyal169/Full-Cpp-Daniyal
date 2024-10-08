// in this program we will create a 2D array having column of diff size

#include <iostream>
using namespace std;

int main(){
    int row;

    cout<<"ENter num of rows :";
    cin>>row;

    int **arr= new int*[row];
    int sizes[]={3,4,2}; //this is size of diff columns

    for(int i=0;i<row;i++){
        int col=sizes[i];

        arr[i]=new int[col];
    }

    // Setting values in 2D array 
    for(int i=0;i<row;i++){
         int col=sizes[i];
        for(int j=0;j<col;j++){
            arr[i][j]=56;
        }
    }

    cout<<"2D array is :"<<endl;
     for(int i=0;i<row;i++){
         int col=sizes[i];

        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}