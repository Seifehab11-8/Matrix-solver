#include <iostream>
#include<string>
using namespace std;
void insert_func(int arr[][3]);
void multiply (int arr[][3], int arr2[][3]);
void add(int arr[][3], int arr2 [][3]);
void subtract(int arr[][3], int arr2 [][3]);
int determinants(int arr[][3]);
int main() {
    int arr[3][3], arr2[3][3];
    cout<<"ENTER THE 1st MATRIX |A|:\n";
    insert_func(arr);
    cout<<"ENTER THE 2nd MATRIX |B|:\n";
    insert_func(arr2);
    cout<<"\n|A|*|B|= \n";
    multiply(arr, arr2);
    cout<<"\n|A|+|B|=\n";
    add(arr, arr2);
    cout<<"\n|A|-|B|=\n";
    subtract(arr, arr2);
    cout<<"\ndet|A|= "<<determinants(arr)<<endl;
    cout<<"det|B|= "<<determinants(arr2)<<endl;
    return 0;
}
void multiply (int arr[][3], int arr2[][3]){
    int result[3][3];
    int sum=0, k=0, count=0, row=0 ,column=0,flag=0;
    while(1){
        for(int i=0 ;i<3;i++){
            for(int j=0 ; j<3 ;j++)
                sum+= arr[k][j]* arr2[j][i];
            result[row][column]=sum;
            column++;sum=0; count++;
            if(count==3){ count=0;k++; row++; column =0;}
        }
        flag++;if(flag==3)break;
    }
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3;j++){
            cout <<result[i][j]<<" ";}
        cout<<endl;
    }
    
}
void insert_func(int arr[][3])
{
    for(int i=0; i<3;i++){
        for(int j=0 ; j<3;j++)
            cin>>arr[i][j];}
}
void add(int arr[][3], int arr2 [][3]){
    int result[3][3];
    for(int i=0; i<3;i++){
        for(int j=0 ; j<3;j++)
            result[i][j]= arr[i][j]+arr2[i][j];
    }
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3;j++){
            cout <<result[i][j]<<" ";}
        cout<<endl;
    }
}
void subtract (int arr[][3], int arr2 [][3]){
    int result[3][3];
    for(int i=0; i<3;i++){
        for(int j=0 ; j<3;j++)
            result[i][j]= arr[i][j]-arr2[i][j];
    }
    for(int i=0 ; i<3;i++){
        for(int j=0 ; j<3;j++){
            cout <<result[i][j]<<" ";}
        cout<<endl;
    }
}
int determinants(int arr[][3]){
    int sum=0;
    sum=sum+arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]);
    sum=sum-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]);
    sum=sum+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
    return sum;
}
