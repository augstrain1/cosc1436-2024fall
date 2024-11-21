#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

bool IsIdentifier(char input)
{
    return isalnum(input) || input == '_';
}

bool IsIntegral(std::string const& value)
{
    for (char ch : value)
        if (!isdigit(ch))
            return false;

    return true;
}

bool IsValidIdentifier(std::string const& value)
{
    for (char ch: value)
        if (!isalnum(ch) && ch != '_')
            return false;

    return true;
}

void StringDemo()
{
    while (true)
    {
        std::string input;
        std::cout << "Enter a value: ";
        std::getline(std::cin, input);

        std::cout << "Integer = " << IsIntegral(input) << std::endl;
        std::cout << "Identifier = " << IsValidIdentifier(input) << std::endl;
    }
}

void CharDemo()
{
    while (true)
    {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;

        std::cout << "Alpha =" << (isalpha(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Digit =" << (isdigit(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Letter/Digit =" << (isalnum(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Lower =" << (islower(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Upper =" << (isupper(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Space =" << (isspace(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Id" << (IsIdentifier(input) ? 'Y' : 'N') << std::endl;

        std::cout << "Lower =" << tolower(input) << std::endl;
        std::cout << "Upper =" << toupper(input) << std::endl;
    };
}

void WideCharDemo()
{
    while (true)
    {
        wchar_t input;
        std::cout << "Enter a character: ";
        std::wcin >> input;

        std::cout << "Alpha =" << (iswalpha(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Digit =" << (iswdigit(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Letter/Digit =" << (iswalnum(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Lower =" << (iswlower(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Upper =" << (iswupper(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Space =" <<  (iswspace(input) ? 'Y' : 'N') << std::endl;
        std::cout << "Id" << (IsIdentifier(input) ? 'Y' : 'N') << std::endl;

        std::cout << "Lower =" << towlower(input) << std::endl;
        std::cout << "Upper =" << towupper(input) << std::endl;
    };
}

void CStringDemo()
{
    const char* name = "Bob";
    char nameArray[] = "Bob";

    const int MaximumName = 101;
    char buffer[MaximumName] = {0};

    char firstName[MaximumName] = {0};
    std::cout << "Enter first name: ";
    std::cin >> firstName;

    int len = strlen(buffer);
    buffer[len++] = ' ';

    char lastName[MaximumName] = {0};
    std::cout << "Enter last name: ";
    std::cin >> lastName;

    char fullName[MaximumName + MaximumName] = {0};

    strncpy_s(fullName, firstName, MaximumName);
    strcat_s(fullName, " ");
    strncat_s(fullName, lastName, MaximumName);

    std::cout << fullName << std::endl;

    if (!strcmp(firstName, lastName))
        std::cout << lastName << std::endl;

    else
        std::cout << fullName << std::endl;

    char productName[] = "Microsoft Windows 11";
    char operatingSystem[] = "Windows";

    char* pPos = strstr(productName, operatingSystem);
    if (pPos != nullptr)
        std::cout << pPos << std::endl; 
}

void NumberStringDemo()
{
    while (true)
    {
        char buffer[100] = {0};

        std::cout << "Enter a number: ";
        std::cin >> buffer;

        int value = atoi(buffer);
        std::cout << "Value as int = " << value << std::endl;
    }
}

int main()
{
    //CharDemo();
    //WideCharDemo();
    //StringDemo();
    //CStringDemo();
    NumberStringDemo();
}
