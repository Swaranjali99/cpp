//Sort string of characters

A simple approach will be to use 
sorting algorithms like quick sort or merge sort and sort the input string and print it.

// function to print string in sorted order 
void sortString(string &str) 
{ 
   sort(str.begin(), str.end()); 
   cout << str; 
} 


An efficient approach will be to observe first that there can be a total of 26 unique 
characters only. So, we can store the count of occurrences of all the characters from 
‘a’ to ‘z’ in a hashed array. The first index of the hashed array will represent character ‘a’, 
second will represent ‘b’ and so on. Finally, we will simply traverse the hashed array and 
print the characters from ‘a’ to ‘z’ the number of times they occurred in input string.

// function to print string in sorted order 
void sortString(string &str) 
{ 
    // Hash array to keep count of characters. 
    // Initially count of all charters is  
    // initialized to zero. 
    int charCount[MAX_CHAR] = {0}; 
      
    // Traverse string and increment  
    // count of characters 
    for (int i=0; i<str.length(); i++) 
  
        // 'a'-'a' will be 0, 'b'-'a' will be 1, 
        // so for location of character in count  
        // array we wil do str[i]-'a'. 
        charCount[str[i]-'a']++;     
      
    // Traverse the hash array and print  
    // characters 
    for (int i=0;i<MAX_CHAR;i++) 
        for (int j=0;j<charCount[i];j++) 
            cout << (char)('a'+i); 
} 