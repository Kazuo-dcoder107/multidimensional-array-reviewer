#include<iostream>
using namespace std;

int main(){
    int numr;
    
    cout<<"Enter the number of rows: ";
    cin>>numr;
    cout<<"Pascal's triangle: \n";
    
   int pascalarr[numr][numr];
   for(int i = 0; i < numr; i++){
       for(int j = 0; j <= i; j++){
           if(i == j || j== 0){
               pascalarr[i][j] = 1;
           }
           else{
               pascalarr[i][j]= pascalarr[i - 1][j - 1] + pascalarr [i - 1][j];
           }
       }
   }
    
    for(int i= 0; i<numr; i++){
        for(int j = 0; j<=i; j++){
            cout<<pascalarr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
