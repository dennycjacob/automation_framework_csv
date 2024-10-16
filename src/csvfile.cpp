//
// Created by Denny on 10/15/2024.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
#include <vector>
#include "../include/csvfile.h"
using namespace std;

CSVFile::CSVFile(const string &file_path) : file_path(file_path) {
}

bool CSVFile::loadFile() {
    ifstream file(file_path);
    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return false;
    }
    string line;
    bool isHeader = true;
    while (getline(file, line)) {
        stringstream ss(line);
        string value;
        vector<string> row;

        while (getline(ss, value, ',')) {
            row.push_back(value);
        }
        if (isHeader) {
            headers = row;
            isHeader = false;
        } else {
            data.push_back(row);
        }
    }
    file.close();
    return true;
}

const vector<vector<string> > &CSVFile::getData() const { return data; }
const vector<string> &CSVFile::get_headers() const { return headers; }
size_t CSVFile::get_rowCount() const { return data.size(); }
size_t CSVFile::get_columnCount() const { return headers.size(); }
