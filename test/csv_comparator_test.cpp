//
// Created by Denny on 10/15/2024.
//
#include "../include/csvfile.h"
#include "../include/comparator.h"
#include <cassert>
#include <iostream>
#include <filesystem>
#include <algorithm>

using namespace std;

// Utility function to normalize file paths to use forward slashes
string normalizePath(const string& path) {
    string normalizedPath = path;
    replace(normalizedPath.begin(), normalizedPath.end(), '\\', '/');
    return normalizedPath;
}

void update_summary(Comparison result , int& pass_count , int& fail_count) {
    if (result.isSuccess()) {
        pass_count++;
    } else {
        fail_count++;
    }
}


void tesCSVFileload() {
    CSVFile file("../data/file2.csv");

    assert(file.loadFile() && "Failed to load CSV file");
    assert(file.get_rowCount() > 0 && "CSV file should not be empty.");
    cout << "PASS: CSV file loaded" << endl;
}

    int testCSVComparator() {
        namespace fs = std::filesystem;

        vector<string> csvFiles;
        for (auto& entry : fs::directory_iterator("../data")) {
            if (entry.path().extension() == ".csv") {
                csvFiles.push_back(normalizePath(entry.path().string()));
            }
        }

        if (csvFiles.size() < 2) {
            cerr << "Not enough CSV files in the data folder for comparison." << endl;
            return 1;
        }

        cout << "Available CSV files:" << endl;
        for (size_t i = 0; i < csvFiles.size(); ++i) {
            cout << i + 1 << ": " << csvFiles[i] << endl;
        }

        //auto fileName1 = csvFiles[0];
        //auto fileName2 =csvFiles[1];
        //cout << fileName1 << endl;
        //cout << fileName2 << endl;

        int file1Index, file2Index;
        cout << "Enter the numbers of the two files to compare (e.g., 1 2): ";
        cin >> file1Index >> file2Index;

        if (file1Index < 1 || file1Index > csvFiles.size() || file2Index < 1 || file2Index > csvFiles.size() || file1Index == file2Index) {
            cerr << "Invalid file selection." << endl;
            return 1;
       }
        //CSVFile file1(fileName1);
        //CSVFile file2(fileName2);
        CSVFile file1(csvFiles[file1Index-1]);
        CSVFile file2(csvFiles[file2Index-1]);
        int pass_count = 0;
        int fail_count = 0;
        assert(file1.loadFile() && "Failed to load CSV file");
        assert(file2.loadFile() && "Failed to load 2nd CSV file");
        auto comp = Comparator(file1, file2);
        Comparison result = comp.compare_headers();
        result.printResult();
        update_summary(result,pass_count,fail_count);

        Comparison result1 = comp.compare_cell_data();
        result1.printResult();
        update_summary(result1,pass_count,fail_count);

        Comparison result2  = comp.compare_column_count();
        result2.printResult();
        update_summary(result2,pass_count,fail_count);

        Comparison result3  = comp.compare_rowcount();
        result3.printResult();
        update_summary(result3,pass_count,fail_count);

        Comparison result4 = comp.compare_missing_values();
        result4.printResult();
        update_summary(result4,pass_count,fail_count);

        Comparison result5 = comp.detect_empty_file();
        result5.printResult();
        update_summary(result5,pass_count,fail_count);

    cout << "\nSummary of Results:" << endl;
    cout << "Number of PASS: " << pass_count << endl;
    cout << "Number of FAIL: " << fail_count << endl;


    }

int main() {
    tesCSVFileload();
    testCSVComparator();
    return 1;
}


