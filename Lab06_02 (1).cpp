// Filename: lab06_02
// I hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
// Project: Finding Substring Matches
// Purpose: Determines whether a substring is found within a target string.
// Due Date: November 14th 2019

#include <iostream>
using namespace std;
//function declarations
bool check_if_contains(string target, string substr);

int main(){
	//variables declared
	string substr = "hello";
	string target = "mohamed is the best";
	//if statement calls function 
	if ( check_if_contains(target, substr)){
		cout << "Match within string found" << endl;
	}
	else{
		cout << "Match within string not found" << endl;
	}
	return 0; 
}

bool check_if_contains(string target, string substr){
	//base case
	int substr_length = substr.length();
	//creates a substring from target string starting at the first character of the same length of the substring
	string compare(target, 0, substr_length);
	// variable for target length
	int target_length = target.length();
	int target_stop = 1;
	//boolean variable to determine whether substring matches substring in compare
	bool exact_match(compare == substr);
	
	if (!exact_match && target_stop <= target_length ){
		// recursive call made by erasing first character and comapring strings
		exact_match = check_if_contains(target.erase(0,1), substr);
	}
	//return true of false
	return exact_match;
}
