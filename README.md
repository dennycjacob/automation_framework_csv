# Test Pan for CSV comparison

## Introduction
This document provides test plan for an automation framework for comparing CSVs. Different CSV files can be compared for data accuracy and content

## Objectives
- Verify the correctness of data comparison between multiple CSV files.

## Test Environment
- Programming Language: C++
- Tools: C++ Compiler, CSV files as input, IDE used is CLIon
- CSV Files: Multiple files (`file1.csv`, `file2.csv`, `file3.csv`, etc.).

## Prerequisites
- Ensure all CSV files exist in the working directory.
- The user should be able to select which CSV files to compare.

## Test Scenarios

### Test Scenario 1: Comparing Headers
**Objective**: Verify that the header values of the selected CSV files are identical.
- **Steps**: Compare the headers of the input files.
- **Expected Result**: The tests passes if Headers match across all selected files.

### Test Scenario 2: Comparing Row Counts
**Objective**: Validate that the number of rows in the selected CSV files is identical.
- **Steps**: Count the number of rows in the selected files.
- **Expected Result**: The test passes if row counts are same across all selected files.

### Test Scenario 3: Comparing Column Counts
**Objective**: Validate that the number of columns in the selected CSV files is identical.
- **Steps**: Count the number of columns in each selected file.
- **Expected Result**: The test passes if column counts match across all selected files.

### Test Scenario 4: Comparing cell by cell data
**Objective**: Verify that each cell's data matches between the selected files.
- **Steps**: Compare the content of each cell in corresponding rows and columns across all selected files.
- **Expected Result**: The test passes if all cells should have identical data across all selected files.

### Test Scenario 5: Detecting Duplicate Rows
**Objective**: Verify that the duplicate rows are detected between the selected files.
- **Steps**: Compare each row of the selected CSV files
- **Expected Result**: Duplicate rows should be reported and the Test passes if there are no duplicate rows.

### Test Scenario 6: Detecting empty Files
**Objective**: Verify that the input files are not empty.
- **Steps**: Compare either one of the input files  to see if they are empty
- **Expected Result**: The test fails if either of the files are empty.

### Test Scenario 7: Detecting Missing and Null Values
**Objective**: Verify that the input files does not contain missinf or null values.
- **Steps**: Compare the cells of both the files to account for missing or empty cells
- **Expected Result**: The test passes if the input files doesnt have any missing or null values






