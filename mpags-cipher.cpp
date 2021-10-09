#include <iostream>
#include <string>
int main()
{
    
    char in_char{'x'};
    std::string out_str{""};

    while (std::cin >> in_char)
    {
        if (islower(in_char))
        {
            in_char = toupper(in_char);
            out_str = out_str + in_char;
            continue;
        }
        else if (isupper(in_char))
        {
            out_str = out_str + in_char;
            continue;
        }
        std::cout << "number!" << std::endl;
        /* If the loop is still going, then the character is not a letter. We first check for numbers. */
        switch (in_char)
        {
        case '0':
            out_str = out_str + "ZERO";
            break;
        case '1':
            out_str = out_str + "ONE";
            break;
        case '2':
            out_str = out_str + "TWO";
            break;
        case '3':
            out_str = out_str + "THREE";
            break;
        case '4':
            out_str = out_str + "FOUR";
            break;
        case '5':
            out_str = out_str + "FIVE";
            break;
        case '6':
            out_str = out_str + "SIX";
            break;
        case '7':
            out_str = out_str + "SEVEN";
            break;    
        case '8':
            out_str = out_str + "EIGHT";
            break;
        case '9':
            out_str = out_str + "NINE";
            break;    
        default:
            /*We don't want characters that aren't numbers or letters, so we can safely do nothing here */
            break;
        }
    }
    std::cout << out_str << std::endl;
    return(0);

}