Folder Structure :


automation_framework/
├── include/
│   ├── csvfile.h                 # Header file for CSVFile class
│   ├── comparator.h              # Header file for Comparison and Comparator class
├── src/
│   ├── csvfile.cpp               # Implementation file for CSVFile class  
│   └── comparator.cpp            # Implementation file for Comparison and Comparator class
├── tests/
│   └── csv_comparator_test.cpp   # Tests for CSV comparator functionality (Entry point for the test)
├── data/
│   ├── file1.csv              
│   └── file2.csv
    └── file3.csv
|   └── file4.csv 
|   └── file5.csv


Building and Running the project:

csv_comparator_test.cpp is the entry point.
Build the project and run the executable ./csv_comparator_test.exe
The user will be prompted to input the numbers of the input files to be compared (eg. 1 2)
The test cases will be called and a Summary of results will be printed.

