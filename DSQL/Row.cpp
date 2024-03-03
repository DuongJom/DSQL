#include<iostream>
#include<string.h>
#define MAX_LENGTH 255
using namespace std;

class Row{
    private:
        int index;
        char* value[MAX_LENGTH];
    public:
        Row(int index, char* value[MAX_LENGTH]){
            this->index = index;
            for(int i = 0; i < MAX_LENGTH;i++){
                strcpy(this->value[i], value[i]);
            }
        }
};