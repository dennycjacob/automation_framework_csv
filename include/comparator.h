#ifndef CSVCOMPARATOR_H
#define CSVCOMPARATOR_H
#include "csvfile.h"
using namespace std;

class Comparison {
    bool success;
    string message;

public:
    Comparison(bool success, const string &message);

    bool isSuccess();

    const string &getMessage();

    void printResult();
};

class Comparator {
    const CSVFile &file1;
    const CSVFile &file2;

public:
    Comparator(const CSVFile &f1, const CSVFile &f2);

    Comparison compare_headers();

    Comparison compare_rowcount();

    Comparison compare_column_count();

    Comparison compare_cell_data();

    Comparison detect_duplicate_rows();

    Comparison compare_missing_values();

    Comparison detect_empty_file();
};
#endif // CSVCOMPARATOR_H
