#include<iostream>
#include<string>
#define MAX_LENGTH 255
using namespace std;

class Column{
    private:
        int index;
        char columnHeader[MAX_LENGTH];
        char type[MAX_LENGTH];
        int length;
    public:
        Column(int idx, char header[], char type[], int length){
            this->index = idx;
            strcpy(this->columnHeader, header);
            strcpy(this->type, type);
            this->length = length;
        }
};