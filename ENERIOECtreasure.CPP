//Edison Enerio
//Treasure Map

#include <iostream>
using namespace std;

int main()
{
    int mapSize, row, col, option, LorR, UorD;
    cout << "Treasure Map" << endl;
    cout << "------------" << endl;
    do{
        cout << "Desired Map size (5-9): ";
        cin >> mapSize;

        if((mapSize>=5) && (mapSize<=9))
            break;

        cout << "Error. Map size must be 5-9." << endl;
        cout << endl;
    }
    while(true);
    do{
        cout << "\nInitial location of X (<row><space><column>): ";
        cin >> row >> col;

        if((mapSize==5) && ((row>=6) || (col>=6))){
        cout << "Invalid location, both row and column must be within the border (1-5)." << endl;}
        else if((mapSize==6) && ((row>=7) || (col>=7))){
        cout << "Invalid location, both row and column must be within the border (1-6)." << endl;}
        else if((mapSize==7) && ((row>=8) || (col>=8))){
        cout << "Invalid location, both row and column must be within the border (1-7)." << endl;}
        else if((mapSize==8) && ((row>=9) || (col>=9))){
        cout << "Invalid location, both row and column must be within the border (1-8)." << endl;}
        else if((mapSize==9) && ((row>=10) || (col>=10))){
        cout << "Invalid location, both row and column must be within the border (1-9)." << endl;}
        else
            break;

    }
    while(true);
    for(int rows=0; rows<=mapSize; rows++){
        for(int cols=0; cols<=mapSize; cols++){
            if(cols==0 && rows==mapSize){
                cout << "  ";}
            else if(cols==0){
                cout << rows+1 << " ";}
            else if(rows==mapSize){
                cout << cols << " ";}
            else if(rows==row-1 && cols==col){
                cout << "X ";}
            else
                cout << "- ";}
        cout << endl;}
    while(option!=4){
    cout << "\n1) Update treasure coordinates (row/column)." << endl;
    cout << "2) Shift X left or right." << endl;
    cout << "3) Shift X up or down." << endl;
    cout << "4) Exit program." << endl;
    cout << "Select (1-4): ";
    cin >> option;

    switch(option){
        case 1:
            do{
            cout << "\nUpdate the treasure location (<row><space><column>): ";
            cin >> row >> col;

            if((mapSize==5) && ((row>=6) || (col>=6))){
            cout << "Invalid location, both row and column must be within the border (1-5)." << endl;
            cout << endl;}
            else if((mapSize==6) && ((row>=7) || (col>=7))){
            cout << "Invalid location, both row and column must be within the border (1-6)." << endl;
            cout << endl;}
            else if((mapSize==7) && ((row>=8) || (col>=8))){
            cout << "Invalid location, both row and column must be within the border (1-7)." << endl;
            cout << endl;}
            else if((mapSize==8) && ((row>=9) || (col>=9))){
            cout << "Invalid location, both row and column must be within the border (1-8)." << endl;
            cout << endl;}
            else if((mapSize==9) && ((row>=10) || (col>=10))){
            cout << "Invalid location, both row and column must be within the border (1-9)." << endl;
            cout << endl;}
            else
                break;}
            while(true);
            for(int rows=0; rows<=mapSize; rows++){
                for(int cols=0; cols<=mapSize; cols++){
                    if(cols==0 && rows==mapSize){
                        cout << "  ";}
                    else if(cols==0){
                        cout << rows+1 << " ";}
                    else if(rows==mapSize){
                        cout << cols << " ";}
                    else if(rows==row-1 && cols==col){
                        cout << "X ";}
                    else
                        cout << "- ";}
                    cout << endl;}
                    break;

        case 2:
            do{
            cout << "\nShift X left or right (negative values to move left and positive values to move right): ";
            cin >> LorR;

            if(((col+(LorR)) <= 0) || ((col+(LorR)) > mapSize)){
                cout << "Treasure location must be within the confines of the map.";
                cout << endl;}
            else
                break;}
            while(true);{
            for(int rows=0; rows<=mapSize; rows++){
                    for(int cols=0; cols<=mapSize; cols++){
                        if(cols==0 && rows==mapSize){
                            cout << "  ";}
                        else if(cols==0){
                            cout << rows+1 << " ";}
                        else if(rows==mapSize){
                            cout << cols << " ";}
                        else if(rows==row-1 && cols==col+(LorR)){
                            cout << "X ";}
                        else
                            cout << "- ";}
                    cout << endl;}
            col+=LorR;
            LorR=(-1);}
            break;

        case 3:
            do{
                cout << "\nShift X up or down (negative values to move up and positive values to move down): ";
                cin >> UorD;

            if(((row+(UorD)) <= 0) || ((row+(UorD)) > mapSize)){
                cout << "Treasure location must be within the confines of the map.";
                cout << endl;}
            else
                break;}
            while(true);{
            for(int rows=0; rows<=mapSize; rows++){
                    for(int cols=0; cols<=mapSize; cols++){
                        if(cols==0 && rows==mapSize){
                            cout << "  ";}
                        else if(cols==0){
                            cout << rows+1 << " ";}
                        else if(rows==mapSize){
                            cout << cols << " ";}
                        else if(rows==(row-1) + (UorD) && cols==col){
                            cout << "X ";}
                        else
                            cout << "- ";}
                    cout << endl;}
            row+=UorD;
            UorD=0;}
            break;

        case 4:
            break;

        default:
            cout << "Invalid option." << endl;}
        }
        cout << "\nExiting Program..." << endl;

    return 0;}
