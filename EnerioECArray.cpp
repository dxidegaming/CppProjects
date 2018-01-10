//Edison Enerio
//Array Manipulation

#include <iostream>;
using namespace std;
void output(int numbers[], int& numElements);
void append(int numbers[], int& numElements, int element, int cap);
void sortedInsert(int numbers[], int& numElements, int element, int cap);
int removeFirst(int numbers[], int& numElements);
int removeLast(int numbers[], int& numElements);
int removeElement(int numbers[], int& numElements, int element);
bool isFull(int& numElements, int cap);
int getIndex(int numbers[], int& numElements, int element);
bool containsElement(int numbers[], int& numElements, int element);

int main()
{
    const int CAPACITY = 20;
    int numbers[CAPACITY] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int numElements = 10;
    int input=0;
    int element;

    while(input!=8){
    cout << "Array Manipulation" << endl;
    cout << "------------------" << endl;
    cout << "1. Get Index" << endl;
    cout << "2. Append" << endl;
    cout << "3. Insert" << endl;
    cout << "4. Remove" << endl;
    cout << "5. Remove First" << endl;
    cout << "6. Remove Last" << endl;
    cout << "7. Output" << endl;
    cout << "8. Exit program" << endl;
    cout << "\nSelect:";
    cin >> input;

    switch(input){
    case 1:
        cout << "\nEnter element: ";
        cin >> element;
        getIndex(numbers,numElements,element);
        if(getIndex(numbers,numElements,element) != -1){
            cout << "\nThe Index is: " << getIndex(numbers,numElements,element) << endl << endl;}
        else
            cout << "\nElement does not exist." << endl << endl;
        break;

    case 2:
        cout << "\nEnter element: ";
        cin >> element;
        append(numbers, numElements, element, CAPACITY);
        cout << endl;
        break;

    case 3:
        cout << "\nEnter element: ";
        cin >> element;
        sortedInsert(numbers, numElements, element, CAPACITY);
        cout << endl;
        break;

    case 4:
        cout << "\nEnter element: ";
        cin >> element;
        cout << "\nRemoved element: " << removeElement(numbers, numElements, element) << endl << endl;
        break;

    case 5:
        cout << "\nFirst element: " << removeFirst(numbers,numElements) << endl << endl;
        break;

    case 6:
        cout << "\nLast element: " << removeLast(numbers,numElements) << endl << endl;
        break;

    case 7:
        output(numbers, numElements);
        break;

    case 8:
        cout << "\nExiting Program..." << endl;
        break;

    default:
        cout << "\nInvalid input." << endl << endl;
        break;}
    }
    return 0;
}

void output(int numbers[], int& numElements){
    cout << "\nArray: ";
    for(int a=0; a<numElements; a++){
        cout << numbers[a] << " ";}
    cout << "Size: " << numElements << endl << endl;
}

void append(int numbers[], int& numElements, int element, int cap){
    if(isFull(numElements, cap)){
        cout << "\nArray is full." << endl;}
    else{
        numbers[numElements] = element;
        numElements++;}
}

void sortedInsert(int numbers[], int& numElements, int element, int cap){
    if(isFull(numElements, cap)){
        cout << "\nArray is full." << endl;}
    else{
        int index;
        numElements++;
        for(int a=0; a<numElements; a++){
            if(numbers[a] < element && numbers[a+1] > element){
                index=a;
                break;}}
        for(int b=numElements; b>index; b--){
            numbers[b] = numbers[b-1];}
        numbers[index+1] = element;}
}

int removeFirst(int numbers[], int& numElements){
    int firstElement = numbers[0];
    for(int a=0; a<numElements; a++){
        numbers[a] = numbers[a+1];}
        numElements--;
    return firstElement;
}

int removeLast(int numbers[], int& numElements){
    numElements--;
    return numbers[numElements];
}

int removeElement(int numbers[], int& numElements, int element){
    int index = getIndex(numbers, numElements, element);
    int removedElement= numbers[index];
    for(int a=index; a<numElements; a++){
        numbers[a] = numbers[a+1];}
    numElements--;
    return removedElement;
}

bool isFull(int& numElements, int cap){
    if(numElements>=cap){
        return true;}
    else{
        return false;}
}

int getIndex(int numbers[], int& numElements, int element){
    containsElement(numbers, numElements, element);
    if(containsElement){
        for(int a=0; a<numElements; a++){
            if(element==numbers[a]){
                return a;}}
    }
    return -1;
}

bool containsElement(int numbers[], int& numElements, int element){
    for(int a=0; a<numElements; a++){
        if(numbers[a]==element){
            return true;}}
    return false;
}
