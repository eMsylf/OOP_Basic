// Week 4 - Streams.cpp
// Bob Jeltes

#include <iostream>
#include <fstream>
#include <streambuf>

std::string GetStringFromFile(std::string fileName);
void WriteStringToFile(std::string originalString, std::string newFileName);
void WriteStringToFileReversed(std::string originalString, std::string newFileName);
void WriteLinesToFileAlternately(std::string string1, std::string string2, std::string newFileName);

int main()
{
    std::string originalString = GetStringFromFile("Darth_Plagueis_The_Wise.txt");

    WriteStringToFileReversed(originalString, "Darth_Plagueis_The_Wise_Reversed.txt");
    std::string reversedString = GetStringFromFile("Darth_Plagueis_The_Wise_Reversed.txt");

    WriteLinesToFileAlternately(originalString, reversedString, "Darth_Plagueis_The_Wise_Alternate_Lines.txt");
}

std::string GetStringFromFile(std::string fileName) {
    int docLength = 0;

    // Dit opent een file en print wat erin staat.
    std::ifstream in_stream;
    in_stream.open(fileName);
    std::cout << "Opening file '" << fileName << "\n";
    if (!in_stream) {
        std::cout << "Probleem bij openen file" << std::endl;
        exit(1);
    }

    std::string stringFromFile;
    while (!in_stream.eof()) {
        char ch;
        in_stream.get(ch);
        stringFromFile.push_back(ch);
        //std::cout << docLength << " " << ch << "\n";
        docLength++;
    }
    std::cout << stringFromFile;
    in_stream.close();

    std::cout << "\n--------------------------\n";
    return stringFromFile;
}

void WriteStringToFile(std::string originalString, std::string newFileName) {
    // Dit opent een file, en schrijft de gegeven letters erin
    std::ofstream out_stream;
    std::cout << "Opening file '" << newFileName << "'\n";
    out_stream.open(newFileName);
    if (!out_stream) {
        std::cout << "Problem with opening file" << std::endl;
        exit(2);
    }
    int length = originalString.size();
    std::string reversedString;
    std::cout << "Writing contents of original file to " << newFileName << " in reverse...";
    for (int i = 0; i < length; i++)
    {
        char ch = originalString[i];
        //std::cout << i << " " << ch << "\n";
        out_stream.put(ch);
        reversedString += ch;
    }
    std::cout << reversedString;
    out_stream.close();
    std::cout << "\n--------------------------\n";
}

void WriteStringToFileReversed(std::string originalString, std::string newFileName) {
    // Dit opent een file, en schrijft de gegeven letters erin
    std::ofstream out_stream;
    std::string reversedFileName = newFileName;
    std::cout << "Opening file '" << reversedFileName << "'\n";
    out_stream.open(reversedFileName);
    if (!out_stream) {
        std::cout << "Problem with opening file" << std::endl;
        exit(2);
    }
    int length = originalString.size();
    std::string reversedString;
    std::cout << "Writing contents of original file to " << reversedFileName << " in reverse...";
    for (int i = length; i > -1; i--)
    {
        char ch = originalString[i];
        //std::cout << i << " " << ch << "\n";
        out_stream.put(ch);
        reversedString += ch;
    }
    std::cout << reversedString;
    out_stream.close();
    std::cout << "\n--------------------------\n";
}

void WriteLinesToFileAlternately(std::string string1, std::string string2, std::string newFileName) {
    // Dit opent een file, en schrijft de gegeven string per letter om en om in de nieuwe file weg
    std::cout << "Writing to file " << newFileName << " with alternating lines\n";
    bool getFromString1 = true;
    bool getFromString2 = true;
    bool string1Exhausted = false;
    bool string2Exhausted = false;
    int string1Iterator = 0;
    int string2Iterator = 0;
    std::string newString;

    while (!string1Exhausted || !string2Exhausted) {
        while (!string1Exhausted)
        {
            char ch = string1[string1Iterator];
            //std::cout << ch;
            newString += ch;
            string1Iterator++;
            if (string1Iterator == string1.size()) {
                //std::cout << "String 1 exhausted";
                string1Exhausted = true;
            }
            
            if (ch == '\n') {
                //std::cout << "Switch strings";
                break;
            }
        }

        while (!string2Exhausted) {
            char ch = string2[string2Iterator];
            //std::cout << ch;
            newString += ch;
            string2Iterator++;
            if (string2Iterator == string2.size())
            {
                //std::cout << "String 2 exhausted";
                string2Exhausted = true;
            }
            
            if (ch == '\n') {
                //std::cout << "Switch strings";
                break;
            }
        }
    }

    std::cout << newString << "\n";
    std::cout << "\n--------------------------\n";

    WriteStringToFile(newString, newFileName);
}