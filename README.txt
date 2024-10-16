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
    └── file6.csv


Building and Running the project:

1. Clone the repo automation_framework_csv
2. csv_comparator_test.cpp is the entry point of the project.
2, Build the project and an executable will be generated.
3. Executable will be generated at automation_framework\cmake-build-debug\automation_framework.exe
4. Run the executable automation_framework.exe
5. The user will be prompted to input the numbers of the input files to be compared (eg. 1 2)
6. The test cases will be called and a Summary of results will be printed.

Sample Output:
C:\Users\Denny\CLionProjects\automation_framework\cmake-build-debug\automation_framework.exe
PASS: CSV file loaded
Available CSV files:
1: ../data/file1.csv
2: ../data/file2.csv
3: ../data/file3.csv
4: ../data/file4.csv
5: ../data/file5.csv
Enter the numbers of the two files to compare (e.g., 1 2):1 5
 SUCCESS  Headers are matching
FAILURE  Row or colums are not matching
SUCCESS   Column counts  are matching
FAILURE   Row counts are not matching

Summary of Results:
Number of PASS: 2
Number of FAIL: 2



