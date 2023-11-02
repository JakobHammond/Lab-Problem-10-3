//
//  main.cpp
//  p10-3
//
//  Created by Jakob Hammond on 11/2/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int numStudents;
    int lowScore = 100;
    int highScore = 0;
    double avgScore;
    double totalScore;
    cout << "Number of students: ";
    cin >> numStudents;
    int scores[numStudents];
    
    for(int i = 0; i < numStudents; i++){
        cout << "Enter score #" << i + 1 << ": ";
        cin >> scores[i];
        
        if(scores[i] > highScore) highScore = scores[i];
        if(scores[i] < lowScore) lowScore = scores[i];
        totalScore += scores[i];
    }
    avgScore = totalScore / numStudents;
    
    cout << "high = " << highScore << " low = " << lowScore << " average = " << setprecision(3) << avgScore << endl;
    
}
