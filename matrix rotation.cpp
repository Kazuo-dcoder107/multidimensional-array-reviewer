#include<iostream>
using namespace std;

int main(){
    int srow;
    int scolumn;
    
    cout<<"Enter the number of rows and columns: ";
    cin>>srow;
    cin>>scolumn;
    cout<<"Enter the elements of the array: \n";
    int arrays[srow][scolumn];
    for(int i = 0; i<srow; i++){
        for(int j = 0; j<scolumn; j++){
            cin>>arrays[i][j];
        }
    }
    cout<<"Original Matrix: \n";
    for(int i = 0; i<srow; i++){
        for(int j = 0; j<scolumn; j++){
            cout<<arrays[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Rotated Matrix: \n";
    for(int j = 0; j <scolumn; j++){
        for(int i=srow - 1; i>=0; --i){
            cout<<arrays[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
    
}
