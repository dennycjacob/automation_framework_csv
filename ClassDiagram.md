## CSVFile ##
- data: vector<vector<string>>
- headers: vector<string>
- file_path: string
- Methods:
    - CSVFile(file_path: string)
    - loadFile(): bool
    - getData(): const vector<vector<string>>&
    - get_headers(): const vector<string>&
    - get_rowCount(): size_t
    - get_columnCount(): size_t

## Comparison ##
- success: bool
- message: string
- Methods:
    - Comparison(success: bool, message: string)
    - isSuccess(): bool
    - getMessage(): string
    - printResult(): void

## Comparator ##
- file1: const CSVFile&
- file2: const CSVFile&
- Methods:
    - Comparator(f1: const CSVFile&, f2: const CSVFile&)
    - compare_headers(): Comparison
    - compare_rowcount(): Comparison
    - compare_column_count(): Comparison
    - compare_cell_data(): Comparison
    - compare_duplicate_rows(): Comparison
    - compare_missing_values(): Comparison

# Methods and Variables in the classes #
## CSVFile ##
- The CSVFile class is responsible for managing the data from a CSV file. 
- It stores the data in a vector of vectors (data) and the headers separately (headers). 
- It provides methods to load the file, access the data and headers, and get row and column counts.

Variables used in CSVFile Class:

    data: vector<vector<string>> - Stores the data of the CSV file as a vector of rows, where each row is a vector of strings representing the values in each cell.

    headers: vector<string> - Stores the header row of the CSV file as a vector of strings.

    file_path: string - Stores the file path of the CSV files

Method Explanations for CSVFile

    CSVFile(filePath: string) - Constructor that initializes a CSVFile object with the specified file path.

    loadFile(): bool - Loads the CSV file from the provided file path and stores the data and headers.

    getData(): const vector<vector>& - Returns the data of the CSV file.

    get_headers(): const vector& - Returns the headers of the CSV file.

    get_rowCount(): size_t - Returns the number of rows in the CSV file.

    get_columnCount(): size_t - Returns the number of columns in the CSV file.

## Comparison ##

- The Comparison class encapsulates the result of a comparison. 
- It has attributes to indicate whether the comparison was successful (success) and an associated message (message).
- Methods are provided to check the success status and print the result.

Variables used in Comparison class

    success: bool - Indicates whether the comparison was successful.

    message: string - Stores a message describing the outcome of the comparison.

Methods used in Comparison

    Comparison(success: bool, message: string) - Constructor that initializes a Comparison object with the success status and message.

    isSuccess(): bool - Returns whether the comparison was successful.

    getMessage(): string - Returns the message describing the outcome of the comparison.

    printResult(): void - Prints the comparison result message.

    success: bool - Indicates whether the comparison was successful.

    message: string - Stores a message describing the outcome of the comparison.

## Comparator ##

- The Comparator class compares two CSVFile objects (file1 and file2). 
- It provides various methods to cover our test scenarios 

Variable Explanations for Comparator

    file1: const CSVFile& - A reference to the first CSVFile object to be compared.

    file2: const CSVFile& - A reference to the second CSVFile object to be compared.

Methods used in Comparator class

    Comparator(f1: const CSVFile&, f2: const CSVFile&) - Constructor that initializes a Comparator object with two CSVFile objects.
    -- The remaining functions in the Comparator class deals with the different test scenarios ---
