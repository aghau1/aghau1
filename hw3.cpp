/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   hw3.cpp
 * Author: usama
 *
 * Created on March 13, 2018, 5:25 PM
 */

#include <iostream>
#include <vector>

using namespace std;

/*
 * 
 */
void sw(int* a, int *b);

int main(int argc, char** argv) {
    vector <int> input (3) ;
    
    int x = 5;
    int *a = *x;
    cout << *a << " A"<< endl;
    
    int a = 0;
    int b = 5;
    
    for(int i = 0; i < 3; i++){
        input[i] = i+1;
        cout << "VEC:: " << input[i] << endl;
        
    }
    
    
    
    for(int i = input.size() -1; i>=0; i--){
        cout << "VEC:: " << input[i] << endl;
        
        
        
    }
    
    
    
//    cout << "VEC:: " << input[15] << endl;
//    cout << "A :: " << a << endl;
//    cout << "B :: " << b << endl;
//    sw(&a, &b);
//    
//     cout << "A :: " << a << endl;
//    cout << "B :: " << b << endl;
//    
    return 0;   
}
void sw(int* a, int *b){
    
    int temp = *a;
    
    if(*a - *b <= 0 ){
        *a = *b;
        *b = temp;
        
    }
    
    
}