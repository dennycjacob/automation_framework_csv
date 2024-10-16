// This source file contains :
//Classes:
//CSVFIle, CSVComparator and CSVTestSuite

#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
#include<algorithm>
#include <vector>
#include "../include/csvfile.h"
#include "../include/comparator.h"
using namespace std;

    Comparison::Comparison(bool success, const string& message) : success(success), message(message) {}
    bool Comparison::isSuccess() { return success; }
    const string& Comparison::getMessage() { return message; }
    void Comparison::printResult() {  cout << (success ? "SUCCESS" : "FAILURE") << message << endl;}

    Comparator::Comparator(const CSVFile& file1, const CSVFile& file2) : file1(file1), file2(file2) {}

    Comparison Comparator::compare_headers()  {
         if (file1.get_headers() == file2.get_headers()) {
             return Comparison(true , "  Headers are matching");
         }
         return Comparison(false , "   Headers are not matching");
    }

    Comparison Comparator::compare_rowcount()  {
        if (file1.get_rowCount() == file2.get_rowCount()) {
            return Comparison(true , "   Row counts are matching");
        }
        return Comparison(false , "   Row counts are not matching");
    }

    Comparison Comparator::compare_column_count()  {
        if (file1.get_columnCount() == file2.get_columnCount()) {
            return Comparison(true , "   Column counts  are matching");
        }
        return Comparison(false , "   Column counts are not matching");
    }

    Comparison Comparator::compare_cell_data()  {
        if (file1.get_columnCount() != file2.get_columnCount() || file1.get_rowCount() != file2.get_rowCount()) {
            return Comparison(false , "  Row or colums are not matching");
        }
        for (size_t i = 0; i < file1.get_rowCount();  ++i ) {
            const auto& row_from_file1 = file1.getData()[i];
            const auto& row_from_file2 = file2.getData()[i];
            for (size_t j =0 ; j <row_from_file1.size(); ++j) {
                if (row_from_file1[j] != row_from_file2[j]) {
                    return Comparison(false , "   Mismatch found at row "+ to_string(i) +",column" + to_string(j) +"." );
                }
            }
        }
        return Comparison(true , "   All cells are matching");
    }

