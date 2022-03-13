#include <iostream>

using namespace std;

int main()
{
    string start;
    int length;
    int sideA = 0;
    int sideB = 0;
    int area = 0;
    int biggestArea = 0;
    int correctSideA = 0;
    int correctSideB = 0;
    
    cout<<"Do you want to start? Type RUN if yes: \n";
    cin>>start;
    
    if(start != "RUN"){
        cout<<"You did not enter RUN, closing aplication";
        return 0;
    }
    
    cout<<"Type a length of fence \n";
    cin>>length;
    
    if(length < 3){
        cout<<"Wrong length";
        return 0;
    }
    
    for (int i = 1; i <= length; i++) {
        sideA = i;
        sideB = length - i - i;
        if (2 * i < length) {
            area = sideA * sideB;
        }
        if (area > biggestArea) {
            correctSideA = sideA;
            correctSideB = sideB;
            biggestArea = area;
        } 
    }

    cout<<"side A could be " << correctSideA << " meters" << ", side B could be " << correctSideB << " meters" << ", biggest area is " << biggestArea << " square meters";

    return 0;
}