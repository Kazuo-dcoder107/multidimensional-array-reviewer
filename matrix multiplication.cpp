#include<iostream>
using namespace std;

int main(){
    int srow1;
    int scol1;
    int srow2;
    int scol2;
    
    cout<<"Enter rows and columns for the first matrix: ";
    cin>>srow1;
    cin>>scol1;
    cout<<"Enter rows and columns for the second matrix: ";
    cin>>srow2;
    cin>>scol2;
   
    if(scol1==srow2){
        int element1[srow1][scol1];
        int element2[srow2][scol2];
        int resulta[srow1][scol2];
        cout<<"\nEnter elements of the first matrix: \n";
        for(int i = 0; i<srow1; i++){
            for(int j = 0; j<scol1; j++){
                cin>>element1[i][j];
            }
        }
        cout<<"\nEnter elements of the second matrix: \n";
        for(int i = 0; i<srow2; i++){
            for(int j= 0; j<scol2; j++){
                cin>>element2[i][j];
            }
        }
        for(int i = 0; i<srow1; i++){
            for(int j = 0; j<scol2; j++){
                 resulta[i][j] = 0;
            }
        }
        int product = 0;
        
        for(int i = 0; i<srow1; i++){
            for(int j = 0; j<scol2; j++){
                for(int k = 0; k<scol1; k++){ 
                    
                    int pro = product = resulta[i][j]+=element1[i][k]* element2[k][j];
                }
               
            }
        }
       cout<<"\nProduct of the matrices: \n";
       for(int i = 0; i <srow1; i++){
           for(int j = 0; j<scol2; j++){
               cout<<resulta[i][j]<<" ";
           }
           cout<<endl;
       }
    }
    else{
        cout<<"Matrices cannot be multiplied. \n";
    }
    return 0;
}
