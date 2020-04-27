#include <iostream>
#include "Character_UI.h"

using namespace std;

// Constructor function
Character::Character() {
    name = "Anonymous"; 

    // Initialize the stats of the character
    HP = 100; 
    AP = 0; 

    // Initialize the starting position of the player 
    P.x = 1;
    P.y = 5; 
}
     
void Character::store_name(){
    string name;
    cout<<"\nEnter the Character name : ";
    cin>> name;
}

string Character::GetName() {
    return name; 
}

vector<int> Character::GetPosition() {
    vector<int> pos; 

    pos.push_back(P.x);
    pos.push_back(P.y);

    return pos;
}

void Character::SetPosition(int x, int y) {
    P.x = x; 
    P.y = y;
}
   
void Character::UpdatePosition(char move, vector<string> grid) {
    int dx = 0, dy = 0;
    if (move == 'w') {
        // Move up
        dx = -1;
        dy = 0;
    } else if (move == 's') {
        // Move down
        dx = 1;
        dy = 0;
    } else if (move == 'a') {
        // Move left
        dx = 0;
        dy = -1;
    } else {
        // Move right
        dx = 0;
        dy = 1;
    }

    int updated_x = P.x+dx; 
    int updated_y = P.y+dy;

    // Check for wall collision
    if (grid[updated_x][updated_y] != '#') {
        // Check if there is a gate at the new position 
        
        if (grid[updated_x][updated_y] == '=') {
            cout<<"Open the gate (50 Energy)? "<<endl;
        } else {
            P.x = updated_x;
            P.y = updated_y;
        }      
    }
}

string Character::GetType() {
    return type;
}