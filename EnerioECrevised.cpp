//EnerioEC.cpp - E.Enerio Extra Credit
//Sailing the Seas (Function/Array)

#include <iostream>
using namespace std;
const int cap=10;
bool isLost=false;
bool isSunk=false;
void initMap(char arRay[][cap], const int cap, int& row, int& col);
void displayMap(char arRay[][cap], const int cap);
char validate(char a);
int menu(char arRay[][cap], const int cap, int& coor, int& dinate);
void moveShip(char a, char arRay[][cap], const int cap, int& coor, int& dinate);

int main()
{
    int coor=5, dinate=5;
    char arRay[cap][cap];
    cout << "Sailing the Seas" << endl;
    cout << "----------------" << endl;
    initMap(arRay,cap, coor, dinate);
    displayMap(arRay,cap);
    menu(arRay, cap, coor, dinate);

    return 0;
}

void initMap(char arRay[][cap], const int cap, int& row, int& col){
    for(int a=0; a<cap; a++){
        for(int b=0; b<cap; b++){
            if(a<b){
                arRay[a][b]='.';}
            else if(row==a && col==b){
                arRay[a][b]='S';}
            else
                arRay[a][b] = '~';}
    }}

void displayMap(char arRay[][cap], const int cap){
    for(int a=0; a<cap; a++){
        for(int b=0; b<cap; b++){
            if((a==9 && b==0)){
                cout << "  ";}
            else if(b==0){
                cout << a << " ";}
            cout << arRay[a][b] << " ";
            }
    cout << endl;
    }cout << "  ";
    for(int c=0; c<cap; c++){
    cout << c << " ";}
    }

char validate(char a){
    if(static_cast<int>(a)>96 && static_cast<int>(a)<123){
        return a;}
    else
        return a+32;}

int menu(char arRay[][cap], const int cap, int& coor, int& dinate){
    char a;
    do{
        cout << "\n\n(n)orth" << endl;
        cout << "(s)outh" << endl;
        cout << "(e)ast" << endl;
        cout << "(w)est" << endl;
        cout << "\nWhich way, Captain? ";
        cin >> a;
        switch(validate(a)){
    case 'n':
        moveShip('n', arRay, cap, coor, dinate);
        cout << endl;
        if(isLost==true || isSunk==true){
            break;}
        displayMap(arRay,cap);
        break;

    case 's':
        moveShip('s', arRay, cap, coor, dinate);
        cout << endl;
        if(isLost==true || isSunk==true){
            break;}
        displayMap(arRay,cap);
        break;

    case 'e':
        moveShip('e', arRay, cap, coor, dinate);
        cout << endl;
        if(isLost==true || isSunk==true){
            break;}
        displayMap(arRay,cap);
        break;

    case 'w':
        moveShip('w', arRay, cap, coor, dinate);
        cout << endl;
        if(isLost==true || isSunk==true){
            break;}
        displayMap(arRay,cap);
        break;

    default:
        cout << "\nPick a direction!";
        break;
    }if(isSunk){
        cout << "CRASH!!! You boat begins to sink!";
        return 0;}
    else if(isLost){
        cout << "ARGGGH!!!... you have been lost at sea!!!";
        return 0;}
    }while(true);}

void moveShip(char a, char arRay[][cap], const int cap, int& coor, int& dinate){
    if(a=='n'){
        coor--;
        initMap(arRay,cap,coor,dinate);
        if(arRay[coor][dinate] == '.' && dinate > 0){
            isSunk=true;}
        else if(coor>=cap || dinate < 0 || coor < 0 || dinate >= cap){
            isLost=true;}
        }
    else if(a=='s'){
        coor++;
        initMap(arRay,cap,coor,dinate);
        if(arRay[coor][dinate] == '.' && dinate > 0){
            isSunk=true;}
        else if(coor>=cap || dinate < 0 || coor < 0 || dinate >= cap){
            isLost=true;}
        }
    else if(a=='e'){
        dinate++;
        initMap(arRay,cap,coor,dinate);
        if(arRay[coor][dinate] == '.' && dinate > 0){
            isSunk=true;}
        else if(coor>=cap || dinate < 0 || coor < 0 || dinate >= cap){
            isLost=true;}
        }
    else if(a=='w'){
        dinate--;
        initMap(arRay,cap,coor,dinate);
        if(arRay[coor][dinate] == '.' && dinate > 0){
            isSunk=true;}
        else if(coor>=cap || dinate < 0 || coor < 0 || dinate >= cap){
            isLost=true;}
        }
    }
