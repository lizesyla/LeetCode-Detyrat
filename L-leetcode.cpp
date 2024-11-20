#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;


//Jewels and Stones
class String1 {
public:
    int balancedStringSplit(string s) {
        int L = 0, R = 0, count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') {
                L++;
            }
            else if (s[i] == 'R') {
                R++;
            }
            if (L == R) {
                count++;
            }
        }
        return count;
    }
};



//Goal Parser Interpretation
class String2 {
public:
    string interpret(string command) {
        string ans;
        int n = command.length();
        for (int i = 0; i < n; i++) {
            if (command[i] == '(') {
                if (command[i + 1] == '/)') {
                    ans.push_back('o');
                }
                else if (command[i + 1] == 'a') {
                    ans.push_back('a');
                    ans.push_back('l');
                }
            }
            else if (command[i] == 'G') {
                ans.push_back('G');
            }
        }
        return ans;
    }
};


//Split a String in Balanced Strings
class String3 {
public:
    int balancedStringSplit(string s) {
        int L = 0, R = 0, count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'L') {
                L++;
            }
            else if (s[i] == 'R') {
                R++;
            }
            if (L == R) {
                count++;
            }
        }
        return count;
    }
};


//Check If Two String Arrays are Equivalent
class String4 {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sen1;
        string sen2;
        int m = word1.size();
        for (int i = 0; i < m; i++) {
            sen1 += word1[i];
        }
        for (int i = 0; i < word2.size(); i++) {
            sen2 += word2[i];
        }
        if (sen1 == sen2) {
            return true;
        }
        return false;
    }
};



//Check if All A's Appears Before All B's
class String5 {
public:
    bool checkString(string s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                if (s[i + 1] == 'a') {
                    return false;
                }
            }
        }
        return true;
    }
};



//Final Value of Variable After Performing Operations
class Array1 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        int n = operations.size();
        for (int i = 0; i < n; i++) {
            if (operations[i] == "--X" || operations[i] == "X--") {
                x--;
            }
            else {
                x++;
            }
        }
        return x;
    }
};



//How Many Numbers Are Smaller Than the Current Number
class Array2 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};



//Concatenation of Array
class Array3 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2 * n;
        vector<int> ans(m, 0);

        int j = 0;
        for (int i = 0; i < m; i++) {
            if (j >= n) {
                j = 0;
            }
            ans[i] = nums[j++];
        }

        return ans;
    }
};



//Count Pairs Whose Sum is Less than Target
class Array4 {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                if (i < j && nums[i] + nums[j] < target) {
                    count++;
                }
            }
        }
        return count;
    }
};



//Two Sum
class Array5 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return { i,j };
                }
            }
        }
        return{};
    }
};



//Richest Customer Wealth
class Matrix1 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int pasuriamax = 0;

        for (int i = 0; i < m; i++) {
            int pasuria = 0;
            for (int j = 0; j < n; j++) {
                pasuria += accounts[i][j];
            }
            pasuriamax = max(pasuria, pasuriamax);
        }
        return pasuriamax;
    }
};


//Matrix Diagonal Sum
class Matrix2 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i + j == m - 1) {
                    count += mat[i][j];
                }
            }
        }
        return count;
    }
};


//Flipping an Image
class Matrix3 {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();
        for (int i = 0; i < m; i++) {
            reverse(image[i].begin(), image[i].end());
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (image[i][j] == 0) {
                    image[i][j] = 1;
                }
                else {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};



//Count Negative Numbers in a Sorted Matrix
class Matrix4 {
public:
    int countNegatives(vector<vector<int>>& matricagrid) {
        int m = matricagrid.size();
        int n = matricagrid[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matricagrid[i][j] < 0) {
                    count++;
                }
            }
        }
        return count;
    }
};



//Row With Maximum Ones
class Matrix5 {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rez = 0;
        int max = 0;

        for (int i = 0; i < mat.size(); i++) {
            int count = 0;
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            if (count > max) {
                max = count;
                rez = i;
            }
        }
        return { rez, max };
    }
};



//Convert the Temperature
class Math1 {
public:
    vector<double> convertTemperature(double celsius) {
        double f, k;
        k = celsius + 273.15;
        f = celsius * 1.80 + 32.00;
        vector<double>ans;
        ans.push_back(k);
        ans.push_back(f);

        return ans;
    }
};


//Smallest Even Multiple
class Math2 {
public:
    int smallestEvenMultiple(int n) {
        int a;
        if (n % 2 == 0) {
            return n;
        }
        return 2 * n;
    }
};



//Sum Multiples
class Math3 {
public:
    int sumOfMultiples(int n) {
        int sum;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        return sum;
    }
};



//Fibonacci Number
class Math4 {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return 1;
        }
        else {
            return fib(n - 1) + fib(n - 2);
        }
    }
};



//Count Operations to Obtain Zero
class Math5 {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) {
                num1 = num1 - num2;
                count++;
            }
            else {
                num2 = num2 - num1;
                count++;
            }
        }
        return count;
    }
};


// Implementimi i funksioneve ne int main

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

// ... (Previous class definitions)

int main() {
    int choice;
    cout << "Choose a number from 1 to 20: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        String1 obj;
        string s;
        cout << "Enter a string: ";
        cin >> s;
        int result = obj.balancedStringSplit(s);
        cout << "Result: " << result << endl;
        break;
    }
    case 2: {
        String2 obj;
        string command;
        cout << "Enter a command string: ";
        cin >> command;
        string result = obj.interpret(command);
        cout << "Result: " << result << endl;
        break;
    }
    case 3: {
        String3 obj;
        string s;
        cout << "Enter a string: ";
        cin >> s;
        int result = obj.balancedStringSplit(s);
        cout << "Result: " << result << endl;
        break;
    }
    case 4: {
        String4 obj;
        vector<string> word1, word2;
        string input1, input2, s;

        cout << "Enter words for word1 (separated by space): ";
        cin.ignore();
        getline(cin, input1);
        stringstream ss(input1);
        while (ss >> s) {
            word1.push_back(s);
        }

        cout << "Enter words for word2 (separated by space): ";
        getline(cin, input2);
        stringstream ss2(input2);
        while (ss2 >> s) {
            word2.push_back(s);
        }

        bool result = obj.arrayStringsAreEqual(word1, word2);
        cout << "Result: " << result << endl;
        break;
    }


    case 5: {
        String5 obj;
        string s;
        cout << "Enter a string: ";
        cin >> s;
        bool result = obj.checkString(s);
        cout << "Result: " << result << endl;
        break;
    }
    case 6: {
        Array1 obj;
        vector<string> operations;
        string s;  // Declare s here

        cout << "Enter operations (separated by space): ";
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s) {
            operations.push_back(s);
        }

        int result = obj.finalValueAfterOperations(operations);
        cout << "Result: " << result << endl;
        break;
    }

    case 7: {
        Array2 obj;
        vector<int> nums;
        string s;  // Declare s here

        cout << "Enter numbers (separated by space): ";
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        vector<int> result = obj.smallerNumbersThanCurrent(nums);
        cout << "Result: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }

    case 8: {
        Array3 obj;
        vector<int> nums;
        string s;  // Declare s here

        cout << "Enter numbers (separated by space): ";
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        vector<int> result = obj.getConcatenation(nums);
        cout << "Result: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }

    case 9: {
        Array4 obj;
        vector<int> nums;
        int target;
        string s;  // Declare s here

        cout << "Enter numbers (separated by space): ";
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        cout << "Enter target: ";
        cin >> target;
        int result = obj.countPairs(nums, target);
        cout << "Result: " << result << endl;
        break;
    }

    case 10: {
        Array5 obj;
        vector<int> nums;
        int target;
        string s;  // Declare s here

        cout << "Enter numbers (separated by space): ";
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        cout << "Enter target: ";
        cin >> target;
        vector<int> result = obj.twoSum(nums, target);
        cout << "Result: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
        break;
    }

    case 11: {
        Matrix1 obj;
        vector<vector<int>> accounts;
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter matrix elements: ";
        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                int element;
                cin >> element;
                row.push_back(element);
            }
            accounts.push_back(row);
        }
        int result = obj.maximumWealth(accounts);
        cout << "Result: " << result << endl;
        break;
    }
    case 12: {
        Matrix2 obj;
        vector<vector<int>> mat;
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter matrix elements: ";
        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                int element;
                cin >> element;
                row.push_back(element);
            }
            mat.push_back(row);
        }
        int result = obj.diagonalSum(mat);
        cout << "Result: " << result << endl;
        break;
    }
    case 13: {
        Matrix3 obj;
        vector<vector<int>> image;
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter matrix elements: ";
        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                int element;
                cin >> element;
                row.push_back(element);
            }
            image.push_back(row);
        }
        vector<vector<int>> result = obj.flipAndInvertImage(image);
        cout << "Result: ";
        for (const auto& row : result) {
            for (int element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
        break;
    }
    case 14: {
        Matrix4 obj;
        vector<vector<int>> mat;
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter matrix elements: ";
        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                int element;
                cin >> element;
                row.push_back(element);
            }
            mat.push_back(row);
        }
        int result = obj.countNegatives(mat);
        cout << "Result: " << result << endl;
        break;
    }
    case 15: {
        Matrix5 obj;
        vector<vector<int>> mat;
        int m, n;
        cout << "Enter the number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter matrix elements: ";
        for (int i = 0; i < m; ++i) {
            vector<int> row;
            for (int j = 0; j < n; ++j) {
                int element;
                cin >> element;
                row.push_back(element);
            }
            mat.push_back(row);
        }
        vector<int> result = obj.rowAndMaximumOnes(mat);
        cout << "Result: " << result[0] << " (Row index) - " << result[1] << " (Maximum Ones)" << endl;
        break;
    }
    case 16: {
        Math1 obj;
        double celsius;
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        vector<double> result = obj.convertTemperature(celsius);
        cout << "Result: " << "Kelvin - " << result[0] << ", Fahrenheit - " << result[1] << endl;
        break;
    }
    case 17: {
        Math2 obj;
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int result = obj.smallestEvenMultiple(n);
        cout << "Result: " << result << endl;
        break;
    }
    case 18: {
        Math3 obj;
        int n;
        cout << "Enter a number: ";
        cin >> n;
        int result = obj.sumOfMultiples(n);
        cout << "Result: " << result << endl;
        break;
    }
    case 19: {
        Math4 obj;
        int num;
        cout << "Enter a number: ";
        cin >> num;
        int result = obj.fib(num);
        cout << "Result: " << result << endl;
        break;
    }
    case 20: {
        Math5 obj;
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int result = obj.countOperations(num1, num2);
        cout << "Result: " << result << endl;
        break;
    }
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
