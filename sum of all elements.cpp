#include<iostream>
using namespace std;

int main(){
    int sIze1;
    int sIze2;
    
    cout<<"Enter the number of rows and columns: ";
    cin>>sIze1;
    cin>>sIze2;
    cout<<"Enter the elements of the array: \n";
    
    int eleMentsA[sIze1][sIze2];
    for(int i = 0; i<sIze1; i++){
        for(int j = 0; j<sIze2; j++){
            cin>>eleMentsA[i][j];
        }
    }
    int sumad = 0;
    for(int i = 0; i<sIze1; i++){
        for(int j = 0; j<sIze2; j++){
            int addition = sumad += eleMentsA[i][j];
        }
    }
    cout<<"Sum of all elements: "<<sumad<<endl;
    return 0;
}
