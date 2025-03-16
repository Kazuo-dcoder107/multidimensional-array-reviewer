#include<iostream>
using namespace std;

int main(){
    int sIze2;
    int sIze3;
    
    cout<<"Enter the number of rows and columns: ";
    cin>>sIze2;
    cin>>sIze3;
    cout<<"Enter the array elements: \n";
    
    int arrayele[sIze2][sIze3];
    for(int i = 0; i<sIze2; i++){
        for(int j = 0; j<sIze3; j++){
            cin>>arrayele[i][j];
        }
    }
    cout<<"The maximum elements per row are: ";
    int maximum = 0;
    for(int i = 0; i<sIze2; i++){
        int max = maximum = arrayele[i][0];
       for(int j=0; j<sIze3; j++){
           if(arrayele[i][j]>=maximum){
               maximum = arrayele[i][j];
           }
       } 
        cout<<maximum<<" ";    
    }
    
   
    return 0;
}
