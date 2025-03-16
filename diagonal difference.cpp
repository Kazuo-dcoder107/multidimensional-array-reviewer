#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int Size;
    
    cout<<"Enter size of the array: ";
    cin>>Size;
    cout<<"Enter elements of the array: \n";
    int arrayelement[Size][Size];
    for(int i = 0; i < Size; i++){
        for(int j = 0; j<Size; j++){
            cin>>arrayelement[i][j];
        }
    }
    int sum1 = 0;
     for(int i = 0; i < Size; i++){
        for(int j = 0; j<Size; j++){
            if (arrayelement[i][i]==arrayelement[j][j]){
                int summation = sum1 += arrayelement[i][j];
            }
        }
    }
    int sum2 = 0;
    for(int i = 0; i < Size; i++){
        
       
        int summation1 = sum2 +=arrayelement[i][Size -1 - i];
        
    }
    int totalsum = abs(sum1-sum2);
    cout<<"Absolute diagonal difference: "<<totalsum;
    return 0;
}
