#include<iostream>
#include<string.h>
#include "Column.cpp"
#include "Row.cpp"
#define MAX_LENGTH 255
using namespace std;

class Table{
    private:
        int rowCount, columnCount;
        char tableName[MAX_LENGTH];
        Row* rowCollection;
        Column* columnCollection;

    public:
        Table(int rowCount, int columnCount, char name[], Row* rows, Column* columns){
            this->rowCount = rowCount;
            this->columnCount = columnCount;
            strcpy(this->tableName, name);
            this->rowCollection = rows;
            this->columnCollection = columns;
        }
};