#include<iostream>
using namespace std;

int main(){
    int Size;
    int Diagonal = 0;
    cout<<"Enter the size of the matrix: ";
    cin>>Size;
    cout<<"Enter the elements of the matrix: \n";
    int Elements[Size][Size];
    for(int i=0; i<Size; i++){
        for(int j=0; j<Size; j++){
            cin>>Elements[i][j];
            if(i == j){
            int sum = Diagonal += Elements[i][j];
                
            }
            
        }
    }
    cout<< "The diagonal sum of the matrix is: "<<Diagonal<<endl;
  
        return 0;
}
