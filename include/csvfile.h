//
// Created by Denny on 10/15/2024.
//

#ifndef CSVFILE_H
#define CSVFILE_H

#include <vector>
#include <string>
using namespace std;
class CSVFile {
    vector<vector<string>> data;
    vector<string> headers;
    string file_path;
public:
    CSVFile(const string& file_path);
    bool loadFile();
    const vector<vector<string>>& getData() const;
    const vector<string>& get_headers() const;
    size_t get_rowCount() const;
    size_t get_columnCount() const;
};
#endif
